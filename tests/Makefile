NAME = runtest
CC = gcc
CFLAGS = -Werror -Wall -Wextra

FRAMEWORK_PATH = ../framework
REALTESTS_PATH = ../real_tests


VPATH	=	./strlen


# HEADER_FILES = strlen/strlen.h
# SRCS = $(shell find . -name '*.c')
SRCS =	main.c	\
		00_launcher.c \
		01_basic_test.c \
		02_null_test.c \
		03_null_char_test.c \
		04_null_word_test.c \
		05_abort_test.c \
		06_buse_test.c \
		07_segv_test.c \
		08_illigal_test.c \
		09_bigger_test.c \
		10_nonprintable_test.c \
		11_dell_test.c \
		12_num_test.c \
		13_hello42_test.c \
		14_howareyou_test.c \
		15_thankyou_test.c


OBJS = $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))
OBJ_DIR = ../obj

all: $(NAME)

test: $(NAME)
	@echo "run test"
	@./runtest

$(NAME): $(OBJS)
	@echo "\nMAKE libunit.a: $@"
	@$(MAKE) -C $(FRAMEWORK_PATH)
	@$(MAKE) -C $(REALTESTS_PATH)
	@echo "COMPILING: $@"
	@cp $(FRAMEWORK_PATH)/libunit.a ./
	@cp $(REALTESTS_PATH)/libft.a ./
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L . -lunit -lft

$(OBJ_DIR)/%.o: %.c
	@echo "COMPILING: $@"
	@-mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@$(MAKE) -C $(FRAMEWORK_PATH) clean
	@$(MAKE) -C $(REALTESTS_PATH) clean
	@echo "REMOVE OBJECT FILE"
	@$(RM) result.log
	@echo "REMOVE result.log"
	@$(RM) $(OBJS)

fclean: clean
	@echo "REMOVE libunit.a"
	@$(RM) $(FRAMEWORK_PATH)/libunit.a libunit.a
	@echo "REMOVE libft.a"
	@$(RM) $(REALTESTS_PATH)/libft.a libft.a
	@echo "REMOVE $(NAME)"
	@$(RM) $(NAME)
	@echo

re: fclean all

.PHONY: all clean fclean re test