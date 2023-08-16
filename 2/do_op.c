/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:35:44 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/16 14:49:59 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int num1 = 0;
	int num2 = 0;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);

		if (argv[2][0] == '+')
			return (printf("%i\n", num1 + num2), 0);
		else if (argv[2][0] == '-')
			return (printf("%i\n", num1 - num2), 0);
		else if (argv[2][0] == '*')
			return (printf("%i\n", num1 * num2), 0);
		else if (argv[2][0] == '/')
			return (printf("%i\n", num1 / num2), 0);
		else if (argv[2][0] == '%')
			return (printf("%i\n", num1 % num2), 0);
			
	}
	return (write (1, "\n", 1), 0);
}
