/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adollie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:08:15 by adollie           #+#    #+#             */
/*   Updated: 2019/05/27 13:51:11 by adollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char	*s1alt;
	size_t	i;

	s1alt = s1;
	i = 0;
	while (*s1alt != '\0')
		s1alt++;
	while (i != n && *s2 != '\0')
	{
		*s1alt = *s2;
		s1alt++;
		s2++;
		i++;
	}
	*s1alt = '\0';
	return (s1);
}
