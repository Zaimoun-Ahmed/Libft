/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 20:51:09 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/19 10:14:33 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ds;
	const unsigned char	*sr;
	size_t				i;

	if (!dst || !src)
		return (NULL);
	ds = dst;
	sr = src;
	i = 0;
	if (ds > sr)
	{
		while (len --)
			ds[len] = sr[len];
	}
	else
	{
		while (i < len)
		{
			ds[i] = sr[i];
			i ++;
		}
	}
	return (dst);
}
/*
int main (void)
{

    char str[] = "Ahmed-Zaimoun";
    char dst[20];
    ft_memmove(dst, str, 7);
    printf("%s\n", dst);


    char Buffer1[] = "abcdefghijkl";
    ft_memmove(Buffer1 + 2, Buffer1, 5);
    printf("%s\n", Buffer1);


    char Buffer2[] = "abcdefgh";
    memmove(Buffer2 , Buffer2 + 2, 2);
    printf("%s\n", Buffer2);

    return (0);
}
*/