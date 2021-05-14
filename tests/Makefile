NAME = tests
CC = gcc
CFLAGS = -Werror -Wall -Wextra -g

FRAMEWORK_PATH = ../framework

HEADER_FILES = strlen/strlen.h
SRCS = $(shell find . -name '*.c')
OBJS = $(SRCS:.c=.o)

all: $(NAME)

test: $(NAME)
	@echo "run test"
	@./tests

$(NAME): ${HEADER_FILES} ${OBJS}
	@echo "MAKE libunit.a: $@"
	@$(MAKE) -C $(FRAMEWORK_PATH)
	@echo "COMPILING: $@"
	@${CC} ${CFLAGS} -o ${NAME} ${OBJS} -L ${FRAMEWORK_PATH} -lunit

clean:
	@$(MAKE) -C $(FRAMEWORK_PATH) clean
	@${RM} ${OBJS}
	@echo "REMOVE OBJECT FILE"

fclean: clean
	@$(MAKE) -C $(FRAMEWORK_PATH) fclean
	@${RM} ${NAME}
	@echo "REMOVE $(NAME)"

re: fclean all

.PHONY: all clean fclean re test