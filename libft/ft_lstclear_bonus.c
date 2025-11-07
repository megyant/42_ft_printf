/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 08:41:25 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/07 09:05:23 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	free(*lst);
	*lst = NULL;
}

/*int main(void)
{
	t_list *head = ft_lstnew(ft_strdup("Hello"));
	t_list *n1 = ft_lstnew(ft_strdup("world"));
	head->next = n1;
	printf("bef  : %d\n", ft_lstsize(head));
	ft_lstclear(&head, free);
	printf("after: %d", ft_lstsize(head));
	return (0);
}*/
