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
	const unsigned char	*sr;
	unsigned char		*ds;
	size_t				i;

	if (!dst || !src)
		return (NULL);
	sr = src;
	ds = dst;
	i = 0;
	if (ds > sr)
	{
		while (len-- > 0)
		{
			ds[len] = sr[len];
		}
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
int main(void)
{

	char srx[] = "Ahmed-Zaimoun";
	char dst[20];

	ft_memmove(srx + 2,srx,3);
	printf("%s",dst);




    return (0);
}
*/