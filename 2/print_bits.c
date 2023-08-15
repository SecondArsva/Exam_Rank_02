/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:37:10 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/15 19:51:57 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octect)
{
	unsigned char bit = 0;
	int i = 7;

	while (i >= 0)
	{
		bit = ((octect >> i) & 1) + 48;
		write (1, &bit, 1);
		i--;
	}
}
/*
int main(void)
{
	int a = 2;
	int	b = 5;

	print_bits(a);
	write (1, "\n", 1);
	print_bits(b);

	return (0);
}*/
