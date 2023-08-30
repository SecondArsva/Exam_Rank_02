/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:16:19 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/30 21:24:36 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int ft_total_digits(int n)
{
	int total_digits = 0;
	
	if (n < 0)
	{
		n *= -1;
		total_digits++;
	}
	while (n > 0)
	{
		n /= 10;
		total_digits++;
	}
	return (total_digits);
}

char	*ft_itoa(int nbr)
{
	char *str = NULL;
	int n = nbr;
	int reserve = ft_total_digits(n);
	int bolean_neg = 0;

	if (n == INT_MIN)
	{
		str = "-2147483648";
		return (str);
	}
	else if (n == INT_MAX)
	{
		str = "2147483647";
		return (str);
	}
	else if (n == 0)
	{
		str = "0";
		return (str);
	}
	str = malloc((reserve + 1)*sizeof(char));
	if (n < 0)
	{
		bolean_neg = 1;
		n *= -1;
		str[0] = '-';
	}
	str[reserve] = '\0';
	reserve--;
	if (bolean_neg == 0)
	{
		while (reserve >= 0)
		{
			str[reserve] = n % 10 + 48;
			n /= 10;
			reserve--;
		}
	}
	else if (bolean_neg == 1)
	{
		while (reserve >= 1)
		{
			str[reserve] = n % 10 + '0';
			n /= 10;
			reserve--;
		}
	}
	return (str);
}
/*
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int n = atoi(argv[1]);
		printf("int n: %i\n", n);
		char *str = ft_itoa(n);
		printf("Hola: %s\n", str);
	}
	return (0);
}*/
