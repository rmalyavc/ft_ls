/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalyavc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 11:50:24 by rmalyavc          #+#    #+#             */
/*   Updated: 2017/11/16 13:57:32 by rmalyavc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_striter(char *s, void (*f)(char *))
{
	int		i;

	i = 0;
	if (s != NULL && f != NULL)
		while (s[i] != '\0')
		{
			f(&s[i]);
			i++;
		}
}