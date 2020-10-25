/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiykim <jiykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 15:31:57 by jiykim            #+#    #+#             */
/*   Updated: 2020/10/25 16:47:44 by jiykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		argc_error(int argc)
{
	if (argc != 2)
		return (0);
	return (1);
}

int		size_error(int *str)
{
	int size;

	size = 0;
	while (*str)
	{
		str++;
		size++;
	}
	if (size != 31)
		return (0);
	return (1);
}

int		layout_error(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 1)
		{
			if (str[i] != ' ')
				return (0);
		}
		else
		{
			if (str[i] >= '1' && str[i] <= '4')
				return (0);
		}
		i++;
	}
	return (1);
}

int		handle_error(int argc, char **argv)
{
	if (argc_error(argc) == 0)
	{
		write(1, "argument number error\n", 21);
		return (0);
	}
	if (size_error(argv[1]) == 0)
	{
		write(1, "string size error\n", 17);
		return (0);
	}
	if (layout_error(argv[1]) == 0)
	{
		write(1, "space error or not 1 to 4\n", 25);
		return (0);
	}
	return (1);
}
