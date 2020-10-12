/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikeda <yikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 17:00:34 by yikeda            #+#    #+#             */
/*   Updated: 2020/10/08 15:59:02 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;

	d = 0;
	s = 0;
	while (dst[d])
		d++;
	while (src[s])
		s++;
	if (d >= dstsize)
		return (s + dstsize);
	i = 0;
	while (d + i + 1 < dstsize && src[i] != '\0')
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}
