# ****************************************************************************************** #
#                                                                                            #
#                                                         :::::::::: :::::::::   :::::::     #
#  Makefile                                              :+:        :+:    :+: :+:    :+     #
#                                                       +:+        +:+    +:+ +:+            #
#  By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+              #
#                                                    +#+        +#+    +#+ +#+               #
#  Created: 2022/09/18 10:54:19 by Flavio BC        #+#        #+#    #+# #+#    #+#         #
#  Updated: 2022/10/01 13:55:39 by Flavio BC       ###        #########   ########           #
#  License: MIT                                                                              #
#                                                                                            #
# ****************************************************************************************** #

NAME		= brain

HEADERS		= Animal.hpp Brain.hpp Cat.hpp Dog.hpp

SRCS_DIR	= ./
OBJ_DIR		= obj/

SRCS		= main.cpp Animal.cpp Brain.cpp Cat.cpp Dog.cpp
OBJS		= $(SRCS:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

CC			= c++
RM			= rm -rf
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -pedantic-errors -g

all:	$(NAME)

$(NAME):	$(OBJ_DIR) $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $@
			
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean:	clean
	$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:		all clean fclean re