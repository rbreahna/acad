/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 14:57:21 by exam              #+#    #+#             */
/*   Updated: 2016/07/28 16:49:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

int		main(int argc,	char **argv)
{
	int		i;
	int 	j;
	int 	c;
	int 	m;
	int 	n;
	int 	k;

	k = 0;
	m = 0;
	n = 0;
	i = 0;
	j = 0;
	c = 0;

	if (argc!=3) {ft_putchar('\n');
		return(0);}
		argc = 3;
		if(argc == 3)
		{	
			while(argv[1][i])
			{
				while(argv[2][j])
				{
					if (argv[1][i]==argv[2][j])
					{n = j; c++;}
					if (c ==1) {m = n;c++;k++; }
					j++;
				}

				j = m;
				i++;
				c = 0;
			}
			i = 0;
			while(argv[1][i]) i++;
			if (k == i)
				ft_putchar('1');
			else ft_putchar ('0');
			ft_putchar('\n');
		}
		return(0);
}
