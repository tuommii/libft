/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chappend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuomine <mtuomine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 09:00:31 by mtuomine          #+#    #+#             */
/*   Updated: 2019/11/16 09:01:42 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_chappend(char *str, char c, int len)
{
	char *new;

	if (!(new = ft_memalloc(len + 2)))
		return (NULL);
	ft_strcpy(new, str);
	new[len] = c;
	new[len + 1] = '\0';
	return (new);
}
