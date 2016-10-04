/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 18:08:12 by exam              #+#    #+#             */
/*   Updated: 2016/07/14 18:42:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int		ft_putchar(char c)
{
	write (1, &c, 1);
	return(0);
}

int		main(void)
{
	int	i;
	i = 'a';
while (i <= 'z')
	{
		if (i%2!=0)
	ft_putchar(i);
		else if (i%2==0)
	ft_putchar(i-32);
	i++;
	}
ft_putchar('\n');
return(0);
}
