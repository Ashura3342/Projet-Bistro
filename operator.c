/*
** operator.c for Projet-Bistro in /home/giallo_n/rendu/Projet-C-Bistro
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Mon Oct 28 22:43:44 2013 nathan giallombardo
** Last update Sun Nov 10 19:49:44 2013 nathan giallombardo
*/

#include <stdlib.h>
#include "my.h"
#include "bistromathique.h"

t_nb	*my_add(t_nb *nb1, t_nb *nb2, char *base)
{
  t_nb	*nb;
  int	size;
  int	c;
  
  c = 0;
  size = my_strlen(base);
  nb = make_nb_empty(nb1->size + 1);
  while (nb2->poss >= 0)
    {
      c = c + nb1->nbr[nb1->poss--] - *base + nb2->nbr[nb2->poss--] - *base;
      nb->nbr[nb->poss++] = get_digit(base, c % size);
      c = c / size;
    }
  while (nb1->poss >= 0)
    {
      c = c + nb1->nbr[nb1->poss--] - *base;
      nb->nbr[nb->poss++] = get_digit(base, c % size);
      c = c / size;
    }
  if (c > 0)
    nb->nbr[nb->poss] = get_digit(base, c);
  if (nb1->neg < 0 && nb1->neg < 0)
    nb->neg = 1;
  return (nb);
}

t_nb	*my_sub(t_nb *nb1, t_nb *nb2, char*base)
{
  t_nb	*nb;
  int	c;

  c = 0;
  nb = make_nb_empty(nb1->size);
  while (nb2->poss >= 0)
    {
      c = (nb1->nbr[nb1->poss--] - *base) -  (nb2->nbr[nb2->poss--] - *base) - c;
      if (c < 0)
	{
	  nb->nbr[nb->poss++] = get_digit(base, c + 10);
	  c = 1;
	}
      else
	{
	  nb->nbr[nb->poss++] = get_digit(base, c);
	  c = 0;
	}
    }
  while (nb1->poss >= 0)
    {
      c = nb1->nbr[nb1->poss--] - *base - c;
      if (c < 0)
	{
	  nb->nbr[nb->poss++] = get_digit(base, c + 10);
	  c = 1;
	}
      else
	{
	  nb->nbr[nb->poss++] = get_digit(base, c);
	  c = 0;
	}
    }
  if (nb1->neg < 0 && nb->nbr[0] != *base)
    nb->neg = 1;
  return (nb);
}

t_nb	*my_multi(t_nb *nb1, t_nb *nb2, char *base)
{
  my_putstr("multiplication\n");
  return (NULL);
}

t_nb	*my_div(t_nb *nb1, t_nb *nb2, char *base)
{
  my_putstr("division\n");
  return (NULL);
}
