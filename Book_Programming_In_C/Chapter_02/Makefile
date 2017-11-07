#
# Simple automated C Makefile to make all .c files in dir
#
CFLAGS 	= -Wall

# Should be equivalent to your list of C files
SRCS  	= $(wildcard *.c)

# Create list of one program per .c file
PROGS 	= $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

clean:
	rm --force $(PROGS)


