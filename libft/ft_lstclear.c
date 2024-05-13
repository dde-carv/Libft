/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:00:43 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/07 15:27:48 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Deletes and frees the given node and every successor of that node.

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst && del)
	{
		while (*lst)
		{
			tmp = *lst;
			*lst = (*lst)->next;
			ft_lstdelone(tmp, del);
		}
	}
}

/* #include <stdio.h>
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	head = NULL;
	node1 = ft_lstnew("Node 1");
	node2 = ft_lstnew("Node 2");
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstclear(&head, &del_content);
	if (head)
		printf("List is not empty\n");
	else
		printf("List is empty\n");
	return (0);
} */
