# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crenault <crenault@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/12 22:18:24 by crenault          #+#    #+#              #
#    Updated: 2015/05/12 23:31:01 by crenault         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# libft
FT_FOLD = libft
FT_CHECK = $(FT_FOLD)/.git
FT_LIB = libft/libft.a
FT_FLAGS = -L$(FT_FOLD) -lft

# submodules
SUBMODULES = $(FT_CHECK)

# compiler
CC = clang
# file type
FT = c
# flags
FLAGS = -Wall -Wextra -Werror -O3
FLAGS += -g
# binary flags (add libraries)
BIN_FLAGS = $(FLAGS) $(FT_FLAGS)
# executable
NAME = cmh.a

# to compile files
#SRC = src/mat4/simple.c
SRC = src/mat4/operators.c
SRC += src/mat4/models.c
SRC += src/vec3/simple.c
SRC += src/vec3/advanced.c
SRC += src/vec3/operators.c
# header files
HDR = include/mat4.h
HDR += include/vec3.h
# objects files
OBJS = $(SRC:.$(FT)=.o)

# main rule
all: $(NAME)

# rebuild your bin
re: fclean $(NAME)

# reclone submodule and rebuild
rere: ffclean $(NAME)

$(NAME): $(SUBMODULES) $(FT_LIB) $(OBJS)
	@ar rc $@ $(OBJS)
	@ranlib $@
	@echo $@ "updated!"

# making o files
%.o: %.$(FT) $(HDR)
	@$(CC) $(FLAGS) -c -o $@ $<
	@echo $< "updated!"

# submodules
$(SUBMODULES):
	@git submodule init
	@git submodule update
	@echo $@ "updated!"

# lib libft
$(FT_LIB):
	@make -C $(FT_FOLD)
	@echo $@ "updated!"

#
.PHONY: clean fclean ffclean

# clean o files
clean:
	@rm -rf $(OBJS)

# clean submodules
cleansubs:
	@rm -rf $(FT_FOLD)

# clean exec file and library
fclean: clean
	@rm -rf $(FT_LIB)
	@rm -rf $(NAME)

# get empty and clean repo (without libs)
ffclean: fclean cleansubs
