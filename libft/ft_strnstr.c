/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikeda <yikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 16:01:13 by yikeda            #+#    #+#             */
/*   Updated: 2020/10/13 16:04:44 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		if (i > maxlen)
			return (maxlen);
	}
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		n;
	size_t	needle_len;

	if (len == 0 && needle != NULL)
		return (NULL);
	needle_len = ft_strnlen(needle, len);
	if (needle_len == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		n = 0;
		while (haystack[i + n] && needle[n] && haystack[i + n] == needle[n]
		&& i + n < len)
			n++;
		if (needle[n] == '\0')
			return ((char*)(&(haystack[i])));
		i++;
	}
	return (NULL);
}
