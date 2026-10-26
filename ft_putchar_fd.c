/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-25 12:01:02 by azaimoun          #+#    #+#             */
/*   Updated: 2026-10-25 12:01:02 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int main (void)
{

	int fd;

	fd = open("tst_file.txt", O_CREAT | O_WRONLY , 0744);
	if (fd == -1)
	{
		printf("ERROR!");
	}
	else
	{
	ft_putchar_fd('A',fd);
	close(fd);
	}
	return (0);
}
*/