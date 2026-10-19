/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:33:09 by azaimoun          #+#    #+#             */
/*   Updated: 2026/10/18 17:34:00 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_s;

	if (count && (size > (size_t)-1 / count))
		return (NULL);
	total_s = count * size;
	ptr = malloc (total_s);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_s);
	return (ptr);
}
/*
int main (void)
{
    char *str;

    str = ft_calloc(10, 1);

    printf("%s", str);

    return (0);
}
*/