/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:24:57 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/28 03:20:37 by davidga2         ###   ########.fr       */
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

int main(int argc, char **argv)
{
	int n1 = 0;
	int n2 = 0;
	int mcd = 0;
	int prime = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mcd = 1;
		while ((n1 > 0 && n2 > 0) && (n1 >= prime && n2 >= prime))
		{
			if (ft_isprime(prime))
			{
				if (n1 % prime == 0 && n2 % prime == 0)
				{
					n1 /= prime;
					n2 /= prime;
					mcd *= prime;
				}
				else
					prime++;
			}
			else
				prime++;
		}
		if (mcd >= 1)
			printf("%i", mcd);
	}
	return (printf("\n"), 0);
}
