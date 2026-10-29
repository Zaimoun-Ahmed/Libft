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
	while (n-- > 0)
	{
		*p = '0';
		p ++;
	}
}

/*
int main (void)
{
	char str[] = "Ahmed-Zaimoun";

	printf("Before: %s\n",str);
	ft_bzero(str,5);
	printf("After:  %s",str);

	return (0);
}
*/