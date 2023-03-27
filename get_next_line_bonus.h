/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddania-c <ddania-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:55:58 by ddania-c          #+#    #+#             */
/*   Updated: 2023/03/14 14:59:54 by ddania-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*read_and_reserve(int fd, char *reserve);
char	*buffer_to_reserve(char *reserve, char *buffer);
char	*reserve_to_line(char *reserve);
char	*get_new_reserve(char *reserve, char *line);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *str);

#endif
