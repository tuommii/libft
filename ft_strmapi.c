/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuomine <mtuomine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:04:30 by mtuomine          #+#    #+#             */
/*   Updated: 2019/10/16 13:12:08 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*fresh;

	if (!s || !f)
		return (NULL);
	len = ft_strlen((char *)s);
	if (!(fresh = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		fresh[i] = (*f)(i, (char)s[i]);
		i++;
	}
	return (fresh);
}
