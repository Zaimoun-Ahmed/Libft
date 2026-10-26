/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-25 14:49:21 by azaimoun          #+#    #+#             */
/*   Updated: 2026-10-25 14:49:21 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int main (void)
{
    char *s = "AHMED-ZAIMOUN";
    int fd;

    fd = open("fl.txt", O_WRONLY | O_CREAT , 0744);

    if (fd == -1)
    {
        printf("%s", "ERROR!");
        return (1);
    }
    else
    {
    ft_putendl_fd(s,fd);
    close (fd);
    }
    return (0);
}
*/