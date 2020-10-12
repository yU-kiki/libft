/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikeda <yikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 13:53:55 by yikeda            #+#    #+#             */
/*   Updated: 2020/10/09 17:07:00 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	len1;
	size_t	len2;
	size_t	i;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		if (!(dst = (char*)malloc(sizeof(char) * (len1 + len2 + 1))))
			return (NULL);
		i = -1;
		while (s1[i++])
			dst[i] = s1[i];
		i = -1;
		while (s2[i++])
		{
			dst[len1] = s2[i];
			len1++;
		}
		dst[len1] = '\0';
		return (dst);
	}
	return (NULL);
}
