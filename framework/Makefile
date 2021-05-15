NAME	= libunit.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I.
RM		= rm -f
AR		= ar rcs
VPATH	=	./src/utils \
			./src

UTILS_SRCS =	freelink.c \
				ft_abs.c \
				ft_malloc.c \
				linkedlist.c \
				print_report.c \
				print_score.c \
				print_status.c \
				print_title.c \
				putnbr.c \
				putstr.c

SRCS =	launch_tests.c \
		load_test.c

SRCS += $(UTILS_SRCS)
OBJS	= 	$(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))
OBJ_DIR = ../obj

.PHONY: all clean fclean re bonus trash

all: $(NAME)

$(NAME): $(OBJS)
	@echo "MAKE archive file: $@"
	@$(AR) $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: %.c
	@echo "COMPILING: $@"
	@-mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@$(RM) $(OBJS)
	@echo "REMOVE OBJECT FILE"

fclean:	clean
	@$(RM) $(NAME)
	@echo "REMOVE $(NAME)"
	@echo

re:	fclean all
