/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:06:20 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/16 15:44:44 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <stdlib.h>

int ft_atoi(const char *str)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f'
		|| str[i] == '\v' || str[i] == '\n')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	result *= sign;
	return (result);
}
/*
int	main(int argc, char **argv)
{
	int og = 0;
	int ft = 0;

	if (argc == 2)
	{
		og = atoi(argv[1]);
		ft = ft_atoi(argv[1]);
		printf("og: %i\nft: %i\n", og, ft);
	}
	return (write (1, "\n", 1), 0);
}*/
