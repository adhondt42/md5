/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:56:57 by adhondt           #+#    #+#             */
/*   Updated: 2018/08/21 15:53:11 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ssl.h"

t_data	*init_struct(t_data *d, char *av)
{
	if (!(d = (t_data *)malloc(sizeof(t_data))))
		return (0);
	d->string = ft_strdup(av);
	ft_bzero(d->block, 512);
	ft_bzero(d->md, 512);
	d->next = NULL;
	return (d);
}

int		digest_stdin(t_data *d, char *av)
{
	(void)av;	
	ft_putstr(d->string);	
	ft_putstr(d->md);
	ft_putstr(d->block);
	return (1);
}

int		main(int argc, char **argv)
{
	t_data	*d;

	d = NULL;
	if (argc < 2)
		return (ft_usage());
	if (!(d = init_struct(d, argv[1])))
		return (-1);
	if (!digest_stdin(d, argv[1]))
		return (-1);
	ft_putstr(d->md);
	return (1);
}
