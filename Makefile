########################################################################################################################
#                                                      VARIABLES                                                       #
########################################################################################################################

AUTHOR			:=		jowagner
NAME			:= 		push_swap

AR				:= 		ar -rcs
CC				:= 		cc
CFLAGS			:= 		-Wall -Wextra -Werror -MD -MP -Iinc/

SRC				:=		src/main.c \

########################################################################################################################
#                                                      DIRECTORY                                                       #
########################################################################################################################

INC_PATH		:=		inc/
SRC_PATH		:=		src/
OBJ_DIR			:= 		obj/
LIBFT_DIR		:=		libft/
LIBFT			:= 		$(LIBFT_DIR)libft.a

OBJ             := 		$(SRC:$(SRC_PATH)%.c=$(OBJ_DIR)%.o)

DEP				:=		$(OBJ:%.o=%.d)
override DIRS	:=		$(sort $(dir $(NAME) $(OBJ) $(DEP)))

########################################################################################################################
#                                                      TARGETS                                                         #
########################################################################################################################

all : 					lib $(NAME)

lib :
							$(MAKE) -C $(LIBFT_DIR)

clean :					.print_header
							@printf "%-50b%b" "$(YELLOW)[so_long/$(OBJ_DIR)] :$(RESET)" "\n"
							rm -rf $(OBJ_DIR)
							@printf "%-50b%b" "=> $(BOLD_RED)Clean$(RESET)" $(call PROGRESS_BAR) "$(BOLD_GREEN)[✓]$(RESET)\n"
							@printf "\n"
							@printf "%-50b%b" "$(YELLOW)[$(LIBFT_DIR)obj] :$(RESET)" "\n"
							$(MAKE) --silent -C $(LIBFT_DIR) clean
							@printf "%-50b%b" "=> $(BOLD_RED)Clean$(RESET)" $(call PROGRESS_BAR) "$(BOLD_GREEN)[✓]$(RESET)\n"
							@printf "\n"

fclean : 				clean
							rm -f $(NAME)
							$(MAKE) --silent -C $(LIBFT_DIR) fclean
							@printf "%-50b%b" "$(YELLOW)[$(NAME)] :$(RESET)" "\n"
							@printf "%-50b%b" "=> $(BOLD_RED)Clean$(RESET)" $(call PROGRESS_BAR) "$(BOLD_GREEN)[✓]$(RESET)\n"
							$(call SEPARATOR)

re : 					.print_header fclean all $(LIBFT) $(NAME)

.print_header :
							$(call TITLE)
							$(call SEPARATOR)
							$(call BUILD)
							$(call SEPARATOR)


########################################################################################################################
#                                                       COMMANDS                                                       #
########################################################################################################################

$(NAME) 			: 	$(OBJ)
							$(CC) -o $(NAME) $(OBJ) $(LIBFT)

$(OBJ)				:	| $(DIRS)

$(DIRS):
							mkdir -p $@

$(OBJ_DIR)%.o		:	 $(SRC_PATH)%.c $(INC_PATH)so_long.h
							$(CC) $(CFLAGS) -c -o $@ $<

-include $(DEP)

########################################################################################################################
#                                                      DISPLAY                                                         #
########################################################################################################################

MAGENTA			:=		\033[0;95m
YELLOW			:=		\033[1;93m
GREEN 			:=		\033[0;32m
BLUE			:=		\033[0;94m
RED 			:=		\033[0;31m

BOLD_YELLOW 	:=		\e[1;33m
BOLD_PURPLE		:=		\e[1;35m
BOLD_GREEN		:= 		\e[1;32m
BOLD_WHITE		:=		\e[1;37m
BOLD_CYAN 		:= 		\e[1;36m
BOLD_BLUE 		:= 		\e[1;34m
BOLD_RED 		:=		\e[1;31m

RESET 			:=		\033[0m

define	TITLE
						@echo "$(MAGENTA)---------------------------------------------------$(RESET)";
						@echo "$(BOLD_RED)                  _                                 "
						@echo "$(BOLD_RED)  _ __  _   _ ___| |__      _____      ____ _ _ __  "
						@echo "$(BOLD_YELLOW) | '_ \| | | / __| '_ \    / __\ \ /\ / / _' | '_ \ "
						@echo "$(BOLD_GREEN) | |_) | |_| \__ \ | | |   \__  \ V  V / (_| | |_) |"
						@echo "$(BOLD_BLUE) | .__/ \__,_|___/_| |_|$(BOLD_PURPLE) __$(BOLD_BLUE)|___/ \_/\_/ \__,_| .__/ "
						@echo "$(BOLD_BLUE) |_|                   $(BOLD_PURPLE)|_____|$(BOLD_BLUE)               |_|    "
endef

define PROGRESS_BAR

						@echo -n "$(BOLD_YELLOW)["
						@i=1; while [ $$i -le 3 ]; do echo -n "$(BOLD_WHITE)."; sleep 0.2; i=$$((i + 1)); done
						@echo -n "$(BOLD_YELLOW)]"
endef


define	BUILD
						@printf "%-32b%b" "  $(BOLD_CYAN)AUTHOR :$(RESET)" "$(BOLD_WHITE)$(AUTHOR)$(RESET)\n";
						@printf "%-32b%b" "  $(BOLD_CYAN)NAME   :$(RESET)" "$(BOLD_WHITE)$(NAME)$(RESET)\n";
						@printf "%-32b%b" "  $(BOLD_CYAN)CC     :$(RESET)" "$(BOLD_WHITE)$(CC)$(RESET)\n";
						@printf "%-32b%b" "  $(BOLD_CYAN)FLAGS  :$(RESET)" "$(BOLD_WHITE)$(CFLAGS)$(RESET)\n";
endef

define	SEPARATOR
						@printf "\n"
						@echo "$(MAGENTA)---------------------------------------------------$(RESET)";
						@printf "\n"
endef

########################################################################################################################
#                                                       PHONY TARGETS                                                  #
########################################################################################################################

.PHONY : 				all lib bonus clean fclean re
