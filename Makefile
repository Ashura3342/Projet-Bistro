##
## Makefile for Projet-Bistro in /home/giallo_n/git/Projet-Bistro
## 
## Made by nathan giallombardo
## Login   <giallo_n@epitech.net>
## 
## Started on  Tue Oct 29 12:26:28 2013 nathan giallombardo
## Last update Tue Oct 29 17:41:44 2013 nathan giallombardo
##

CC	= cc

CFLAGS	= -Ilib/ -I. -g3

LIBDIR	= -Llib/ -lmy

RM	= rm -f

SRCS	= func.c \
	  operator.c \
	  func_nbr.c \
	  func_base.c

OBJS	= $(SRCS:.c=.o)

NAME	= calc

all	: $(NAME)

$(NAME)	: $(OBJS)
	  $(CC) $(OBJS) $(LIBDIR) -o $(NAME)

clean	: 
	  $(RM) $(OBJS)

fclean	: clean
	  $(RM) $(NAME)

re	: fclean all
