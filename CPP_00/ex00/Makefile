# ****************************************************************************************** #
#                                                                                            #
#                                                         :::::::::: :::::::::   :::::::     #
#  Makefile                                              :+:        :+:    :+: :+:    :+     #
#                                                       +:+        +:+    +:+ +:+            #
#  By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+              #
#                                                    +#+        +#+    +#+ +#+               #
#  Created: 2022/09/17 20:02:17 by Flavio BC        #+#        #+#    #+# #+#    #+#         #
#  Updated: 2022/09/25 12:39:56 by Flavio BC       ###        #########   ########           #
#  License: MIT                                                                              #
#                                                                                            #
# ****************************************************************************************** #

NAME		= megaphone

SRCS_DIR	= ./
OBJ_DIR		= obj/

SRCS		= megaphone.cpp
OBJS		= $(SRCS:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

CC			= c++
RM			= rm -rf
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -pedantic-errors -g

all:	$(NAME)

$(NAME):	$(OBJ_DIR) $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean:	clean
	$(RM) $(NAME)

re:		fclean $(NAME)

test:	$(NAME)
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone

.PHONY:		all clean fclean re