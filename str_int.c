/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiykim <jiykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 13:09:02 by jiykim            #+#    #+#             */
/*   Updated: 2020/10/25 15:03:09 by jiykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	str_int(char *str, int **arr)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			arr[i / (2 * N)][(i / 2) % N] = str[i] - '0';
		}
		i++;
	}
}
