/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-27 11:08:51 by azaimoun          #+#    #+#             */
/*   Updated: 2026-10-27 11:08:51 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	len;

	if (!lst)
		return (0);
	len = 0;
	while (lst != (NULL))
	{
		lst = lst->next;
		len ++;
	}
	return (len);
}
/*
int main(void)
{
    t_list *lst = NULL;

    // Test 1: Empty list (should print 0)
    printf("Size of empty list: %u\n", ft_lstsize(lst));

    // Test 2: Add nodes to the list
    ft_lstadd_front(&lst, ft_lstnew("Third node"));
    ft_lstadd_front(&lst, ft_lstnew("Second node"));
    ft_lstadd_front(&lst, ft_lstnew("First node"));

    // Test 3: Populated list (should print 3)
    printf("Size of list after adding 3 nodes: %u\n", ft_lstsize(lst));

    return (0);
}
*/