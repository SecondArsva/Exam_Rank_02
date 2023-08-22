/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 03:51:21 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/22 04:47:09 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	while (n % 2 == 0)
	{
		if (n > 2)
			n /= 2;
		else
			return (1);
	}
	return (0);
}
/*
int main(void)
{
	int n = 0;

	while (n <= 1024)
	{
		printf("%i: %i\n", n, is_power_of_2(n));
		n++;
	}
	return (0);
}*/
