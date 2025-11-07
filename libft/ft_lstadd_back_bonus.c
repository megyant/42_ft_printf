/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 08:09:35 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/04 14:17:09 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if (!last || *lst == NULL)
	{
		*lst = new;
		return ;
	}
	last->next = new;
}

/*int main(void)
{
	t_list	*head = ft_lstnew("Hello");
	t_list	*n1 = ft_lstnew("world");
	t_list **lst = &head;
	ft_lstadd_back(NULL, n1);
	t_list	*tmp = *lst;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	return (0);
}*/