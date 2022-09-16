NAME			= phonebook

HEADERS			= main.hpp phonebook.hpp contact.hpp

SRCS_DIR		= ./
OBJ_DIR			= obj/

SRCS			= main.cpp phonebook.cpp contact.cpp
OBJS			= $(SRCS:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

CC				= c++
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror -std=c++98 -pedantic-errors -g

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