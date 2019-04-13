/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalyavc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 15:57:51 by rmalyavc          #+#    #+#             */
/*   Updated: 2019/04/13 20:59:18 by rmalyavc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int			main(int argc, char **argv)
{
	t_ls	data;

	if (!init_data(&data) || !validate_args(argc, argv, &data))
		exit(0);
	ft_printf("{green}Flags are: (%s){eoc}\n", data.flags);
	ft_printf("{brown}Files are:\n{eoc}");
	ft_lstprint(data.files);
	ft_printf("{brown}Folders are:\n{eoc}");
	ft_lstprint(data.folders);
	return (1);
}
