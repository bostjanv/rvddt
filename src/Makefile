
CFLAGS+=-DDEBUGGING_HACKS

CFLAGS+=-Wall -Werror
CXXFLAGS=$(CFLAGS) -std=c++11 -g

CPPFLAGS+=-I.

CSRC=

CCSRC=\
	main.cc\
	memory.cc\
	devices.cc\
	saferead.cc\
	rv32.cc\
	dev/memcard.cc

COBJ=$(CSRC:.c=.o)
CCOBJ=$(CCSRC:.cc=.o)
OBJS=$(COBJ) $(CCOBJ)

.PHONY: all clean world

all: rvddt dis

rvddt: $(OBJS)
	$(LINK.cc) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS) 

dis: dis.o $(OBJS)
	$(LINK.cc) $(LDFLAGS) -o $@ memory.o devices.o rv32.o saferead.o dis.o $(LDLIBS)

clean:
	rm -f *.o rvddt dis

world: clean all
