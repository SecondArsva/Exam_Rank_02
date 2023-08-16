/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:22:28 by davidga2          #+#    #+#             */
/*   Updated: 2023/08/16 18:13:23 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strchar(const char *str, char c)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t char_rejected = 0;

	while (s[i])
	{
		if (!ft_strchar(reject, s[i]))
			char_rejected++;
		else
			return (char_rejected);
		i++;
	}
	return (char_rejected);
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

		printf("og: %lu\nft: %lu\n", strcspn(str1, str2), ft_strcspn(str1, str2));
	}
	return (0);
}*/
