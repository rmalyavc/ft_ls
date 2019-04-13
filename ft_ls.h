/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalyavc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 15:55:54 by rmalyavc          #+#    #+#             */
/*   Updated: 2019/04/13 20:54:54 by rmalyavc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H
# include <errno.h>
# include <dirent.h>
# include <sys/stat.h>
# include <sys/types.h>
# include "libft.h"

typedef struct		s_ls
{
	char			*flags;
	t_list			*files;
	t_list			*folders;
}					t_ls;

int					init_data(t_ls *data);
int					validate_args(int argc, char **argv, t_ls *data);

#endif
