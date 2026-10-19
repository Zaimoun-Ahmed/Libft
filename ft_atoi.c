/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:17:28 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/18 15:18:43 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	sum;

	sign = 1;
	sum = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		sum = (sum * 10) + (*str - '0');
		str++;
	}
	return (sum * sign);
}

/*
#include <stdlib.h>
#include <stdio.h>

int main ()
{
    printf("%d \n", ft_atoi("      +32541245332221876738852336fer"));
    printf("%d", atoi("      +32541245332221876738852336fer"));


    return (0);
}
*/
