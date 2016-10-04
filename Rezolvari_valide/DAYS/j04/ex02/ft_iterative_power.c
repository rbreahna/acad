/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbreahna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 14:52:33 by rbreahna          #+#    #+#             */
/*   Updated: 2016/07/09 14:59:18 by rbreahna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int p;

	p = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		p = nb * p;
		power = power - 1;
	}
	return (p);
}
