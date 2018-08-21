/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 13:07:31 by adhondt           #+#    #+#             */
/*   Updated: 2018/08/21 16:22:33 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SSL_H
# define FT_SSL_H
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "../lib/inc/libft.h"

# define BLOCK_SIZE 512

typedef struct		s_data
{
	char			*string;
	char			block[BLOCK_SIZE];
	char			md[BLOCK_SIZE];
	struct s_data	*next;
}					t_data;

int					ft_usage(void);

#endif
