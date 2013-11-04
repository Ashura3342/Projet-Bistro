/*
** evalexpr.c for evalexpr in /home/wallet_v/git/Projet-Bistro
** 
** Made by valentin wallet
** Login   <wallet_v@epitech.net>
** 
** Started on  Tue Oct 29 12:26:11 2013 valentin wallet
** Last update Fri Nov  1 15:45:47 2013 valentin wallet
*/

#include <stdlib.h>
#include "my.h"

int	parcours(char *str, int *i)
{
  char	*dest;
  
  dest = malloc(my_strlen(str));
  my_putchar('\n');
  my_strcpy(dest, str);
  while (str[*i] != '\0' && str[*i] != ')')
    {
      if (str[*i] == '(')
	{
	  *i = *i + 1;
	  parcours(str, i);
	}
      else
	{
	  my_putchar(dest[*i]);
	}
      *i = *i + 1;
    }      
}

int	main(int ac, char **av)
{
  int	i;
  
  i = 0;
  if (ac == 2)
    parcours(av[1], &i);
  my_putchar('\n');
  return (0);
}
      
  
