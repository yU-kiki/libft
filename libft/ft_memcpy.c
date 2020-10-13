/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikeda <yikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 18:14:26 by yikeda            #+#    #+#             */
/*   Updated: 2020/10/13 13:28:21 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*chardst;
	const char	*charsrc;
	size_t		i;

	if (dst == NULL && src == NULL)
		return (NULL);
	chardst = (char*)dst;
	charsrc = (const char*)src;
	i = 0;
	while (i < n)
	{
		chardst[i] = charsrc[i];
		i++;
	}
	return ((void*)(chardst));
}
