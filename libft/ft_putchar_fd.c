/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:40:55 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/04 12:25:01 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

/*int	main(void)
{
	//terminal
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);

	//with file
	int fd = open("ft_putchar.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
        return 1;
	ft_putchar_fd('A', fd);
	close(fd);
	return (0);
}*/