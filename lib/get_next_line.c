/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:52:57 by adhondt           #+#    #+#             */
/*   Updated: 2018/08/20 15:53:36 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_keepstr(char *str, char *instr)
{
	char		*ptr;
	int			i;

	ptr = str;
	i = 0;
	while (ptr != instr)
	{
		ptr++;
		i++;
	}
	if (i == 0)
		return (ft_strdup("\0"));
	return (ft_strsub(str, 0, i));
}

int				ft_get_line(char **save, char **line)
{
	char		*tmp;

	if (ft_strchr(*save, '\n'))
	{
		*line = ft_keepstr(*save, ft_strchr(*save, '\n'));
		tmp = ft_strdup(*save);
		free(*save);
		*save = ft_strdup(ft_strchr(tmp, '\n') + 1);
		free(tmp);
		return (1);
	}
	else if (ft_strlen(*save) != 0)
	{
		*line = ft_keepstr(*save, ft_strchr(*save, '\0'));
		*save = ft_strchr(*save, '\0');
		return (1);
	}
	if (ft_strlen(*save))
		free(*save);
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	char		*fcontent;
	static char	*save;
	int			ret;
	int			n;

	ret = 0;
	n = 0;
	if (fd == -1 || !line || BUFF_SIZE < 1)
		return (-1);
	fcontent = NULL;
	if (save)
		return (ft_get_line(&save, &(*line)));
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		n = 1;
		buf[ret] = '\0';
		fcontent = (fcontent == NULL) ? ft_strdup(buf) :
			ft_strjoin_f(fcontent, buf, 1);
	}
	if (n == 1)
		save = fcontent;
	if (ret == -1)
		return (-1);
	return (ft_get_line(&save, &(*line)));
}
