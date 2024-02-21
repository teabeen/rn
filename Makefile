CC=gcc
SRC=./src/main.c
BIN=./bin/rn


build: 
	mkdir bin
	$(CC) $(SRC) -o $(BIN)
clean:
	rm -rf ./bin
install:
	sudo mv ./bin/rn /usr/local/bin