/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:01:28 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/24 13:50:18 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Iterates the list and applies the function on the content of each node.

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

/* #include <stdio.h>
void	print_content(void *content)
{
	printf("%s\n", (char *)content);
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
	ft_lstiter(head, &print_content);
	return (0);
} */
