#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

int	ft_isalpha(int n); ok
int	ft_isdigit(int n); ok
int	ft_isalnum(int n); ok
int	ft_isascii(int n); ok
int	ft_isprint(int n); ok

size_t	strlen(const char *s);

void	*ft_memset(void *s, int c, size_t n); ok
void	ft_bzero(void *s, size_t n); ok

void	*memcpy(void *dest, const void *src, size_t n);
void	ft_memmove
void	ft_strlcpy
void	ft_strlcat
int	ft_toupper(int c); ok
int     ft_tolower(int c); ok
void	ft_strchr
void	ft_strrchr
void	ft_strncmp
void	ft_memchr
void	ft_memcmp
void	ft_strnstr
int	ft_atoi (char *str); ok
void	ft_calloc
void	ft_strdup

char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);


#ifndef
