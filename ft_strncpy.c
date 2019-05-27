/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adollie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:56:47 by adollie           #+#    #+#             */
/*   Updated: 2019/05/27 13:40:59 by adollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		a;
	size_t		b;

	a = 0;
	b = len;
	while (a != len && src[a] != '\0')
	{
		dst[a] = src[a];
		a++;
		b--;
	}
	while (b != 0)
	{
		dst[a] = '\0';
		a++;
		b--;
	}
	return (dst);
}
