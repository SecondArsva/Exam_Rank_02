/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:51:19 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/26 21:30:22 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_wrtnbr(int n)
{
	char *str = "0123456789";

	if (n >= 10)
		ft_wrtnbr(n / 10);
	write (1, &str[n % 10], 1);
}

void ft_tab_mult(int n)
{
	int i = 1;

	while (i <= 9)
	{
		ft_wrtnbr(i);
		write (1, " x ", 3);
		ft_wrtnbr(n);
		write (1, " = ", 3);
		ft_wrtnbr(i * n);
		write (1, "\n", 1);
		i++;
	}
}

int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-' )
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int main(int argc, char **argv)
{	
	int n = 0;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		ft_tab_mult(n);
	}
	else
		write (1, "\n", 1);
	return (0);
}
