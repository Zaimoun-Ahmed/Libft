/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:58:16 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/18 13:59:17 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = s1;
	p2 = s2;
	while (i < n)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1 ++;
		p2 ++;
		i ++;
	}
	return (0);
}
/*
int main (void)
{

    char s1[] = "Abmed";
    char s2[] = "Ahmed";

    printf("%d", ft_memcmp(s1,s2,3));
    return (0);
}
*/