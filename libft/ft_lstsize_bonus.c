/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:04:26 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/04 12:14:27 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	if (!lst)
		return (0);
	i = 0;
	temp = lst;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

/*int main(void)
{
	t_list	*head = ft_lstnew("hello ");
	t_list	*next = ft_lstnew("world");
	t_list	*next2 = ft_lstnew("!");
	head->next = next;
	next->next = next2;
	t_list	*tmp = head;
	while (tmp != NULL)
	{
		printf("%s", (char *)head->content);
		tmp = tmp->next;
	}
	printf("\n%d\n", ft_lstsize(head));
}*/