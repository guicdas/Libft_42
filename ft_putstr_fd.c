/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:25:40 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 16:25:35 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = ft_strlen(s);
	write (fd, s, i);
}
/*
int main(){
	int fd;

	fd = creat("/nfs/homes/gcatarin/Desktop/libft/texto.txt", S_IRWXU);

	ft_putstr_fd("caiusbc", fd);
}*/