# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alopez-v <alopez-v@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/14 17:44:01 by alopez-v          #+#    #+#              #
#    Updated: 2025/06/14 20:00:29 by alopez-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CC = cc
CFLAGS = -Wall -Werror -Wextra -g

# Directories
SOURCE_DIR = src
TEST_DIR = testsuite
OBJECT_DIR = obj
BINARY_DIR = bin
HEADER_DIR = include
PUSH_SWAP_DIR = ../push_swap
PUSH_SWAP_OBJECT_DIR = $(PUSH_SWAP_DIR)/obj
PUSH_SWAP_HEADER_DIR = $(PUSH_SWAP_DIR)/include

# Files
SOURCE_FILES = unity.c
TEST_FILES = test_parse_int.c \
				test_stack_append.c \
				test_stack_apply.c \
				test_stack_delete.c \
				test_stack_delete_one.c \
				test_stack_extract.c \
				test_stack_new.c \
				test_stack_parse.c
OBJECT_FILES = $(SOURCE_FILES:.c=.o)
BINARY_FILES = $(TEST_FILES:.c=)
PUSH_SWAP_OBJECT_FILES := $(filter-out $(PUSH_SWAP_OBJECT_DIR)/main.o, $(wildcard $(PUSH_SWAP_OBJECT_DIR)/*.o))

SOURCE_FILES_ABS = $(patsubst %.c, $(SOURCE_DIR)/%.c, $(SOURCE_FILES))
TEST_FILES_ABS = $(patsubst %.c, $(TEST_DIR)/%.c, $(TEST_FILES))
OBJECT_FILES_ABS = $(patsubst %.o, $(OBJECT_DIR)/%.o, $(OBJECT_FILES))
BINARY_FILES_ABS = $(patsubst %, $(BINARY_DIR)/%, $(BINARY_FILES))

# Targets
$(BINARY_DIR)/%: $(TEST_DIR)/%.c $(OBJECT_FILES_ABS) $(PUSH_SWAP_OBJECT_FILES)
	mkdir -p $(BINARY_DIR)
	$(CC) $(CFLAGS) $^ -o $@ $(PUSH_SWAP_OBJECT_FILES) -I $(HEADER_DIR) -I $(PUSH_SWAP_HEADER_DIR)

$(OBJECT_DIR)/%.o: $(SOURCE_DIR)/%.c
	mkdir -p $(OBJECT_DIR)
	$(CC) $(CFLAGS) $^ -c -o $@ -I $(HEADER_DIR) -I $(PUSH_SWAP_HEADER_DIR)

$(PUSH_SWAP_OBJECT_FILES): push_swap

push_swap:
	make -C $(PUSH_SWAP_DIR)

all: $(BINARY_FILES_ABS)

clean:
	rm -rf $(OBJECT_DIR)

fclean: clean
	rm -rf $(BINARY_DIR)

re: fclean all

.PHONY: all, clean, fclean, re