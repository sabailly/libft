/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 20:14:47 by sarbaill          #+#    #+#             */
/*   Updated: 2019/01/08 19:35:40 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_prime(int nb)
{
	size_t	i;

	i = 1;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i++ <= nb / 2)
		if (nb % i == 0)
			return (0);
	return (1);
}
