/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikeda <yikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 14:20:27 by yikeda            #+#    #+#             */
/*   Updated: 2020/10/08 18:49:46 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;
	int				i;

	c = (unsigned char)c;
	str = (unsigned char*)s;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char*)&str[i]);
		i++;
	}
	if (str[i] == '\0' && c == '\0')
		return ((char*)&str[i]);
	return (NULL);
}
