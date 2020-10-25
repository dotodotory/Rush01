/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiykim <jiykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:47:41 by jiykim            #+#    #+#             */
/*   Updated: 2020/10/25 20:36:36 by sna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** define the headers and functions to use.
** <unistd.h> = for use write
** <stdlib.h> = for use malloc, free
**define N 4 = global value for 4
*/

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>
# define N 4

int		argc_error(int argc);
int		size_error(char *str);
int		layout_error(char *str);
int		handle_error(int argc, char **argv);
void	str_int(char *str, int **arr);

#endif
