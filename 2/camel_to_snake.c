/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 03:28:43 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/16 03:48:36 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char *str = argv[1];
	int diff = 32;

	if (argc == 2)
	{
		while (str[i])
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += diff;
				write (1, "_", 1);
			}
			write (1, &str[i], 1);
			i++;
		}
	}
	return (write (1, "\n", 1), 0);
}
