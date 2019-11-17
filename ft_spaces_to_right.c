/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spaces_to_right.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuomine <mtuomine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 09:05:56 by mtuomine          #+#    #+#             */
/*   Updated: 2019/11/17 10:08:00 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_spaces_to_right(char *str, int len)
{
	char temp[len + 1];

	int i = 0;
	int j = len - 1;
	int k = 0;
	while (str[i] && ft_isspace(str[i]))
	{
		temp[j] = str[i];
		i++;
		j--;
	}
	while ((str[i] && !ft_isspace(str[i])))
	{
		temp[k] = str[i];
		i++;
		k++;
	}
	temp[len] = '\0';
	return (ft_strdup(temp));
}
