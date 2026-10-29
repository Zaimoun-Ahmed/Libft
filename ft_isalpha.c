/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:12:54 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/17 14:19:35 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
/*
int main (void)
{

    printf("Z: %d \n",ft_isalpha('Z'));
    printf("9: %d\n",ft_isalpha('9'));
    printf("@: %d\n",ft_isalpha('@'));
    return (0);
}
*/