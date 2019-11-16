/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_left.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuomine <mtuomine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:50:53 by mtuomine          #+#    #+#             */
/*   Updated: 2019/11/16 15:52:51 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_hex_left(char *str, int len, int inc_x)
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
	while (str[i] && ft_ishex(str[i], inc_x))
	{
		temp[k] = str[i];
		i++;
		k++;
	}
	temp[len] = '\0';
	return (ft_strdup(temp));
}
