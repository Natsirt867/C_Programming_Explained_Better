CC=gcc
CFLAGS=-g -Wall
SRCPATH=src/
BINPATH=bin/
OBJPATH=obj/
SRCS=$(wildcard $(SRCPATH)*.c)
OBJS=$(patsubst $(SRCPATH)%.c, $(OBJPATH)%.o, $(SRCS))
BINS=$(patsubst $(SRCPATH)%.c, $(BINPATH)%, $(SRCS))

.PHONY: all, run
.PRECIOUS: $(OBJS)

# Build all binaries
all:$(BINS) 

# Rule to build each binary
$(BINPATH)%: $(OBJPATH)%.o
	$(CC) $(CFLAGS) $< -o $@

# Rule to build object files
$(OBJPATH)%.o: $(SRCPATH)%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Add run functionality
run:
	@./run.sh $(filter-out run,$(MAKECMDGOALS))

# Special target to handle arguments
%:
	@:

