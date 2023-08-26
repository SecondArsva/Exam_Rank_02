/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 03:09:51 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/26 03:14:29 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_wrtnbr(int n)
{
	char *str = "0123456789";

	if (n > 9)
		ft_wrtnbr(n / 10);
	write (1, &str[n % 10], 1);
}

int main(int argc, char **argv)
{
	int i = 0;
	
	if (argc > 0)
	{
		while (argv[i])
			i++;
		ft_wrtnbr(i - 1);
	}
	return (write(1, "\n", 1), 0);
}
