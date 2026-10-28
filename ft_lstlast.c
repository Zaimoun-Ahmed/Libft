/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-27 11:43:21 by azaimoun          #+#    #+#             */
/*   Updated: 2026-10-27 11:43:21 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != (NULL))
	{
		lst = lst->next;
	}
	return (lst);
}

/*
int main(void)
{
    t_list *lst = NULL;
    t_list *last_node;

    // Test 1: Empty list (should return NULL)
    last_node = ft_lstlast(lst);
    if (!last_node)
        printf("Empty list: last node is NULL (Correct)\n");

    // Add nodes
    ft_lstadd_front(&lst, ft_lstnew("Third node (Last)"));
    ft_lstadd_front(&lst, ft_lstnew("Second node"));
    ft_lstadd_front(&lst, ft_lstnew("First node"));

    // Test 2: Populated list 
	(should return the "Third node" since we used add_front)
    last_node = ft_lstlast(lst);
    if (last_node)
        printf("Last node content: %s\n", (char *)last_node->content);

    return (0);
}
*/