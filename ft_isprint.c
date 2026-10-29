/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:25:40 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/19 15:20:31 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
int main (void)
{
    printf("A:     %d\n", ft_isprint('A'));
    printf("Clear: %d\n", ft_isprint(18));
    printf("9:     %d\n", ft_isprint('9'));
    return (0);
}
*/