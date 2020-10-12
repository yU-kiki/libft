/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikeda <yikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 14:52:35 by yikeda            #+#    #+#             */
/*   Updated: 2020/10/09 12:18:12 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	int				i;

	c = (unsigned char)c;
	str = (unsigned char*)s;
	i = ft_strlen(s);
	if ((char)c == '\0')
		return ((char*)&str[i]);
	while (i != -1)
	{
		if (str[i] == c)
			return ((char*)&str[i]);
		i--;
	}
	return (NULL);
}
