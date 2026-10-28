/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-26 17:25:27 by azaimoun          #+#    #+#             */
/*   Updated: 2026-10-26 17:25:27 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main (void)
{	
	t_list *lst = (NULL);
	t_list *node;


	node = ft_lstnew("New Node!");
	if (!node)
		return (1);

	ft_lstadd_front(&lst,node);


	printf ("First Node Content: %s", (char *)node->content);

	return (0);
}
*/