#
# Simple automated C Makefile to make all .c files in dir
#
CFLAGS  = -Wall -g
# -Werror -std=c99 -ggdb -O0

CC          = gcc

# Should be equivalent to your list of C files
SRCS  	= $(wildcard *.c)

# Create list of one program per .c file
PROGS 	= $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

clean:
	rm -f $(PROGS)
	rm -f -r *.dSYM

