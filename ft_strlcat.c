/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:06:05 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/18 12:08:03 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	dst_len = 0;
	while (dst_len < dstsize && dst[dst_len] != '\0')
		dst_len ++;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while ((src[i] != '\0') && ((dst_len + i) < (dstsize - 1)))
	{
		dst[dst_len + i] = src[i];
		i ++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int main (void)
{

    char dst[10] = "Ahmed";

    ft_strlcat(dst, "-Zaimoun", sizeof(dst));

    printf("%s", dst);

    return (0);
}
*/