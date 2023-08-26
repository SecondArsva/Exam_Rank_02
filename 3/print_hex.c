/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:37:07 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/26 20:30:40 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_wrthex(int n)
{
	char *str = "0123456789abcdef";

	if (n >= 16)
		ft_wrthex(n / 16);
	write (1, &str[n % 16], 1);
}

// En este ejercicio se da por hecho que el número pasado por argumento estará
// en positivo y su string no contendrá ningún caracter que no sea numérico,
// por lo que no es necesario hacer un atoi como el original que salta los
// espacios y sus variantes, ni ha de gesionar nada en caso de encontrarse
// algún signo.
int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\f' || str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-' )
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

int	main(int argc, char **argv)
{
	int n = 0;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		ft_wrthex(n);
	}
	return (write (1, "\n", 1), 0);
}
