/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:17:19 by dparada           #+#    #+#             */
/*   Updated: 2024/12/26 15:35:14 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdarg.h>
# include <aio.h>
#include <stddef.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isspace(char c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen_matrix(char **matrix);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_first_char(char *s, int c);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	**ft_free(char **matrix);
void	ft_bzero(void *s, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_calloc(size_t count, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*get_next_line(int fd);
char	*ft_free_gnl(char *s);
int		ft_len(char *s);
char	*ft_strjoin_gnl(char *bff, char *nl);
char	*ft_strchr_gnl(char *s, int c);
char	*ft_strdup_gnl(const char *s1);
// char	*ft_strchr_gnl(char *s, int c);
// char	*ft_readfd(int fd, char *buffer);
// char	*ft_clean(char *buffer);
// char	*ft_get_the_line(char *line);
// void	*ft_calloc_gnl(size_t count, size_t size);
// int		ft_strlen_gnl(char *s);

int		ft_printf(char const *str, ...);
int		ft_check(char const *str, va_list parametros, int total);
int		ft_check_hexa(char const *str, va_list parametros);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_hexa(long long int nb, char word);
int		ft_digit_p(long n);
int		ft_digit_u(long n);
int		ft_punt(void *nb);
int		ft_strdiv(unsigned long nb);
char	*ft_convert_u(long n, char *ptr, size_t i);
char	*ft_convert_p(long n, char *ptr, size_t i);
char	*ft_itoap(int n);
char	*ft_itoa_u(unsigned int n);
char	*ft_convert_he(unsigned long nb, char *base);
char	*ft_new(char *ptr);

void	ft_printf_fd(char const *str, ...);
void	print_matrix(char **matrix);

#endif