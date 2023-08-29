/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 02:00:58 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/29 03:33:51 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_isprime(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int lcm = 0;
	unsigned int prime = 2;

	if ((int)a <= 0 || (int)b <= 0)
		return (0);
	lcm = 1;
	while (a != 1 || b != 1)
	{
		if (a == 1 && b == 1)
			break;
		if (ft_isprime(prime))
		{
			if (a % prime == 0 && b % prime == 0)
			{
				a /= prime;
				b /= prime;
				lcm *= prime;
			}
			else if (a % prime == 0)
			{
				a /= prime;
				lcm *= prime;
			}
			else if (b % prime == 0)
			{
				b /= prime;
				lcm *= prime;	
			}
			else
				prime++;
		}
		else
			prime++;
	}
	return (lcm);
}
/*
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		unsigned int a = atoi(argv[1]);
		unsigned int b = atoi(argv[2]);
	
		printf("%i\n", lcm(a, b));
	}
	return (0);
}*/
