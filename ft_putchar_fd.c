/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:42:41 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 16:25:38 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	char	*s;

	s = &c;
	write (fd, s, 1);
}
/*
int main(){
	int fd;

	fd = creat("/nfs/homes/gcatarin/Desktop/libft/texto.txt", S_IRWXU);

	ft_putchar_fd('c', fd);
}*/