/*
** func_nbr.c for Projet-Bistro in /home/giallo_n/git/Projet-Bistro
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Tue Oct 29 12:56:58 2013 nathan giallombardo
** Last update Sun Nov 10 19:48:44 2013 nathan giallombardo
*/

#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

t_nb	*make_nb(char *nbr)
{
  int	i;
  int	j;
  int	a;

  i = 0;
  a = 0;
  if (nbr[i] == '-')
    {
      a = 1;
      while (*nbr)
	{
	  *nbr = (*nbr++);
	}
      my_putstr(nbr);
    }
  i = my_strlen(nbr);
  return (make_nb_base(nbr, i, i - 1, a));
}

t_nb	*make_nb_base(char *nbr, int size, int poss, int neg)
{
  t_nb	*nb;

  nb = malloc(sizeof(t_nb));
  nb->nbr = nbr;
  nb->size = size;
  nb->poss = poss;
  nb->neg = neg;
  return (nb);
}

t_nb	*make_nb_empty(int size)
{
  return (make_nb_base(xmalloc(size), size, 0, 0));
}

int	print_nb(t_nb *nb)
{
  if (nb->neg > 0)
    my_putchar('-');
  my_putstr(nb->nbr);
}
