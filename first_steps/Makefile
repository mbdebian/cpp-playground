SOURCES=$(wildcard *.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
DEPS=$(SOURCES:.cpp=.d)
BINS=$(SOURCES:.cpp=)

CFLAGS+=-MMD
CXXFLAGS+=-std=gnu++11

all: $(BINS)

.PHONY: clean

clean:
	    $(RM) $(OBJECTS) $(DEPS) $(BINS)

-include $(DEPS)
