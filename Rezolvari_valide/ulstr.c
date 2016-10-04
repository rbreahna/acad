/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 15:16:36 by exam              #+#    #+#             */
/*   Updated: 2016/07/21 15:33:59 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int	main(int argc, char **argv)
{

	if (argc!=2)
		ft_putchar('\n');
	else
	{
		argc = 2;
		int k;
		k = 0;
		int i;
		i = 0;
		while(argv[1][k])
		{
			if ((argv[1][k] >= 65) && (argv[1][k] <= 90))
				argv[1][k] = argv[1][k] + 32;
				
			else	if ((argv[1][k] >= 97 ) && (argv[1][k] <= 122))
				argv[1][k] = argv[1][k] - 32;
			k++;
		}

		while(argv[1][i])
		{
			ft_putchar(argv[1][i]);
			i++;
		}
		ft_putchar('\n');
		return(0);
	}
}
