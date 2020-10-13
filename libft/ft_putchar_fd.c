/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikeda <yikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 17:11:28 by yikeda            #+#    #+#             */
/*   Updated: 2020/10/13 18:34:09 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	char	first;
	char	second;

	if ((unsigned char)c <= 0x7F)
	{
		write(fd, &c, 1);
	}
	else
	{
		first = X8 + X7 + ((unsigned char)c / X7);
		write(fd, &first, 1);
		second = X8 + ((unsigned char)c % X7);
		write(fd, &second, 1);
	}
}
