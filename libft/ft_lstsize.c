/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:58:44 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/23 16:38:43 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Counts the number of nodes in a list.
//REturns the length of the list.

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}

/* #include <stdio.h>
int	main(void)
{
	t_list	*head;
	int	size;

	head = NULL;
	head = ft_lstnew("Node 1");
	ft_lstadd_back(&head, ft_lstnew("Node 2"));
	ft_lstadd_back(&head, ft_lstnew("Node 3"));
	size = ft_lstsize(head);
	printf("Size of the list is: %d\n", size);
	return (0);
} */
