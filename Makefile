

SRC = ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_atoi.c \
	  ft_memset.c\
	  ft_bzero.c \
	  ft_calloc.c \
	  ft_memcpy.c\
	  ft_memmove.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_strncmp.c\
	  ft_strnstr.c\
	  ft_strrchr.c\
	  ft_strchr.c\
	  ft_strlcat.c\
	  ft_strdup.c\
	  ft_strlcpy.c\
	  ft_substr.c\
	  ft_strjoin.c\
	  ft_strtrim.c\
	  ft_split.c\
	  ft_itoa.c\
	  ft_strmapi.c\
	  ft_putstr_fd.c\
	  ft_putnbr_fd.c\
	  ft_putendl_fd.c\
	  ft_putchar_fd.c\
	  ft_lstnew.c\
	  ft_lstadd_front.c\
	  ft_lstsize.c\
	  ft_lstlast.c\
	  ft_lstadd_back.c\
	  ft_lstdelone.c\
	  ft_lstclear.c\
	  ft_lstiter.c\
	  ft_lstmap.c\
	  ft_striteri.c\

OBJ = $(SRC:.c=.o)

OBJ_B = $(SRC:.c=.o)

NAME = Libft.a

CC = gcc

FLAGS = -Werror -Wextra -Wall

all: $(NAME)
	ar cr $(NAME) $(OBJ) 

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ) .DS_Store

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: $(NAME)
	ar cr $(NAME) $(OBJ_B)

.PHONY: all clean fclean re bonus
