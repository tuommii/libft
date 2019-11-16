/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chpush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuomine <mtuomine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 09:05:04 by mtuomine          #+#    #+#             */
/*   Updated: 2019/11/16 09:08:31 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *pf_chpush(char *str, char c, int len)
{
	char *new;

	if (!(new = ft_memalloc(len + 2)))
		return (NULL);
	new++;
	ft_strcpy(new, str);
	new[0] = c;
	new[len + 1] = '\0';
	return (new);
}
