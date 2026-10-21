/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 18:20:37 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/21 12:48:41 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_char_in_set(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	i;
	size_t	s_start;
	size_t	s_end;

	if (!s1 || !set)
		return (NULL);
	s_start = 0;
	while (s1[s_start] && ft_is_char_in_set(s1[s_start], set) == 1)
		s_start ++;
	s_end = ft_strlen(s1);
	while (s_end > s_start && ft_is_char_in_set(s1[s_end - 1], set))
		s_end --;
	dst = malloc ((s_end - s_start) + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (s_start < s_end)
		dst[i ++] = s1[s_start ++];
	dst[i] = '\0';
	return (dst);
}
