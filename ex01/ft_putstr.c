/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalca-b <bmalca-b@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:45:48 by bmalca-b          #+#    #+#             */
/*   Updated: 2025/08/28 15:36:10 by bmalca-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*
#include <stdio.h>
int	main(int argc, char ** argv)
{
	ft_putstr(argv[1]);
	printf("\n%d", argc);
	return (0);
}
*/
