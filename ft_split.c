/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:13:55 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/20 19:42:51 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	
	count = 0;
	i = 0;
	if (s[i] == c)
		i ++;
	
	while (s[i])
	{
		if(s[i] == c && (s[i + 1] != c || s[i + 1] == '\0'))
					count ++;
		i ++;
	}
	return (count + 1);
}

char **ft_fill_arr(char const *s, char sep, char **arr)
{
	
}

char **ft_split(char const *s, char c)
{
    // s: The string to be split.
    // c: The delimiter character.
    
	char	**s_arr;
	size_t	words_count;
	size_t	i;

	i = 0;
	words_count = 0;
	words_count = ft_count_words(s,c);
	s_arr = malloc ((words_count + 1) * (sizeof(char *)));
	s_arr[words_count + 1] = (NULL);

	if (!s_arr)
	{
		while (i < words_count)
		{
			free(s_arr[i]);
			i ++;
		}
	}	

	


    
}