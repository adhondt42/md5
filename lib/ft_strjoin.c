/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:52:11 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/28 20:42:19 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;

	if (!(s1 && s2))
		return (NULL);
	i = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	if ((dest = (char *)malloc(sizeof(dest) * i + 1)) == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		dest[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		dest[i++] = *s2;
		s2++;
	}
	dest[i++] = '\0';
	return (dest);
}
