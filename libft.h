/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:17:52 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/11 12:18:15 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdbool.h>
# include <stdlib.h>

bool	ft_isalpha(int c);

bool	ft_isdigit(int c);

bool	ft_isalnum(int c);

bool	ft_isascii(int c);

bool	ft_isprint(int c);

int		ft_strlen(char *str);

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

void 	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);
#endif