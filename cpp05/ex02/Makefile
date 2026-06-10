# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/08 17:48:53 by aosset-o          #+#    #+#              #
#    Updated: 2026/06/10 19:27:43 by aosset-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

CXX=c++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98

NAME = bureaucrat
SRC = main.cpp Bureaucrat.cpp AForm.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
HEADER = Bureaucrat.hpp AForm.hpp
$(NAME): $(OBJ) 
	@$(CXX) $(CXXFLAGS) -o $@ $^ 
	@echo "$(NAME): $(GREEN)object files were created$(RESET)"
	@echo "$(NAME): $(GREEN)$(NAME) was created$(RESET)"
%.o: %.cpp $(HEADER)
	@$(CXX) $(CXXFLAGS)  -c $< -o $@
	@echo "$(NAME): $(GREEN)$(OBJ) was created$(RESET)"
clean:
	@rm -f $(OBJ)
	@echo "$(NAME): $(RED)$(OBJ) was deleted$(RESET)"
	@echo "$(NAME): $(RED)object files were deleted$(RESET)"
fclean: clean
	@echo "$(NAME): $(RED) was deleted$(RESET)"
	@rm -f $(NAME)
	@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"
re: fclean all

.PHONY: all clean fclean re