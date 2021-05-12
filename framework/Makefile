NAME	= libunit.a

CC		= clang
CFLAGS	= -Wall -Wextra -Werror -I.
RM		= rm -f
AR 		= ar rcs
VPATH	=	./src/utils \
			./src

UTILS_SRCS =	freelink.c \
				ft_malloc.c \
				ft_strlen.c \
				linkedlist.c \
				putstr.c

SRCS = load_test.c $(UTILS_SRCS)
OBJS	= 	$(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))
OBJ_DIR = ./obj
ifeq ($(strip $(OBJ_DIR)), "")
  OBJ_DIR  = .
endif

.PHONY: all clean fclean re bonus trash

all: $(NAME)

$(NAME): $(OBJS)
	@echo "MAKE archive file: $@"
	@$(AR) $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: %.c
	@echo "COMPILING: $@"
	@-mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(LINUXFLAGS) -c -o $@ $<

clean:
	@$(RM) $(OBJS)
	@echo "REMOVE OBJECT FILE"

fclean:	clean
	@$(RM) $(NAME)
	@echo "REMOVE $(NAME)"
	@echo


re:	fclean all
