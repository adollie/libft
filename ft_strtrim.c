/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adollie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:34:56 by adollie           #+#    #+#             */
/*   Updated: 2019/05/27 15:39:49 by adollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	whatspace(int c)
{
	if ((c == ' ' || c == '\n' || c == '\t'))
		return (1);
	return (0);
}

static char	strspace(char const *s)
{
	int		i;
	int		z;

	i = 0;
	z = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
			z++;
		i++;
	}
	if (i == z)
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	size_t		front;
	size_t		back;
	size_t		z;
	char		*middle;

	if (!s || !ft_strlen(s))
		return ((char*)s);
	if (strspace(s) == 1)
		return (ft_strnew(1));
	front = 0;
	back = ft_strlen(s) - 1;
	z = 0;
	while (whatspace(s[front]))
		front++;
	while (whatspace(s[back]) != 0)
		back--;
	z = back - front + 1;
	if (!(middle = ft_strnew(z + 1)))
		return (NULL);
	return (ft_strncpy(middle, &s[front], z));
}
