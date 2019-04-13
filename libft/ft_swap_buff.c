/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_buff.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalyavc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 11:46:41 by rmalyavc          #+#    #+#             */
/*   Updated: 2017/11/30 11:59:13 by rmalyavc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_buff(char ***b1, char ***b2)
{
	char	**ptr;

	ptr = *b1;
	*b1 = *b2;
	*b2 = ptr;
}