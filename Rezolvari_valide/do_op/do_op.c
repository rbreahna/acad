/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 14:05:04 by exam              #+#    #+#             */
/*   Updated: 2016/07/28 14:48:11 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "op.h"

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}
int	n;
int m;
int r;

int		main(int argc,	char **argv)
{
	if (argc!=4) {ft_putchar('\n');
		return(0);}
		argc = 4;
		if(argc == 4)
		{
	n = atoi(argv[1]);
	m = atoi(argv[3]);
			if (argv[2][0] == '+')
			r = n + m;
	else	if (argv[2][0] == '-')
			r = n - m;
	else	if (argv[2][0] == '*')
		     r = n*m;
	else	if (argv[2][0] == '/')
			r = n / m;
	else	if (argv[2][0] == '%')
			r = n % m;

	printf("%d", r);
	printf("\n");
		}
		return(0);
}
