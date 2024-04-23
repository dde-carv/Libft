/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-carv <dde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:31:04 by dde-carv          #+#    #+#             */
/*   Updated: 2024/04/23 15:47:40 by dde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Frees the memory of the node’s content.

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

/* #include <stdio.h>
void	del_content(void *content)
{
	free(content);
}
int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Node");
	ft_lstdelone(node, &del_content);
	if (node)
		printf("Node is not freed\n");
	else
		printf("Node is freed\n");
	return (0);
} */

/* #include <stdio.h>
void	del(void *content)
{
	free(content); // Example: assuming content is dynamically allocated memory
}

int main(void)
{
	// Example usage of ft_lstdelone
	t_list *node = malloc(sizeof(t_list));
	node->content = malloc(10); // Allocate some memory for content
	// Assume content is initialized or used in some way before deletion

	ft_lstdelone(node, del); // Delete the node

	// Verify deletion
	if (node == NULL)
		printf("Node deleted successfully\n");
	else
		printf("Error: Node was not deleted\n");

	return 0;
} */
