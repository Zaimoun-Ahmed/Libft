/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:34:05 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/19 16:20:24 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *s3;
    size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	
	if (!s1 || !s2)
		return (NULL);
	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s3 = malloc((s1_len +s2_len) + 1);
	if (!s3)
		return (NULL);
	while (*s1)
	{
		s3[i++] = *s1++;
	}
	while (*s2)
	{
		s3[i++] = *s2++;
	}
	s3[i] = '\0';
	return (s3);
}

/*
int main (void)
{
	
	
	
	

	return (0);
}




*/