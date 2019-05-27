/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adollie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:22:47 by adollie           #+#    #+#             */
/*   Updated: 2019/05/27 13:58:43 by adollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*last_pos;

	last_pos = (0);
	while (*s)
	{
		if (*s == c)
			last_pos = (char*)s;
		++s;
	}
	if (last_pos)
		return (last_pos);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
