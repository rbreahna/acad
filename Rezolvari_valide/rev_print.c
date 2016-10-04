/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 10:16:53 by exam              #+#    #+#             */
/*   Updated: 2016/07/28 10:39:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}


int		main(int argc,	char **argv)
{
	int	i;
	int k;
	i = 1;
	k = 0;
if (argc!=2) {ft_putchar('\n');
return(0);}
argc = 2;
if(argc == 2)
{
while (argv[1][k])	k++;
while((k-i) >= 0)
{
ft_putchar(argv[1][k-i]);
i++;
}

ft_putchar('\n');

}
return(0);
}
