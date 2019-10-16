/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuomine <mtuomine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:59:10 by mtuomine          #+#    #+#             */
/*   Updated: 2019/10/16 15:24:35 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// gcc ft_strsplit.c -L ~/Hive/libft -o main

#include <stdio.h>
#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int len;
	int count;
	int i;
	int j;

	while (*(s++))
	{
		if (*s == c)
		{
			count++;
			len++;
		}
	}
	s = s - (len + 1);
	char **array = (char **)malloc(sizeof(char *) * (len + 1));
}

int main(void)
{
	char *test = "*hello*fellow***students*";
	char **res = ft_strsplit(test, '*');
	int i = 0;
	int j;
	while (res[i])
	{
		j = 0;
		while (res[i][j])
		{
			printf("%c", res[i][j]);
			j++;
		}
		i++;;
	}
}
