NAME = 			ft_printf.a

CFLAGS = 		-Wall -Werror -Wextra

SRCS =			libft/*.c ft_printf.c

CC = 			cc

OBJS = 			$(SRCS:.c=.o)

BONUS =			

BONUS_OBJS = 	$(BONUS:.c=.o)

.c.o:			@$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all: 			$(NAME)

$(NAME):		$(OBJS)
					ar rcs $(NAME) $(OBJS)

bonus:			$(BONUS_OBJS)
					ar rcs $(NAME) $(BONUS_OBJS)

clean:
					rm -f $(OBJS) $(BONUS_OBJS)

fclean: 		clean
					rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re bonus
