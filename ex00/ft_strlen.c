/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalca-b <bmalca-b@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:33:05 by bmalca-b          #+#    #+#             */
/*   Updated: 2025/08/28 12:42:58 by bmalca-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int count;
	count = ft_strlen(argv[1]);
	printf("The string has a size of : %d", count);	
	return (argc == 2);
}
*/
