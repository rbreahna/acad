/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 15:41:56 by exam              #+#    #+#             */
/*   Updated: 2016/07/21 17:18:32 by exam             ###   ########.fr       */
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
		int c;
		c = 0;
		int x;
		x = 0;
		k = 0;
		int i;
		i = 0;
	while(argv[1][k])
			k++;
	if ((argv[1][k-1] ==' ')||(argv[1][k-1] =='\t'))
	{
		while((argv[1][k-i-1]==' ')||(argv[1][k-i-1]=='\t'))
		{i++; c = i+1;}
	}
if ((argv[1][k-1]!=' ')||(argv[1][k-1] !='\t'))
{
	while(((argv[1][k-c-1]!=' ')&&(argv[1][k-c-1]!='\t'))&&((k-c-1)>=0))
	{c++;x++;}
}

		while((argv[1][k-c])&&(x>=0))
		{
			ft_putchar(argv[1][k-c]);
			x--;
			k++;
		}
		ft_putchar('\n');
		return(0);
	}
}
