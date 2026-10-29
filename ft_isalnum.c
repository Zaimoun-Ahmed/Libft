/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:20:18 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/17 14:25:14 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (((c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122))
		|| (c >= 48 && c <= 57));
}
/*
int main (void)
{	
	
    printf("Z: %d\n", ft_isalnum('Z'));
    printf("9: %d\n", ft_isalnum('9'));
    printf("#: %d\n", ft_isalnum('#'));
	return (0);
}
*/