/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:32:47 by sarbaill          #+#    #+#             */
/*   Updated: 2019/01/08 19:52:49 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	size_t	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i < 46340 && i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
