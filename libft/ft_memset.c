/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikeda <yikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 16:46:20 by yikeda            #+#    #+#             */
/*   Updated: 2020/10/06 12:59:50 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*mem;
	size_t	i;

	mem = (char*)b;
	c = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		mem[i] = c;
		i++;
	}
	return ((void*)(mem));
}
