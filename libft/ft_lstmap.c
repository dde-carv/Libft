/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:16:55 by dde-carv          #+#    #+#             */
/*   Updated: 2024/05/10 14:52:32 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Iterates the list ’lst’ and applies the function ’f’ on the
// content of each node. Uses 'del' function if needed.
//Returns the new list or NULL if the allocation fails.

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		if (f)
			new_elem = ft_lstnew(f(lst->content));
		else
			new_elem = ft_lstnew(lst->content);
		if (!new_elem)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}

/* #include <stdio.h>
void	*double_content(void *content)
{
	char	*new_content;

	new_content = malloc(strlen((char *)content) * 2 + 1);
	if (!new_content)
		return (NULL);
	strcpy(new_content, content);
	strcat(new_content, content);
	return (new_content);
}

void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*head;
	t_list	*new_lst;

	head = NULL;
	head = ft_lstnew("Node 1");
	ft_lstadd_back(&head, ft_lstnew("Node 2"));
	ft_lstadd_back(&head, ft_lstnew("Node 3"));

	new_lst = ft_lstmap(head, &double_content, &del_content);

	while (new_lst)
	{
		printf("%s\n", (char *)new_lst->content);
		new_lst = new_lst->next;
	}

	ft_lstclear(&head, &del_content);
	ft_lstclear(&new_lst, &del_content);

	return (0);
} */
