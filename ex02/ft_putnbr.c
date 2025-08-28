/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalca-b <bmalca-b@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:40:15 by bmalca-b          #+#    #+#             */
/*   Updated: 2025/08/28 19:14:52 by bmalca-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int nb)
{
	char	out;

	if (nb >= 10)
		print_number(nb / 10);
	out = (nb % 10) + '0';
	write(1, &out, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	print_number(nb);
}
/*
int	main(void)
{
	ft_putnbr(-442);
}
*/
