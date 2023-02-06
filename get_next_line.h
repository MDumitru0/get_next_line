/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaximci <dmaximci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:16:35 by dmaximci          #+#    #+#             */
/*   Updated: 2023/02/06 10:54:57 by dmaximci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
# define BUFFER_SIZE 42 //default size if not specified in cmd
# include <unistd.h> //for read
# include <stdlib.h> //for malloc, free
# include <stddef.h> //for size_t

char	*get_next_line(int fd);
int		find_char(char *str, char c);

#endif
#endif