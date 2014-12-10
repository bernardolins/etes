# October 2006
# Silvana Rossetto
#-------------------------------------------------------------

VERSION = 1.0

ERROR = et_error.c
EXECUTOR = et_executor.c
MAIN = et_main.c
RECORDER = et_recorder.c

ETES = etes

#-------------------------------------------------------------
# the rest of the file should not change
INC = ../inc
SRC = ../src
OBJ = ../obj
BIN = ../bin

CC = gcc -Wall
CFLAGS = -I$(INC) 
RM = rm

# make all
all: clean $(OBJ)/et_error.o $(OBJ)/et_executor.o $(OBJ)/et_recorder.o $(BIN)/et

$(OBJ)/et_error.o: $(SRC)/et_error.c $(INC)/et_error.h
	$(CC) -c $(CFLAGS) -o $@ $(SRC)/et_error.c

$(OBJ)/et_executor.o: $(SRC)/et_executor.c $(INC)/et_executor.h
	$(CC) -c $(CFLAGS) -o $@ $(SRC)/et_executor.c

$(OBJ)/et_recorder.o: $(SRC)/et_recorder.c $(INC)/et_recorder.h
	$(CC) -c $(CFLAGS) -o $@ $(SRC)/et_recorder.c

$(BIN)/et: $(OBJ)/et_error.o $(OBJ)/et_executor.o $(OBJ)/et_recorder.o $(SRC)/et_main.c
	$(CC) $(CFLAGS) -o $@ $(OBJ)/et_error.o $(OBJ)/et_executor.o $(OBJ)/et_recorder.o $(SRC)/et_main.c

# version
version: 
	@echo $(VERSION) "(Draft Version!)" 
# clean
clean:
	$(RM) -rf $(OBJ)/*.o  $(BIN)/*