/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbreahna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 11:10:48 by rbreahna          #+#    #+#             */
/*   Updated: 2016/07/09 12:07:00 by rbreahna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int f;

	f = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	while (nb > 0)
	{
		f = f * nb;
		nb = nb - 1;
	}
	return (f);
}