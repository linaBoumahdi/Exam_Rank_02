/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_exam.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboumahd <lboumahd@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:29:51 by lboumahd          #+#    #+#             */
/*   Updated: 2024/05/30 15:18:28 by lboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GNL_EXAM_H
# define GNL_EXAM_H

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

#if BUFFER_SIZE > 1000
# undef BUFFER_SIZE 
# define BUFFER_SIZE 100
#endif

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 100
#endif

char *ft_join(char *line, char *buffer, int size, int from, int to);
char *get_next_line(int fd);

#endif