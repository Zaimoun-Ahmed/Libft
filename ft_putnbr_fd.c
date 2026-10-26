/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-25 15:37:59 by azaimoun          #+#    #+#             */
/*   Updated: 2026-10-25 15:37:59 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
}
/*
int main (void)
{
	
	int fd;

	fd = open ("test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0744);
	if (fd == -1)
	{
		printf("ERROR");
	}
	else 
	ft_putnbr_fd(-123456789,fd);
	close (fd);

	return (0);
}
*/