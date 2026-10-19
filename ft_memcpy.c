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
	unsigned char		*ds;
	const unsigned char	*sr;

	ds = dst;
	sr = src;
	while (n--)
	{
		*ds = *sr;
		ds ++;
		sr ++;
	}
	return (dst);
}
/*
int main(void)
{
	char *str = "Ahmed-zaimoun";
	
	char dst[20] = "";

	printf("%s\n", dst);
	
	memcpy(dst,str,5);
	printf("\n%s", dst);

	return (0);
}
*/