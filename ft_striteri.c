/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-25 11:38:07 by azaimoun          #+#    #+#             */
/*   Updated: 2026-10-25 11:38:07 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	func(unsigned int i, char *s)
{
	*s += i;
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i ++;
	}
}
/*
int main (void)
{

	char s[] = "AHMED";


	ft_striteri(s,NULL);

	printf("%s\n", s);

	return (0);
}
*/