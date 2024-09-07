/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:27:29 by gcatarin          #+#    #+#             */
/*   Updated: 2022/11/20 17:27:29 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	num;
	int			flag;

	flag = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
	{
		str++;
		flag = -1;
	}
	else if (*str == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		num = num * 10 + (flag * (*str++ - 48));
		if (num > 2147483647)
			return (-1);
		if (num < -2147483648)
			return (0);
	}
	return (num);
}
/*
int main(){
	int i;
	char *s1="-2576g6";
	i = ft_atoi(s1);printf(" meu%d\n", i);
	i = atoi(s1);printf("atoi%d\n\n", i);
	char *s2=" +2576  453";
	i = ft_atoi(s2);printf(" meu%d\n", i);
	i = atoi(s2);printf("atoi%d\n\n", i);
	char *s4="   -2576";
		i = ft_atoi(s4);printf(" meu%d\n", i);
	i = atoi(s4);printf("atoi%d\n\n", i);

}*/