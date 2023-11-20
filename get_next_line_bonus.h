/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:13:59 by drenassi          #+#    #+#             */
/*   Updated: 2023/11/20 20:14:00 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42

# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);

char	*gnl_strchr(char const *s, int c);
size_t	gnl_strlen(char const *s);
char	*gnl_strdup(char const *src);
char	*gnl_strjoin(char *s1, char const *s2);
char	*gnl_substr(const char *s, unsigned int start, size_t len);

#endif