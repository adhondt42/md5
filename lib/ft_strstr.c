/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 22:40:59 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/17 22:41:25 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	p;
	int	n;

	i = 0;
	p = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		p = 0;
		if (needle[p++] == haystack[i])
		{
			n = i;
			i++;
			while (needle[p] != '\0' && needle[p] == haystack[i++])
				p++;
			if (needle[p] == '\0')
				return ((char *)&haystack[i - p]);
			i = n;
		}
		i++;
	}
	return (NULL);
}
