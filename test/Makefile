# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alopez-v <alopez-v@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/14 17:44:01 by alopez-v          #+#    #+#              #
#    Updated: 2025/06/14 18:44:45 by alopez-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CC = cc
CFLAGS = -Wall -Werror -Wextra -g

# Directories
SOURCE_DIR = src
OBJECT_DIR = obj
BINARY_DIR = bin
HEADER_DIR = include

# Files
SOURCE_FILES = unity.c
OBJECT_FILES = $(SOURCE_FILES:.c=.o)
NAME = unity

SOURCE_FILES_ABS = $(patsubst %.c, $(SOURCE_DIR)/%.c, $(SOURCE_FILES))
OBJECT_FILES_ABS = $(patsubst %.o, $(OBJECT_DIR)/%.o, $(OBJECT_FILES))
BINARY_FILE_ABS = $(BINARY_DIR)/$(NAME)

# Targets
$(BINARY_FILE_ABS): $(OBJECT_FILES_ABS)
	mkdir -p $(BINARY_DIR)
	$(CC) $(CFLAGS) $^ -o $@ -I $(HEADER_DIR)

$(OBJECT_DIR)/%.o: $(SOURCE_DIR)/%.c
	mkdir -p $(OBJECT_DIR)
	$(CC) $(CFLAGS) $^ -c -o $@ -I $(HEADER_DIR)

all: $(BINARY_FILE_ABS)

clean:
	rm -rf $(OBJECT_DIR)

fclean: clean
	rm -rf $(BINARY_DIR)

re: fclean all

.PHONY: all, clean, fclean, re