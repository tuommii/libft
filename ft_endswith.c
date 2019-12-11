/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endswith.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuomine <mtuomine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 09:17:48 by mtuomine          #+#    #+#             */
/*   Updated: 2019/12/11 09:26:17 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_endswith(char *str, char *end)
{
	char *temp;

	if (!str || !end)
		return (0);
	temp = ft_strchr(str, end[0]);
	if (temp)
	{
		if (ft_strcmp(temp, end) == 0)
			return (1);
	}
	return (0);
}
