/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:41:40 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/21 12:44:49 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		in_word;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

void	ft_fill_arr(char const *s, char sep, char **arr, size_t arr_size)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	end = 0;
	while (i < arr_size && s[start])
	{
		while (s[start] == sep && s[start])
			start ++;
		end = start;
		while (s[end] != sep && s[end])
			end ++;
		arr[i] = ft_substr(s, start, (end - start));
		i ++;
		start = end;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**s_arr;
	size_t	words_count;

	if (!s)
		return (NULL);
	words_count = ft_count_words(s, c);
	s_arr = malloc((words_count + 1) * sizeof(char *));
	if (!s_arr)
		return (NULL);
	s_arr[words_count] = NULL;
	ft_fill_arr(s, c, s_arr, words_count);
	return (s_arr);
}
/*
int main (void)
{
	char **arr;
	char sep = '-';
	char *str = "------------Ahmed-Zaimoun-99";
	int i = 0;
	arr = ft_split(str, sep);

	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i ++;
	}

	return (0);
}
*/