/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <jaurbano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:43:04 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/20 14:09:20 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int			ft_isalpha(int a);

int			ft_isdigit(int a);

int			ft_isalnum(int a);

int			ft_isascii(int c);

int			ft_isprint(int a);

size_t		ft_strlen(const char *str);

void		*ft_memset(void *str, int c, size_t len);

void		ft_bzero(void *s, size_t n);

void		*ft_memcpy(void *dst, const void *src, size_t n);

void		*ft_memmove(void *dst, const void *src, size_t len);

size_t		ft_strlcpy(char *dest, char *src, unsigned int size);

size_t		ft_strlcat(char *dest, char *src, size_t size);

int			ft_toupper(int c);

int			ft_tolower(int c);

char		*ft_strchr(const char	*s, int c);

char		*ft_strrchr(const char *s, int c);

int			ft_strncmp(const char *s1, const char *s2, size_t n);

void		*ft_memchr(void *s, int c, size_t n);

int			ft_memcmp(void *s1, void *s2, size_t n);

char		*ft_strnstr(const char *haystack, const char *needle, size_t len);

int			ft_atoi(const char *str);

void		*ft_calloc(size_t count, size_t size);

char		*ft_strdup(char *src);

char		*ft_substr(char *s, unsigned int start, size_t len);

#endif
