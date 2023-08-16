/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 22:45:34 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/16 03:14:36 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char *str = argv[1];
	int gauss = 0;

	if (argc == 2)
	{
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				gauss = 219;
				str[i] = gauss - str[i];
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				gauss = 155;
				str[i] = gauss - str[i];
			}
			write (1, &str[i], 1);
			i++;
		}
	}
	return (write (1, "\n", 1), 0);
}
