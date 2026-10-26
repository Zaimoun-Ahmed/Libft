/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-25 09:27:51 by azaimoun          #+#    #+#             */
/*   Updated: 2026-10-25 09:27:51 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_len(long nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	{
		len = 1;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		len ++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	nbr;
	int		len;

	nbr = n;
	len = ft_count_len(nbr);
	s = malloc (sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (nbr == 0)
		s[0] = '0';
	if (nbr < 0)
	{
		s[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		s[--len] = ((nbr % 10) + '0');
		nbr /= 10;
	}
	return (s);
}
/*
int main (void)
{
	int n = -3648;
	char *s;

	s = ft_itoa(n);

	printf("%s", s);
	
	return (0);
}
*/