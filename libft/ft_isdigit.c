/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:42:18 by thevaris          #+#    #+#             */
/*   Updated: 2025/08/23 15:13:48 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9') && c != '\0')
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%i\n", ft_isdigit('5'));
	printf("%i\n", ft_isdigit('a'));
	printf("%i\n", ft_isdigit('\0'));
	
	return (0);
}*/