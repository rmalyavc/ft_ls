/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalyavc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 16:04:27 by rmalyavc          #+#    #+#             */
/*   Updated: 2019/04/13 21:03:21 by rmalyavc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static int			get_file(char *file, t_ls *data)
{
	struct stat 	statbuf;

	if (stat(file, &statbuf) != 0 && ft_printf("{red}Unable to read file: %s{eoc}\n", file))
		return (0);
	if (S_ISDIR(statbuf.st_mode))
		ft_lstpush(&(data->folders), ft_lstnew(file, ft_strlen(file)));
	else if (S_ISREG(statbuf.st_mode))
		ft_lstpush(&(data->files), ft_lstnew(file, ft_strlen(file)));
	else if (ft_printf("{red}ft_ls: %s: Unknown file type{eoc}\n", file))
		return (0);
	return (1);
}

static int			get_flags(char *list, t_ls *data)
{
	int				i;
	char const		*flags = "Rrlat";

	i = -1;
	while (list[++i])
		if (!ft_strchr(flags, list[i]) && ft_printf("{red}ft_ls: illegal option {%c}\nusage: ft_ls [-Rrlat] [file / folder]{eoc}\n", list[i]))
			return (0);
		else if (!ft_strchr(data->flags, list[i]))
			data->flags[ft_strlen(data->flags)] = list[i];
	return (1);
}

int					validate_args(int argc, char **argv, t_ls *data)
{
	int				i;

	i = 0;
	while (++i < argc) {
		
		if ((argv[i][0] == '-' && !get_flags(argv[i] + 1, data)) ||
			(argv[i][0] != '-' && !get_file(argv[i], data)))
			return (0);
	}
	return (1);
}
