/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adollie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:02:19 by adollie           #+#    #+#             */
/*   Updated: 2019/05/27 13:48:21 by adollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	char	*s1alt;

	s1alt = s1;
	while (*s1alt != '\0')
		s1alt++;
	while (*s2 != '\0')
	{
		*s1alt = *s2;
		s1alt++;
		s2++;
	}
	*s1alt = '\0';
	return (s1);
}
