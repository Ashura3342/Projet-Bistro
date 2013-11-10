/*
** func_base.c for Projet-Bistro in /home/giallo_n/git/Projet-Bistro
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Tue Oct 29 13:05:30 2013 nathan giallombardo
** Last update Sun Nov 10 19:47:22 2013 nathan giallombardo
*/

#include	<stdlib.h>
#include	"my.h"
#include	"bistromathique.h"

char		get_digit(char *base, int c)
{
  return (get_digit_ch(base, c + *base)); 
}


char		get_digit_ch(char *base, char c)
{
  while (*base && *base++ != c)
  return (*base);
}
