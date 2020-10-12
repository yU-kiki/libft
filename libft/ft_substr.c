/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikeda <yikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 13:29:41 by yikeda            #+#    #+#             */
/*   Updated: 2020/10/12 13:22:25 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	max_len;
	char			*dst;

	if (!s || len <= 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	else
	{
		max_len = ft_strlen(&s[start]);
		if (max_len < len)
			len = max_len;
		if (!(dst = malloc(sizeof(char) * (len + 1))))
			return (NULL);
		i = 0;
		while (s[i] && i < len)
		{
			dst[i] = s[i + start];
			i++;
		}
		dst[i] = '\0';
		return (dst);
	}
}
