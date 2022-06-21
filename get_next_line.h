/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinto <pepinto@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 17:16:29 by pepinto           #+#    #+#             */
/*   Updated: 2022/06/18 17:16:40 by pepinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>

char	*get_next_line(int fd);
void	*ft_calloc(size_t n, size_t size);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strjoin(char const *str1, char const *str2);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);

#endif
