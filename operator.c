/*
** operator.c for Projet-Bistro in /home/giallo_n/rendu/Projet-C-Bistro
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Mon Oct 28 22:43:44 2013 nathan giallombardo
** Last update Tue Oct 29 14:29:09 2013 nathan giallombardo
*/

#include <stdlib.h>
#include <inc.h>
#include <unistd.h>
t_nb	*my_add(t_nb *nb1, t_nb *nb2, t_base *base)
{
  char	*res;
  int	r;+
  
  res = xmalloc((nb1->size + 1) * sizeof(char));
  t_nb	*nb = make_nb(res);

  while (nb1->nbr[poss] != '\0')
    {
      nb->nbr[nb->poss--] = get_digit(base, nb1->nbr[nb1->poss--]) + get_digit(base, nb2->nbr[nb2->poss--]);
    }
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
