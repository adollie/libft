/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adollie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:32:42 by adollie           #+#    #+#             */
/*   Updated: 2019/05/27 14:04:50 by adollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t		i;
	size_t		z;

	i = 0;
	if (*to_find == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		z = 0;
		while (to_find[z] == str[i + z])
		{
			if (to_find[z + 1] == '\0')
			{
				return ((char *)str + i);
			}
			z++;
		}
		i++;
	}
	return (0);
}
