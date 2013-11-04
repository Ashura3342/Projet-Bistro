/*
** func_nbr.c for Projet-Bistro in /home/giallo_n/git/Projet-Bistro
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Tue Oct 29 12:56:58 2013 nathan giallombardo
** Last update Mon Nov  4 13:58:30 2013 nathan giallombardo
*/

#include <stdlib.h>
#include "my.h"
#include "inc.h"

t_nb	*make_nb(char *nbr)
{
  t_nb	*nb;
  int	i;
  int	j;
  int	a;

  j = 0;
  a = my_isneg(nbr, &j);
  i = my_strlen(nbr);
  return (make_nb_base(nbr, i, i - 1, a, j));
}

t_nb	*make_nb_base(char *nbr, int size, int poss, int neg, int end)
{
  t_nb	*nb;

  nb = malloc(sizeof(t_nb));
  nb->nbr = nbr;
  nb->size = size;
  nb->poss = poss;
  nb->neg = neg;
  nb->end = end;
  return (nb);
}

t_nb	*make_nb_empty(int size)
{
  return (make_nb_base(xmalloc(size), size, 0, 1, 0));
}

int	is_end_nbr(t_nb *nb)
{
  if (nb->poss >= nb->end)
    return (1);
  else
    return (0);
}

int	print_nb(t_nb *nb)
{
  int	i;

  i = nb->end;
  if (nb->neg < 0)
    my_putchar('-');
  while (nb->nbr[i] != '\0')
    my_putchar(nb->nbr[i++]);
}
