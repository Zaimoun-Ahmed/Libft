/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:35:24 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/19 09:57:53 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ds;
	unsigned const char	*sr;

	ds = dst;
	sr = src;
	while (n-- > 0)
	{
		*ds = *sr;
		ds++;
		sr++;
	}
	return (dst);
}
/*
int main (void)
{
	char dst[] = "";
	char *src = "Ahmed-Zaimoun";

	printf("Before: %s\n",dst);
	ft_memcpy(dst,src,5);
	printf("After:  %s",dst);


	return (0);
}
*/