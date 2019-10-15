/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuomine <mtuomine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:09:50 by mtuomine          #+#    #+#             */
/*   Updated: 2019/10/15 15:33:06 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** writes n zeroed bytes to the string s.  If n is zero, ft_bzero()
** does nothing.
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char *ps;

	ps = (unsigned char *)s;
	while (n--)
		*(ps++) = '\0';
}
