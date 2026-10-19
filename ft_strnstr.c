/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:13:22 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/18 15:15:35 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0' && ((i + j) < len) 
			&& haystack[i + j] != '\0' && haystack[i + j] == needle[j])
			j ++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i ++;
	}
	return (NULL);
}
/*
int main (void)
{
 
    char s1[] = "AhmedZaimounAliKarim";
 
    printf("%s", ft_strnstr(s1,"Zaimoun",20));
 
    return (0);
}
*/