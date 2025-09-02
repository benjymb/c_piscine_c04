/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalca-b <bmalca-b@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:37:07 by bmalca-b          #+#    #+#             */
/*   Updated: 2025/09/01 20:07:30 by bmalca-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int nb, char *base_str, int base)
{
	char	out;
	if (base > 1)
	{	
		if (nb >= base)
			print_number(nb / base, base_str, base);
		out = base_str[(nb % base)];
		write(1, &out, 1);
	}
}
/*
void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	print_number(nb);
}
*/
int	validate_base(char *dirty_base)
{
	int size;
	int i;

	size = 0;
	i = 0;
	while(dirty_base[size] != '\0')
	{
		if (dirty_base[size] == '+' || dirty_base[size] == '-')
			return (0);
		while (i < size)
		{
			if (dirty_base[i] == dirty_base[size])
				return (0);
			i++;
		}
		i = 0;
		size++;
	}
	return (size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_size;

	base_size = validate_base(base);
	print_number(nbr, base, base_size);
}

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	//ft_putnbr_base(atoi(argv[1]), argv[2]);
	ft_putnbr_base(42, "123");
	return (argc * 0);
}
