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
    while (n-- > 0)
    {
        *p = (unsigned char )c;
        p ++;
    }
    return (s);
}
/*
int main (void)
{

    char str[] = "Ahmed-Zaimoun";
    char c = 'Z';

    printf("Before: %s\n",str);
    ft_memset(str,c,5);
    printf("After:  %s\n",str);
    return (0);
}
*/