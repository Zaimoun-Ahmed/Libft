/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-27 12:22:26 by azaimoun          #+#    #+#             */
/*   Updated: 2026-10-27 12:22:26 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next != (NULL))
	{
		current = current->next;
	}
	current->next = new;
}
/*
int main(void)
{
    t_list *lst = NULL;
    t_list *temp;

    // Test 1: Add to an empty list using ft_lstadd_back
    ft_lstadd_back(&lst, ft_lstnew("First node"));

    // Test 2: Add subsequent nodes to the back
    ft_lstadd_back(&lst, ft_lstnew("Second node"));
    ft_lstadd_back(&lst, ft_lstnew("Third node"));

    // Print the list to verify the order
    temp = lst;
    while (temp != NULL)
    {
        printf("%s -> ", (char *)temp->content);
        temp = temp->next;
    }
    printf("NULL\n");

    return (0);
}
*/