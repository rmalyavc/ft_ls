/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalyavc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 11:53:41 by rmalyavc          #+#    #+#             */
/*   Updated: 2017/12/25 18:30:45 by rmalyavc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_up(char *str)
{
	int		i;

	i = -1;
	if (str == NULL)
		return (NULL);
	while (str[++i] != '\0')
		str[i] = ft_toupper(str[i]);
	return (str);
}
