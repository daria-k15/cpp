NAME = ex00
SRCS = main.cpp Bureaucrat.cpp
HEADER = Bureaucrat.hpp
FLAGS = -W -Wextra -Werror --std=c++98

OBJS_DIR = obj/
OBJ_LIST = $(patsubst %.cpp, %.o, $(SRCS))
OBJS = $(addprefix $(OBJS_DIR), $(OBJ_LIST))

# Colors
GREEN = \033[0;32m

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	@clang++ $(FLAGS) $(OBJS) -o $(NAME) 
	@echo "$(GREEN)Project was successfully built"$(RESET)

$(OBJS_DIR)%.o : %.cpp $(HEADER)
	@mkdir -p $(OBJS_DIR)
	@clang++ $(FLAGS) -c $< -o $@


clean:
	@rm -rf $(OBJS_DIR)
	@echo "$(GREEN)Object files were deleted"$(RESET)

fclean: clean
	@rm -f $(NAME)
	@echo "$(GREEN)Deleted all files"$(RESET)

.PHONY: all clean fclean re

re: fclean all