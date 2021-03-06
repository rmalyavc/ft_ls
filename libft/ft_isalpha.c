/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalyavc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 20:53:01 by rmalyavc          #+#    #+#             */
/*   Updated: 2017/11/16 11:57:12 by rmalyavc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c)
{
	if (c > 0 && c < 128 && (((unsigned char)c >= 'A' &&
		(unsigned char)c <= 'Z') || ((unsigned char)c >= 'a' &&
			(unsigned char)c <= 'z')))
		return (1);
	return (0);
}
