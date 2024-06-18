TARGET = $(BINDIR)/main


OBJS   = $(OBJDIR)/main.o $(OBJDIR)/Fabrica.o $(OBJDIR)/Cliente.o $(OBJDIR)/ControladorUsuario.o $(OBJDIR)/DTFecha.o $(OBJDIR)/DTCliente.o \
		 $(OBJDIR)/Usuario.o $(OBJDIR)/DTPromocion.o $(OBJDIR)/DTUsuario.o $(OBJDIR)/DTVendedor.o $(OBJDIR)/Vendedor.o $(OBJDIR)/Producto.o $(OBJDIR)/ControladorProducto.o\
		 $(OBJDIR)/DTProducto.o $(OBJDIR)/DTProductoInfo.o $(OBJDIR)/Promocion.o $(OBJDIR)/Comentario.o $(OBJDIR)/DTComentario.o 

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