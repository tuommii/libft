/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuomine <mtuomine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 07:54:28 by mtuomine          #+#    #+#             */
/*   Updated: 2019/10/16 10:54:07 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;
	unsigned char		temp[n];
	size_t				i;

	if (!n)
		return (dest);
	pdest = (unsigned char *)dest;
	psrc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		temp[i] = psrc[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		pdest[i] = temp[i];
		i++;
	}
	return (dest);
}
