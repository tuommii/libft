/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pathjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuomine <mtuomine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 09:03:59 by mtuomine          #+#    #+#             */
/*   Updated: 2019/12/11 09:55:36 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_pathjoin(char *a, char *b)
{
	char *temp;
	char *res;

	if (a && !b[0])
		return (ft_strdup(a));
	else if (b && !a[0])
		return (ft_strdup(b));
	else if (!a[0] && !b[0])
		return (ft_strnew(1));
	temp = NULL;
	res = NULL;
	if (!ft_endswith(a, "/"))
	{
		temp = ft_strjoinch(a, '/');
		res = ft_strjoin(temp, b);
		ft_strdel(&temp);
		return (res);
	}
	return (ft_strjoin(a, b));
}
