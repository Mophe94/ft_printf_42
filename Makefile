
NAME = libftprintf.a


CC = gcc
CFLAGS = -Wall -Werror -Wextra
INC_DIR = inc
SRC_DIR = src
OBJ_DIR = obj
INC = -I$(INC_DIR)

SRCS = \
    $(SRC_DIR)/ft_printf.c \
    $(SRC_DIR)/ft_putadress.c \
    $(SRC_DIR)/ft_putchar.c \
    $(SRC_DIR)/ft_putnbr.c \
    $(SRC_DIR)/ft_putstr.c \
    $(SRC_DIR)/ft_utils.c

OBJ = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)


RED = \033[31m
YELLOW = \033[93m
GREEN = \033[32m
RESET = \033[0m
BOLD = \033[1m
CYAN = \033[96m


COMPILING_ICON = 🔨
CREATING_ICON = 🛠️
CLEANING_ICON = 🧹
DELETING_ICON = 🗑️
DONE_ICON = ✅

all: $(NAME)


$(NAME): $(OBJ)
	@echo "$(BOLD)$(CYAN)$(CREATING_ICON) Creating library...$(RESET)"
	@ar rcs $@ $(OBJ)
	@echo "$(BOLD)$(GREEN)$(DONE_ICON) Compilation complete!$(RESET)"


$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@echo "$(BOLD)$(YELLOW)$(COMPILING_ICON) Compiling $<...$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)


clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(BOLD)$(RED)$(CLEANING_ICON) Cleaned up object files$(RESET)"


fclean: clean
	@rm -f $(NAME)
	@echo "$(BOLD)$(RED)$(DELETING_ICON) Fully cleaned$(RESET)"


re: fclean all


.PHONY: all clean fclean re
