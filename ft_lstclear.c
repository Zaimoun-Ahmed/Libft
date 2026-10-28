/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimoun <azaimoun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-27 13:13:02 by azaimoun          #+#    #+#             */
/*   Updated: 2026-10-27 13:13:02 by azaimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_node;

	if (!*lst || !del ||!lst)
		return ;
	while (*lst != (NULL))
	{
		next_node = (*lst)->next;
		ft_lstdelone (*lst, del);
		*lst = next_node;
	}
	*lst = (NULL);
}

/*
	main
*/