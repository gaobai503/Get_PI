CC = gcc
CPPFLAGS = -Wall -g
RM = erase

SRC_DIR = ./src
INC_DIR = ./inc
OBJ_DIR = ./obj
BIN_DIR = ./bin

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))
BIN_FILES = $(patsubst $(SRC_DIR)/%.c, $(BIN_DIR)/%.exe, $(SRC_FILES))

all : $(BIN_FILES) $(OBJ_FILES)

$(BIN_DIR)/%.exe : $(OBJ_DIR)/%.o
	-$(CC) -o $@ $<

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	-$(CC) -I$(INC_DIR) -c -o $@ $<

clean : 
	cd $(BIN_DIR) && $(RM) *.exe
	cd $(OBJ_DIR) && $(RM) *.o

show_var :
	@echo $(SRC_FILES)
	@echo $(BIN_FILES)

delete : clean
	cd $(SRC_BIN) && $(RM) *.c

.PHONY : delete clean all
