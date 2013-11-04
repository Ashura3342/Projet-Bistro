/*
** operator.c for Projet-Bistro in /home/giallo_n/rendu/Projet-C-Bistro
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Mon Oct 28 22:43:44 2013 nathan giallombardo
** Last update Fri Nov  1 18:29:35 2013 nathan giallombardo
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
  return (nb);
}

char	*my_sous(t_nb *nb1, t_nb *nb2, t_base *base)
{
  
}

char	*my_multi(t_nb *nb1, t_nb *nb2, t_base *base)
{

}

char	*my_div(t_nb *nb1, t_nb *nb2, t_base *base)
{

}

int		main(int ac, char **av)
{
  t_nb		*nb;
  t_nb		*nb1;
  t_nb		*nb2;
  t_base	*base;

  nb1 = make_nb(av[1]);
  nb2 = make_nb(av[2]);
  if (my_max(nb2->size, nb1->size))
    {
      nb = nb1;
      nb1 = nb2;
      nb2 = nb;
      nb = NULL;
    }
  base = make_base(av[3]);
  nb = my_add(nb1, nb2, base);
  my_putstr(nb->nbr);
  xfree(nb1);
  xfree(nb2);
  xfree(base);
  xfree(nb->nbr);
  xfree(nb);
  return (0);
}
