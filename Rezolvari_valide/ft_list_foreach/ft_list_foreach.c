/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 17:06:37 by exam              #+#    #+#             */
/*   Updated: 2016/07/28 17:27:02 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
 (*f)(begin_list->data);
	begin_list = begin_list-> next;
	}

}
