/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikeda <yikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 13:20:46 by yikeda            #+#    #+#             */
/*   Updated: 2020/10/14 14:56:11 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_words(char const *s, char c)
{
	int		i;
	int		count;

	if (!s)
		return (0);
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static	void	*ft_memfree(char **array, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static	int		ft_tofind_len(char const *s, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static	char	**ft_split_str(char const *str, int words_count, char c,
		char **array)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	while (i < words_count)
	{
		while (*str == c)
			str++;
		len = ft_tofind_len(str, c);
		if (!(array[i] = (char *)malloc(sizeof(char) * (len + 1))))
			return (ft_memfree(array, i));
		j = 0;
		while (j < len)
			array[i][j++] = *str++;
		array[i][j] = '\0';
		i++;
	}
	array[i] = NULL;
	return (array);
}

char			**ft_split(char const *s, char c)
{
	char	**array;
	int		words_count;

	if (!s)
		return (NULL);
	words_count = ft_count_words(s, c);
	if (!(array = (char **)malloc(sizeof(char *) * (words_count + 1))))
		return (NULL);
	array = ft_split_str(s, words_count, c, array);
	return (array);
}
