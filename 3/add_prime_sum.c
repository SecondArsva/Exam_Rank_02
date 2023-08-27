/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:19:09 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/27 19:05:48 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_wrtnbr(int n)
{
	char *str = "0123456789";

	if (n >= 10)
		ft_wrtnbr(n / 10);
	write (1, &str[n % 10], 1);
}

int ft_atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	if (s[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return (result * sign);
}

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
	int n = 0;
	int sum = 0;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		while (n > 1)
		{
			if (ft_isprime(n))
				sum += n;
		n--;
		}
	}
	ft_wrtnbr(sum);
	return (write (1, "\n", 1), 0);
}
