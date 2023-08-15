/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 03:05:17 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/15 03:13:34 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char *str = argv[1];

	if (argc == 2)
	{
		while (str[i])
		{
			if (str[i] >= 'a' && str[i]<= 'z')
				str[i] = str[i] - 32;
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			write (1, &str[i], 1);
			i++;
		}
	}
	return (write (1, "\n", 1), 0);
}
