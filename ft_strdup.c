/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:47:53 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/19 09:56:05 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s1_len;
	size_t	i;
	char	*s2;

	s1_len = 0;
	i = 0;
	s1_len = ft_strlen(s1);
	s2 = malloc(s1_len + 1);
	if (!s2)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i ++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int main (void)
{

	char *str = "Ahmed-Zaimoun";
	char *dst;

	printf("%s\n", dst);
	
	dst = ft_strdup(str);

	printf("%s\n", dst);
	


	return (0);
}
*/