/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:41:29 by mbotelho          #+#    #+#             */
/*   Updated: 2025/10/30 09:16:03 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*node;

	if (!lst || !del || !f)
		return (NULL);
	nlist = NULL;
	node = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&nlist, del);
			return (NULL);
		}
		ft_lstadd_back(&nlist, node);
		lst = lst->next;
	}
	return (nlist);
}

/*void *double_node(void *lst)
{
	int *n  = (int *)lst;
	*n *= 2;
	return(n);
}

int main(void)
{
	int a = 3;
	int b = 4;
	t_list *head = ft_lstnew(&a);
	t_list *n1 = ft_lstnew(&b);
	head->next = n1;
	
	printf("Original list:\n");
	t_list *tmp = head;
	while (tmp)
	{
		printf("%d ", *(int *)tmp->content);
		tmp = tmp->next;
	}

	printf("\n");
	printf("After map list:\n");

	t_list *nlist = ft_lstmap(head, double_node, free);
	
	tmp = nlist;
	while (tmp)
	{
		printf("%d ", *(int *)tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
}*/