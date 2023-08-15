/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:54:35 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/15 20:54:39 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
/*
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
*/
unsigned char	reverse_bits(unsigned char octect)
{
	unsigned char bit = 0;
	int i = 0;

	while (i <= 7)
	{
		bit += ((octect >> i) & 1) << (7 - i);
		i++;
	}
	return (bit);
}
/*
int main(void)
{
	int a = 38;

	print_bits(a);
	write (1, "\n", 1);
	a = reverse_bits(a);
	print_bits(a);
	return (0);
}*/
