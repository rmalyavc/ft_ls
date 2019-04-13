/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalyavc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 16:40:27 by rmalyavc          #+#    #+#             */
/*   Updated: 2019/04/13 19:30:11 by rmalyavc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		init_data(t_ls *data)
{
	if (!(data->flags = ft_strnew(5)))
		return (0);
	else if (!(data->files = (t_list *)malloc(sizeof(t_list))))
		return (0);
	else if (!(data->folders = (t_list *)malloc(sizeof(t_list))))
		return (0);
	data->files = NULL;
	data->folders = NULL;
	return (1);
}
