/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcatarin <gcatarin@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:15:03 by gcatarin          #+#    #+#             */
/*   Updated: 2022/12/02 18:32:43 by gcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*count(char *s, int k, int n, int i)
{
	while (k != i)
	{
		s[k - 1] = (n % 10) + 48;
		n = n / 10;
		k--;
	}
	return ((char *)s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		k;
	int		i;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	k = intlen(n);
	s = (char *)malloc(sizeof(char) * (k + 1));
	if (s != NULL)
	{
		s[k] = '\0';
		if (n < 0)
		{
			s[0] = '-';
			n = n * -1;
			i++;
		}
		s = count(s, k, n, i);
		return (s);
	}
	return (NULL);
}
/*
int main(){

	int i=9876;
	char *s;

	s = ft_itoa(i);
	printf("normal: %s\n", s);
	i = 0;
	s = ft_itoa(i);
	printf("zero: %s\n", s);
	i = -9;
	s = ft_itoa(i);
	printf("neg: %s\n", s);
	i = -2147483648;
	s = ft_itoa(i);
	printf("min: %s\n", s);
	i = 2147483647;
	s = ft_itoa(i);
	printf("max: %s\n", s);

}*/