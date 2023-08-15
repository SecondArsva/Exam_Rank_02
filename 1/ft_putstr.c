/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:25:40 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/15 16:25:56 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}
/*
int main(void)
{
	char *str = "Hola 42.\n";
	ft_putstr(str);
	return (0);
}*/
