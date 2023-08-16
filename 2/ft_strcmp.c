/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:39:16 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/16 17:07:36 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
*/
int	ft_strcmp(const char *s1, const char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;	
	return (s1[i] - s2[i]);
}
/*
int main(int argc, char **argv)
{
	char *str1;
	char *str2;

	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];

		printf("og: %i\nft: %i\n", strcmp(str1, str2), ft_strcmp(str1, str2));
	}
	return (0);
}*/
