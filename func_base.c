/*
** func_base.c for Projet-Bistro in /home/giallo_n/git/Projet-Bistro
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Tue Oct 29 13:05:30 2013 nathan giallombardo
** Last update Mon Nov  4 12:14:54 2013 nathan giallombardo
*/

#include	<stdlib.h>
#include	"my.h"
#include	"inc.h"

t_base		*make_base(char *digits)
{
  t_base	*base;
  
  base = malloc(sizeof(t_base));
  base->digits = digits;
  base->size = my_strlen(digits);
  return (base);
}

char		get_digit(t_base *base, int c)
{
  int		i;
  char		w;

  i = 0;
  w = c + base->digits[i];
  while (base->digits[i] != '\0' && base->digits[i] != w)
      i = i + 1;
  return (base->digits[i]);
}
