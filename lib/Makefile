CC = gcc
INCLUDE = ../include
CFLAGS = -g -Wall -I$(INCLUDE)
AR = ar
LIBMISC = libyutao.a
SOURCE := $(wildcard *.c)
OBJS := $(patsubst %.c, %.o, $(SOURCE))
all: $(OBJS) libyutao.a

libyutao.a:$(OBJS)
	@$(AR) rv $(LIBMISC) $(OBJS)

clean:
	rm *.o *.a -f
