/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:15:56 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/19 10:18:08 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
	{
		*p = (unsigned char)c;
		p++;
	}
	return (s);
}
/*
int main (void)
{
    char bytes[20];
    int i = 0;

    while (i < 19)
    {
        bytes[i] = '.';
        i ++;
    }
    bytes[19] = '\0';

    printf("Before memset%s\n\n",bytes );

    printf("%s\n", ft_memset(bytes, 'Z', 7));
    printf("%s\n", memset(bytes, 'Z', 7));

    return (0);
}
*/