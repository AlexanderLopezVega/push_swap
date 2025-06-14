# Compiler
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Directories
SOURCE_DIR = src
OBJECT_DIR = obj
BINARY_DIR = bin
HEADER_DIR = include

# Files
SOURCE_FILES = main.c
OBJECT_FILES = $(SOURCE_FILES:.c=.o)
NAME = push_swap

SOURCE_FILES_ABS = $(patsubst %.c, $(SOURCE_DIR)/%.c, $(SOURCE_FILES))
OBJECT_FILES_ABS = $(patsubst %.o, $(OBJECT_DIR)/%.o, $(OBJECT_FILES))
BINARY_FILE_ABS = $(BINARY_DIR)/$(NAME)

# Targets
$(BINARY_FILE_ABS): $(OBJECT_FILES_ABS)
	mkdir -p $(BINARY_DIR)
	$(CC) $(CFLAGS) $^ -o $@ -I $(HEADER_DIR)

$(OBJECT_FILES_ABS): $(SOURCE_FILES_ABS)
	mkdir -p $(OBJECT_DIR)
	$(CC) $(CFLAGS) $^ -c -o $@ -I $(HEADER_DIR)

all: $(BINARY_FILE_ABS)

clean:
	rm -rf $(OBJECT_DIR)

fclean: clean
	rm -rf $(BINARY_DIR)

re: fclean all

.PHONY: all, clean, fclean, re