/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiykim <jiykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:57:58 by jiykim            #+#    #+#             */
/*   Updated: 2020/10/25 17:26:45 by jiykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int **arr;

	arr = (int **)malloc(sizeof(int *) * N);
	if (handle_error(argc, argv) == 0)
		return (0);
	str_int(argv[1], arr);
	free(arr);
	return (0);
}
