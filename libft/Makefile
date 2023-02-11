NAME = 			libft.a
INCLUDE =		../

CFLAGS = 		-Wall -Werror -Wextra -I $(INCLUDE)

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

SRCS =			ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
				ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
				ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
				ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memcpy.c \
				ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
				ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
				ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c

CC = 			cc

OBJS = 			$(SRCS:.c=.o)

BONUS =			ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
				ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
				ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

BONUS_OBJS = 	$(BONUS:.c=.o)

.c.o:			
				@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
				@$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all: 			$(NAME)

$(NAME):		$(OBJS)
					@ar rcs $(NAME) $(OBJS)
					@echo "$(GREEN)libft compiled!$(DEF_COLOR)"

bonus:			$(BONUS_OBJS)
					@ar rcs $(NAME) $(BONUS_OBJS)
					@echo "$(GREEN)libft bonus compiled!$(DEF_COLOR)"

clean:
					@rm -f $(OBJS) $(BONUS_OBJS)
					@echo "$(BLUE)libft object files cleaned!$(DEF_COLOR)"

fclean: 		clean
					@rm -f $(NAME)
					@echo "$(GREEN)Cleaned and rebuilt everything for libft!$(DEF_COLOR)"

re:				fclean all

.PHONY:			all clean fclean re bonus
