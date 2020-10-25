/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiykim <jiykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:47:41 by jiykim            #+#    #+#             */
/*   Updated: 2020/10/25 16:13:44 by jiykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#define N 4

int		argc_error(int argc);
int		size_error(char *str);
int		layout_error(char *str);
int		handle_error(int argc, char **argv);
void	str_int(char *str, int **arr);