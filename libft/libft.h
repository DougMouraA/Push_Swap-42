/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:03:50 by dmoura-a          #+#    #+#             */
/*   Updated: 2023/01/09 14:42:18 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include	<stdarg.h>
# include	<unistd.h>
# include	<stdlib.h>
# include	<stdint.h>

int			ft_isalpha(int ch);
int			ft_isdigit(int ch);
int			ft_isalnum(int ch);
int			ft_isascii(int ch);
int			ft_isprint(int ch);
int			ft_tolower(int ch);
int			ft_toupper(int ch);
size_t		ft_strlen(const char *str);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int ch);
int			ft_strncmp(const char *str1, const char *str2, size_t count);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
void		*ft_memset(void *buf, int ch, size_t count);
void		*ft_memchr(const void *buffer, int ch, size_t count);
int			ft_memcmp(const void *buf1, const void *buf2, size_t count);
void		*ft_memcpy(void *to, const void *from, size_t count);
void		*ft_memmove(void *to, const void *from, size_t count);
void		ft_bzero(void *s, size_t n);
long int	ft_atoi(const char *str);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
int			ft_putchar(char c);
int			ft_putstr(const char *str);
int			ft_putnbr(int n);
int			ft_putnbr_u(unsigned int n);
int			ft_printif(const char a, va_list listpa);
int			ft_printf(const char *a, ...);
int			ft_putstr(const char *str);
int			free_function(char *p);
char		*mallocation(size_t size);
int			ft_printhex(unsigned int n, char *str);
int			ft_printptr(void *p, char *str);

#endif
