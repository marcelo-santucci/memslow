CC=gcc
CFLAGS= -g -Wall 
BIN=porfila porcolumna

all: $(BIN)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

timing: $(BIN)
	time ./porfila
	time ./porcolumna

clean:
	$(RM) -rf $(BIN) *.dSYM