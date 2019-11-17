/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits_left.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuomine <mtuomine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 09:05:56 by mtuomine          #+#    #+#             */
/*   Updated: 2019/11/17 08:48:30 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_digits_left(char *str, int len, int inc_extra)
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
	while ((str[i] && ft_isdigit(str[i])) || (inc_extra
	&& (str[i] == '.' || str[i] == '+' || str[i] == '-')))
	{
		temp[k] = str[i];
		i++;
		k++;
	}
	temp[len] = '\0';
	return (ft_strdup(temp));
}
