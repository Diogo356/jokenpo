NAME	= jokenpo

SRCS	= main.c \
		players.c \
		validation.c \

OBJS	= ${SRCS:.c=.o}

CC		= cc
RM		= rm -rf

CFLAGS	= -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS)  $(OBJS) -o $(NAME)

all:		${NAME}

clean:
			${RM} ${OBJS}
	
fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all fclean 	clean re