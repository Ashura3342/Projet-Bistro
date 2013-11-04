/*
** my.h for Piscine-C-include in /home/giallo_n/rendu/Piscine-C-include
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Thu Oct 10 23:48:30 2013 nathan giallombardo
** Last update Fri Nov  1 17:49:47 2013 nathan giallombardo
*/

#ifndef MY_H_
# define MY_H_

void	my_putchar(char);
int	my_puterr(char *);
int	my_swap(int *, int *);
char	*my_strupcase(char *);
char	*my_strncpy(char *, char *, int);
char	*my_strlowcase(char *);
int	my_str_isnum(char *);
int	my_str_isalpha(char *);
int	my_strcmp(char *, char *);
char	*my_strcapitalize(char *);
void	my_sort_int_tab(int *, int);
int	my_putstr(char *);
int	my_is_prime(int);
int	my_getnbr_base(char *, char *);
int	my_factorielle_rec(int);
int	my_find_prime_sup(int);
int	my_getnbr(char *);
int	my_power_rec(int, int);
int	my_put_nbr(int);
int	my_getlen(char *);
int	my_square_root(int);
char	*my_strcat(char *, char *);
char	*my_strncat(char *, char *, int);
char	*my_strcpy(char *, char *);
int	my_str_islower(char *);
int	my_strlen(char *);
char	*my_strstr(char *, char *);
char	**my_str_to_wordtab(char *);
int	my_show_wordtab(char **);
char	*my_strdup(char *);
int	my_str_swap(char **, char **);
#endif /* !MY_H_ */
