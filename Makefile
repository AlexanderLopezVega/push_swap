#	Compilation
CC				=	cc
CFLAGS			=	-Wall -Werror -Wextra -g
MAKE			=	make

#	Shell
REMOVE			=	rm -f

#	Directories
DIR_LIBFT		=	libft

#	Files
FILES_SOURCE	=	ft_ffree.c \
					ft_parse.c \
					ft_sfree.c \
					ft_solve.c \
					ft_stack_del.c \
					ft_stack_iter.c \
					ft_stack_new.c \
					ft_stack_push.c \
					ft_strtoi.c \
					push_swap.c
FILES_OBJECT	=	$(FILES_SOURCE:.c=.o)
FILE_LIBFT		=	$(DIR_LIBFT)/libft.a

#	Names
NAME			=	push_swap

#	Targets
all:	$(NAME)

clean:
	$(REMOVE) $(FILES_OBJECT)
	$(MAKE) -C $(DIR_LIBFT) clean

fclean:	clean
	$(REMOVE) $(NAME)
	$(MAKE) -C $(DIR_LIBFT) fclean

re:	fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^ -I $(DIR_LIBFT)

$(NAME):	$(FILES_OBJECT) $(FILE_LIBFT)
	$(CC) $(CFLAGS) -o $@ $^

$(FILE_LIBFT):
	$(MAKE) -C $(DIR_LIBFT) bonus

.PHONY:	all clean fclean %.o