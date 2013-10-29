/*
** inc.h for Projet-Bistro in /home/giallo_n/rendu/Projet-C-Bistro
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Mon Oct 28 22:23:35 2013 nathan giallombardo
** Last update Tue Oct 29 12:22:54 2013 nathan giallombardo
*/

#ifndef INCLUDE_H_
# define INCLUDE_H_
#include <stdlib.h>
typedef struct {
  char	*nbr;
  int	size;
  int	pos;
}	t_nb;

typedef struct {
  char	*digits;
  int	size;
}	t_base;

int	my_puterr(char *);
void	*xmalloc(size_t);
t_nb	*make_nb(char *);
int	*free_nb(t_nb *);
t_base	*make_base(char *);
int	*free_base(t_base *);
char	get_digit(t_base, char);
char	*my_add(t_nb *, t_nb *, t_base *);
char	*my_sub(t_nb *, t_nb *, t_base *);
char	*my_multi(t_nb *, t_nb *, t_base *);
char	*my_div(t_nb *, t_nb *, t_base *);
#endif /* !INCLUDE_H_ */
