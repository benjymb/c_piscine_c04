/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalca-b <bmalca-b@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:43:28 by bmalca-b          #+#    #+#             */
/*   Updated: 2025/09/01 18:34:12 by bmalca-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	power(int base, int exp)
{
	int	response;

	response = 1;
	while (exp > 0)
	{
		response = response * base;
		exp--;
	}
	return (response);
}

int	char_helper(char c, char mode)
{
	if (mode == 'v')
		return ((c == '+' || c == '-') || (c >= '0' && c <= '9'));
	else if (mode == 's')
		return (c == '+' || c == '-');
	else
	{
		if (mode == '-' && c == '-')
			return ('+');
		else if (mode == '-' || c == '-')
			return ('-');
	}
	return (mode);
}

int	sanitize_str(char *dirty, char *clean)
{
	int		cln_counter;
	int		dty_counter;
	int		number_begin;

	cln_counter = 1;
	dty_counter = 0;
	number_begin = 0;
	clean[0] = '+';
	while (dirty[dty_counter++] != '\0')
	{
		if (char_helper(dirty[dty_counter], 'v'))
		{
			number_begin = 1;
			if (char_helper(dirty[dty_counter], 's'))
				clean[0] = char_helper(clean[0], dirty[dty_counter]);
			else
			{
				clean[cln_counter] = dirty[dty_counter];
				cln_counter++;
			}
		}
		else if (number_begin == 1)
			return (cln_counter);
	}
	return (cln_counter);
}

int	ft_atoi(char *str)
{
	char	clean[50];
	int		size;
	int		i;
	int		number;

	size = sanitize_str(str, clean);
	i = 1;
	number = 0;
	while (i < size)
	{
		number += (clean[i] - '0') * power(10, size - (i + 1));
		i++;
	}
	if (clean[0] == '-')
		number *= -1;
	return (number);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int number;
	
	number = ft_atoi(argv[1]);
	printf("%d", number);
	return (0 * argc);
}
*/
