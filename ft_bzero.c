/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:43:41 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 16:23:24 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
int main(){
	char buffer[100]="hello gre";
	printf("display: %s\n", buffer);
	ft_bzero(buffer, 100);
	printf("display: %s\n", buffer);
}*/