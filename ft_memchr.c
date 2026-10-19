/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:20:52 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/18 13:25:15 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = s;
	i = 0;
	while (i < n)
	{
		if (*p == (unsigned char)c)
		{
			return ((void *)p);
		}
		i ++;
		p ++;
	}
	return (NULL);
}
/*
int main (void)
{
    char str[] = "banfana";

    printf("%s", ft_memchr(str,'f',5));

    return (0);
}
*/