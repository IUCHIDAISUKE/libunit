NAME = tests
CC = gcc
CFLAGS = -Werror -Wall -Wextra

FRAMEWORK_PATH = ../framework

VPATH	=	./strlen


# HEADER_FILES = strlen/strlen.h
# SRCS = $(shell find . -name '*.c')
SRCS =	main.c	\
		00_launcher.c \
		01_basic_test.c \
		02_null_test.c
OBJS = $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))
OBJ_DIR = ./obj

all: $(NAME)

test: $(NAME)
	@echo "run test"
	@./tests

$(NAME): ${HEADER_FILES} ${OBJS}
	@echo "\nMAKE libunit.a: $@"
	@$(MAKE) -C $(FRAMEWORK_PATH)
	@echo "COMPILING: $@"
	@${CC} ${CFLAGS} -o ${NAME} ${OBJS} -L ${FRAMEWORK_PATH} -lunit


$(OBJ_DIR)/%.o: %.c
	@echo "COMPILING: $@"
	@-mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@$(MAKE) -C $(FRAMEWORK_PATH) clean
	@echo "REMOVE OBJECT FILE"
	@${RM} ${OBJS}

fclean: clean
	@$(MAKE) -C $(FRAMEWORK_PATH) fclean
	@echo "REMOVE $(NAME)"
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re test