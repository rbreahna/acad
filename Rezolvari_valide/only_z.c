/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 16:20:46 by exam              #+#    #+#             */
/*   Updated: 2016/07/07 16:29:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	main()
{
	write(1, "z", 1);
	return(0);
}