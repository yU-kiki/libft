/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikeda <yikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 15:22:44 by yikeda            #+#    #+#             */
/*   Updated: 2020/10/08 17:45:01 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*chardst;
	const char	*charsrc;
	size_t		i;

	if (!dst && !src)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	chardst = (char*)dst;
	charsrc = (const char*)src;
	i = len;
	while (i > 0)
	{
		chardst[i - 1] = charsrc[i - 1];
		i--;
	}
	return ((void*)(chardst));
}
