/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:11:02 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/23 14:39:13 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	*ft_memalloc_c(size_t size, char c)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	if (!(str = (unsigned char *)malloc(sizeof(unsigned char) * (size + 1))))
		return (NULL);
	while (i != size)
		str[i++] = c;
	str[size] = '\0';
	return (str);
}
