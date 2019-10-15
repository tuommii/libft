/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuomine <mtuomine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:46:45 by mtuomine          #+#    #+#             */
/*   Updated: 2019/10/15 16:11:53 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

# define FT_MIN(x, y) (x) < (y) ? (x) : (y)
# define FT_MAX(x, y) (x) > (y) ? (x) : (y)
# define FALSE 0
# define TRUE 1

typedef char	t_bool;

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

size_t	ft_strlen(const char *s);

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int nbr);


#endif
