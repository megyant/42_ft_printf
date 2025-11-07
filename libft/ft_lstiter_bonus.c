/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:27:34 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/04 12:13:52 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void plus10(void *nb)
{
	int *n = (int *)nb;
	*n += 10;
}

int main(void)
{
	int a = 1;
	t_list *head = ft_lstnew(&a);
	printf("before: %d\n", *(int *)head->content);
	ft_lstiter(head, plus10);
	printf("after: %d\n", *(int *)head->content);
	return (0);
}*/