/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikeda <yikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 18:14:54 by yikeda            #+#    #+#             */
/*   Updated: 2020/10/07 15:36:24 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char				*chardst;
	const unsigned char *charsrc;
	unsigned char		uc;
	size_t				i;

	chardst = (char*)dst;
	charsrc = (const unsigned char*)src;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		chardst[i] = charsrc[i];
		if (charsrc[i] == uc)
			return ((void*)(&(chardst[i + 1])));
		i++;
	}
	return (NULL);
}
