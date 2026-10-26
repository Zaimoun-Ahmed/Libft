/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-25 10:33:35 by azaimoun          #+#    #+#             */
/*   Updated: 2026-10-25 10:33:35 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char func(unsigned int i, char c)
{
	return (c += i);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	str = malloc(s_len + 1);
	if (!str)
		return (NULL);
	str[s_len] = '\0';
	i = 0;
	while (s[i])
	{
		str[i] = f (i, s[i]);
		i ++;
	}
	return (str);
}
/*
int main (void)
{

	char *s = "AHMED";

	printf("%s",ft_strmapi(s,func));


	return (0);
}
*/