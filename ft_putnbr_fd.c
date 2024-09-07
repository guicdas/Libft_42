/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:51:35 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 16:25:37 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	num;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n == 0)
		ft_putchar_fd(48, fd);
	else
	{
		if (n < 0)
		{
			num = -1 * n;
			ft_putchar_fd('-', fd);
		}
		else
			num = n;
		if (num >= 10)
		{
			ft_putnbr_fd(num / 10, fd);
			ft_putnbr_fd(num % 10, fd);
		}
		else
			ft_putchar_fd(num + '0', fd);
	}
}

/*
int main(){
	int fd;

	fd = creat("/nfs/homes/gcatarin/Desktop/libft/texto.txt", S_IRWXU);

	ft_putnbr_fd(136, fd);
}*/