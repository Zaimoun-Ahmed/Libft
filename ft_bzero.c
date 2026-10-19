/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:17:32 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/18 17:18:41 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
	{
		*p = '0';
		p ++;
	}
}

/*
int main (void)
{

    char bytes[15];
    int i = 0;

    while (i < 14)
    {
        bytes[i] = 'A';
        i ++;
    }
    bytes [14] = '\0';

    i = 0;
    printf("Bytes Before bzero: %s\n\n",bytes);

    ft_bzero(bytes,5);

    printf("%s" ,"Bytes after bzero1: ");
    while(i < 14)
    {
        printf("%c",bytes[i]);
        i ++;
    }
    return (0);
}
*/