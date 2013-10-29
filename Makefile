##
## Makefile for Projet-Bistro in /home/giallo_n/git/Projet-Bistro
## 
## Made by nathan giallombardo
## Login   <giallo_n@epitech.net>
## 
## Started on  Tue Oct 29 12:26:28 2013 nathan giallombardo
## Last update Tue Oct 29 12:42:14 2013 nathan giallombardo
##

CC	= cc

CFLAGS	= -I lib/ -I.

LIBDIR	= -L lib/ -lmy

RM	= rm -f

SRCS	= func.c \
	  operator.c

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
