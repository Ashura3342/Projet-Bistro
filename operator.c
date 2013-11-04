/*
** operator.c for Projet-Bistro in /home/giallo_n/rendu/Projet-C-Bistro
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Mon Oct 28 22:43:44 2013 nathan giallombardo
** Last update Mon Nov  4 23:08:11 2013 nathan giallombardo
*/

#include <stdlib.h>
#include "my.h"
#include "inc.h"

t_nb	*my_add(t_nb *nb1, t_nb *nb2, t_base *base)
{
  t_nb	*nb;
  int	c;

  c = 0;
  nb = make_nb_empty(nb1->size + 1);
  while (is_end_nbr(nb2))
    {
      c = c + nb1->nbr[nb1->poss--] - base->digits[0] + nb2->nbr[nb2->poss--] - base->digits[0];
      nb->nbr[nb->poss++] = get_digit(base, c % base->size);
      c = c / base->size;
    }
  while (is_end_nbr(nb1))
    {
      c = c + nb1->nbr[nb1->poss--] - base->digits[0];
      nb->nbr[nb->poss++] = get_digit(base, c % base->size);
      c = c / base->size;
    }
  if (c > 0)
    nb->nbr[nb->poss++] = get_digit(base, c);
  nb->nbr[nb->poss] = '\0';
  my_revstr(nb->nbr);
  if (nb1->neg < 0 && nb1->neg < 0)
    nb->neg = nb->neg * (-1);
  return (nb);
}

t_nb	*my_sub(t_nb *nb1, t_nb *nb2, t_base *base)
{
  t_nb	*nb;
  int	c;

  c = 0;
  nb = make_nb_empty(nb1->size);
  while (is_end_nbr(nb2))
    {
      c = (nb1->nbr[nb1->poss--] - base->digits[0]) -  (nb2->nbr[nb2->poss--] - base->digits[0]) - c;
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
  while (is_end_nbr(nb1))
    {
      c = nb1->nbr[nb1->poss--] - base->digits[0] - c;
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
  nb->nbr[nb->poss++] = '\0';
  my_revstr(nb->nbr);
  if (nb1->neg < 0)
    nb->neg = nb->neg * (-1);
  return (nb);
}

t_nb	*my_multi(t_nb *nb1, t_nb *nb2, t_base *base)
{
  
  t_nb	*nb;
  int	c;

  c = 0;
  nb = make_nb_empty(nb1->size + nb2->size);
  while (is_end_nbr(nb2))
    {
      nb1->poss = nb1->size -1;
      nb->poss = nb2->size - nb2->poss - 1;
      while (is_end_nbr(nb1))
	{
	  c = c + (nb1->nbr[nb1->poss--] - base->digits[0]) * (nb2->nbr[nb2->poss] - base->digits[0]);
	  nb->nbr[nb->poss++] = get_digit(base, c % base->size);
	  c = c / base->size;
	}
      nb2->poss = nb2->poss - 1;
    }
  while (is_end_nbr(nb1))
    {
      c = c + nb1->nbr[nb1->poss--] - base->digits[0];
      nb->nbr[nb->poss++] = get_digit(base, c % base->size);
      c = c / base->size;
    }
  if (c > 0)
    nb->nbr[nb->poss++] = get_digit(base, c);
  nb->nbr[nb->poss] = '\0';
  my_revstr(nb->nbr);
  if ((nb1->neg < 0 && nb2->neg > 0) || (nb1->neg > 0 && nb2->neg < 0))
    nb->neg = nb->neg * (-1);
  return (nb);
}

t_nb	*my_div(t_nb *nb1, t_nb *nb2, t_base *base)
{
  my_putstr("division\n");
}
