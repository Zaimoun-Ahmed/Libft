/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-25 13:14:37 by azaimoun          #+#    #+#             */
/*   Updated: 2026-10-25 13:14:37 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s ++;
	}
}
/*
int main (void)
{
	char *s = "AHMED-ZAIMOUN";
	int fd;

	fd = open ("test.txt", O_WRONLY | O_CREAT , 0744);
	if(fd == -1)
	{
		printf("%s","Error Message");
	}
	else
	{
		ft_putstr_fd(s,fd);
		close(fd);
	}
	return (0);
}
*/