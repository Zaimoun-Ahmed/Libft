/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-26 15:36:11 by azaimoun          #+#    #+#             */
/*   Updated: 2026-10-26 15:36:11 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *node;

	node = malloc (sizeof(t_list));
	if(!node)
		return (NULL);
	node->content = content;
	node->next = (NULL);

	return (node);
}

/*
int main (void)
{
	t_list *node1;

	node1 = ft_lstnew("Ahmed-Zaimoun");

	printf("%s", (char *)node1->content);

	return (0);
}
*/