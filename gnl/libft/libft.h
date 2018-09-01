/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apickett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 16:04:25 by apickett          #+#    #+#             */
/*   Updated: 2018/08/15 20:00:47 by apickett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define STRSPLIT_VARS int x = 0; int y; int z = 0; char **table;
# define STRTRIM unsigned int x = 0; unsigned int y = 0; unsigned int z;

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "../includes/fdf.h"

# define DECL(type_, name) EXP(type_ name)
# define VAR(type_, name, value) EXP(type_ name = value)
# define TERN(cond, a, b) (EXP(cond ? a : b))
# define SWITCH(exp, ...) EXP(switch (exp) { DO(__VA_ARGS__)})
# define CASE(lit, ...) EXP(case lit : { DO(__VA_ARGS__)})
# define DEFAULT(...) EXP(default : { DO(__VA_ARGS__)})
# define IF(cond, ...) EXP(if (cond) { DO(__VA_ARGS__) })
# define ELSEIF(cond, ...) EXP(else if (cond) { DO(__VA_ARGS__) })
# define ELSE(...) EXP(else { DO(__VA_ARGS__) })
# define WHILE(cond, ...) EXP(while (cond) { DO(__VA_ARGS__) })
# define DOWHILE(cond, ...) EXP(do { DO(__VA_ARGS__) } while (cond))
# define FOR(i, c, u, ...) EXP(for (i; c; u) { DO(__VA_ARGS__) })
# define LOOP(...) EXP(for (;;) { DO(__VA_ARGS__) })
# define RET(ret) EXP(return (ret))
# define RETIF(ret, cond) EXP(if (cond) RET(ret))
# define NULLIF(cond) EXP(RETIF(NULL, cond))
# define NULLCHECK(...) EXP(RETIF(NULL, (NOT(AND(__VA_ARGS__)))))
# define RNULLCHECK(ret, ...) EXP(RETIF(ret, (NOT(AND(__VA_ARGS__)))))
# define FREE(...) EXP(APPLY(free, __VA_ARGS__))
# define ISSPACE(c) (c == ' ' || c == '\t' || c == '\n' ISSPACE2(c)
# define ISSPACE2(c) || c == '\r' || c == '\v' || c == '\f')
# define ISDIGIT(c) (c >= '0' && c <= '9')
# define ABS(x) ((x) < 0 ? -(x) : (x))

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
	int				i;
}					t_list;

int					ft_atoi(char const *str);
void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_islower(int c);
int					ft_isprime(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_intcount(char **str);
char				*ft_itoa(int n);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dest, void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strchr(const char *str, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dest, const char *src);
void				ft_strdel(char **as);
char				*ft_strdup(const char *src);
int					ft_strequ(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlen(const char *str);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *s1, const char *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dest, const char *src, unsigned int h);
char				*ft_strndup(const char *s1, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *s1, const char *s2, size_t len);
char				*ft_strrchr(const char *str, int c);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(const char *str, const char *sub_str);
char				*ft_strsub(char const *s1, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
int					ft_tolower(int c);
int					ft_toupper(int c);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
