/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:42:18 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/10 15:05:07 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

char	**ft_split(char const *s, char c);
int		ft_printf(const char *str, ...);
long	ft_atol(const char *str);
int	ft_putstr(char *str);
int	ft_putpointer(void *ptr);
int	ft_putnbr(long num);
int	ft_putnbr_un(unsigned int num);
int	ft_putnbr_hex(unsigned long long num, char format);
int	ft_putchar(char c);
int	ft_isdigit(int c);

#endif
