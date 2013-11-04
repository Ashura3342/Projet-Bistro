/*
** inc.h for Projet-Bistro in /home/giallo_n/rendu/Projet-C-Bistro
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Mon Oct 28 22:23:35 2013 nathan giallombardo
** Last update Sun Nov  3 18:05:22 2013 nathan giallombardo
*/

#ifndef INCLUDE_H_
# define INCLUDE_H_

# include <stdlib.h>

typedef struct {
  char	*nbr;
  int	size;
  int	poss;
  int	neg;
  int	end;
}	t_nb;

typedef struct {
  char	*digits;
  int	size;
}	t_base;

int	xfree(void *);
char	*xmalloc(int);
int	my_isneg(char *str, int *i);
int	my_max(int a, int b);
t_nb	*make_nb_base(char *, int, int,int, int);
t_nb	*make_nb(char *);
t_nb	*make_nb_empty(int);
int	is_end_nbr(t_nb *);
int	*free_nb(t_nb *);
t_base	*make_base(char *);
int	*free_base(t_base *);
char	get_digit(t_base*, int);
t_nb	*my_add(t_nb *, t_nb *, t_base *);
char	*my_sub(t_nb *, t_nb *, t_base *);
char	*my_multi(t_nb *, t_nb *, t_base *);
char	*my_div(t_nb *, t_nb *, t_base *);
#endif /* !INCLUDE_H_ */
