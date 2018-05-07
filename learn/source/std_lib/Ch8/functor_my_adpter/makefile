BIN = FA
FILES = main
SRC = $(addsuffix .cpp,$(FILES))
OBJ = $(addsuffix .o,$(FILES))
$(BIN):$(OBJ)
	g++ -o $(BIN) -g $(OBJ)
$(OBJ):$(SRC)
	cc -c -g $(SRC)
.PHONY:clean
clean:
	-rm -f $(OBJ) $(BIN)