/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikeda <yikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 16:07:31 by yikeda            #+#    #+#             */
/*   Updated: 2020/10/08 16:29:30 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;
	size_t	i;

	if (!(dst = malloc(size * count)))
		return (NULL);
	i = 0;
	while (i < size * count)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}
