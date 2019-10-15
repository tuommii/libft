/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuomine <mtuomine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:48:44 by mtuomine          #+#    #+#             */
/*   Updated: 2019/10/15 15:34:39 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** writes len bytes of value c (converted to an unsigned char) to
** the string b. ft_memset("Miikka", 0, 3) comes "000kka"
*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;

	ptr = NULL;
	if (len == 0)
		return (b);
	ptr = (unsigned char *)b;
	while (len--)
		*(ptr++) = (unsigned char)c;
	return (b);
}
