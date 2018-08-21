/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 21:52:24 by avallois          #+#    #+#             */
/*   Updated: 2018/06/14 15:20:35 by avallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tronc;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((tronc = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	while (len--)
	{
		tronc[i] = s[start + i];
		i++;
	}
	tronc[i] = '\0';
	return (tronc);
}
