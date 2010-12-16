TOPDIR=..
INCS=$(wildcard *.inc)
CC=wml $(patsubst %,-i%,$(INCS))
SRCS=$(wildcard *.wml) $(wildcard */*.wml)
OBJS=$(patsubst %,$(TOPDIR)/%,$(subst .wml,.html,$(SRCS)))

all: $(OBJS)

# HTML generation

$(TOPDIR)/%.html: %.wml $(INCS)
	$(CC) -o $@ $<

clean:
	rm -f $(OBJS)

.PHONY: clean