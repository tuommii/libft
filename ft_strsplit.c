/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuomine <mtuomine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:59:10 by mtuomine          #+#    #+#             */
/*   Updated: 2019/10/16 21:07:57 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int ft_split_count(char const *s, char c)
{
	int	strings;
	int i;

	i = 0;
	strings = 0;
	while (s[i])
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
			strings++;
		i++;
	}
	return (strings);
}

static int ft_char_count(char const *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s != c)
			count++;
		s++;
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	char **splits;

	i = 0;
	j = 0;
	if (!s || !c || (!(splits = (char **)malloc(sizeof(char *) * ft_split_count(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			if (!s || (!(splits[i] = (char *)malloc(sizeof(char) * ft_char_count(s, c) + 1))))
				return (NULL);
			while (*s != c && *s)
				splits[i][j++] = (char)*s++;
			splits[i][j] = '\0';
			i++;
			j = 0;
		}
	}
	splits[i] = NULL;
	return (splits);
}
