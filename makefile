TARGET = $(BINDIR)/main


OBJS   = $(OBJDIR)/main.o
		

INCDIR = include
BINDIR = .
OBJDIR = obj
SRCDIR = src
CFLAGS = -Wall -Werror -I$(INCDIR) -g


$(TARGET): $(OBJS)
	mkdir -p $(BINDIR)
	g++ $(CFLAGS) $(OBJS) -o $(TARGET)


$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	mkdir -p $(OBJDIR)
	g++ -c -MD $(CFLAGS) $< -o $@


$(OBJDIR)/main.o: main.cpp
	mkdir -p $(OBJDIR)
	g++ -c -MD $(CFLAGS) $< -o $@

-include $(OBJDIR)/*.d
.PHONY: clean
clean: 
	rm -r $(OBJDIR) $(TARGET)