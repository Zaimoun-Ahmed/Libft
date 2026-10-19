/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:20:03 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/18 10:21:45 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while ((dstsize != 0) && (src[i] != '\0') && (i < dstsize - 1))
	{
		dst[i] = src[i];
		i ++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

/*
int main ()
{

    char str[] = "Ahmed-Zaimoun-Ahmed-Zaimoun99";
    char dst[20] = "";

    ft_strlcpy(dst, str, sizeof(dst));

    printf("%s", dst);

    return (0);
}
*/