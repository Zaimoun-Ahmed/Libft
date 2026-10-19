/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:36:50 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/17 15:49:19 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l])
		l ++;
	return (l);
}

/*
int main (void)
{
    printf("%zu\n", ft_strlen("Ahmed-Zaimoun99"));
    printf("%zu\n", strlen("Ahmed-Zaimoun99"));

    return (0);
}
*/