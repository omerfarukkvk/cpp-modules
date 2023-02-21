SRCS	=	Contact.cpp PhoneBook.cpp main.cpp PhoneBook_utils.cpp

NAME	=	PhoneBook
CC		=	c++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98

all		: $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean	:
	rm -rf $(NAME)

fclean	:	clean

re		:	fclean all

.PHONY	:	clean fclean re
