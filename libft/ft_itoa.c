/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikeda <yikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 17:10:26 by yikeda            #+#    #+#             */
/*   Updated: 2020/10/14 13:15:00 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_isnegative(int n)
{
	int		negative;

	negative = 0;
	if (n < 0)
		negative = 1;
	return (negative);
}

static	int		ft_count_figure_length(int n)
{
	int		length;

	length = 1;
	while (n >= 10)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = 0;
	negative = 0;
	len = ft_count_figure_length(n);
	if (ft_isnegative(n) == 1)
	{
		len = ft_count_figure_length(n *= -1) + 1;
		negative = 1;
	}
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (negative == 1)
		str[0] = '-';
	return (str);
}
