/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:53:14 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/12 17:15:16 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_num(int num)
{
	char *str = "0123456789";

	if (num > 9)
		ft_write_num(num / 10);
	write (1, &str[num % 10], 1);
}

int	main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 15 == 0)
			write (1, "fizzbuzz", 8);
		else if (num % 3 == 0)
			write (1, "fizz", 4);
		else if (num % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_write_num(num);
		num++;
		write (1, "\n", 1);
	}
	return (0);
}
