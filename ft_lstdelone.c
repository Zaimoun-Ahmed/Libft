/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-27 12:42:43 by azaimoun          #+#    #+#             */
/*   Updated: 2026-10-27 12:42:43 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	del(void *node)
{
	free(node);
}
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
int main(void)
{
    t_list *node;
    char *str;

    // Allocate memory for the content so we can free it safely
    str = ft_strdup("Delete me!");
    if (!str)
        return (1);

    // Create the node with the allocated string
    node = ft_lstnew(str);
    if (!node)
    {
        free(str);
        return (1);
    }

    printf("Node created with content: %s\n", (char *)node->content);

    // Delete the node and its content using ft_lstdelone
    ft_lstdelone(node, del);

    printf("Node successfully deleted!\n");

    return (0);
}
*/