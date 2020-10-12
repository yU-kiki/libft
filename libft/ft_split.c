/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikeda <yikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 17:10:04 by yikeda            #+#    #+#             */
/*   Updated: 2020/10/12 18:15:14 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_splited_words(char const *str, char c)
{
	int		count;

	count = 0;
	while (*str)
	{
		if (*str == c)
			count++;
		str++;
	}
	return (count);
}

void	ft_strncpy(char *dst, const char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
}

void	ft_split_str(char **array, char const *str, char c, int strs_nbr)
{
	int		i;
	int		len;

	i = 0;
	while (i < strs_nbr)
	{
		len = 0;
		while (str[len])
		{
			if (*str == c)
			{
				array[i] = (char *)malloc(sizeof(char) * (len + 1));
				ft_strncpy(array[i], str, len);
				str++;
				break ;
			}
			len++;
			str++;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		strs_nbr;

	if (!*s)
		return (NULL);
	strs_nbr = ft_count_splited_words(s, c);
	if (!(array = (char **)malloc(sizeof(char *) * (strs_nbr + 1))))
		return (NULL);
	array[strs_nbr] = NULL;
	ft_split_str(array, s, c, strs_nbr);
	return (array);
}
