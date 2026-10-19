/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 14:11:01 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/18 14:11:55 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s ++;
	}
	if ((char )c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int main (void)
{
    char s[] = "ahmed";

    printf("%s", ft_strchr(s,'m'));

    return (0);
}
*/