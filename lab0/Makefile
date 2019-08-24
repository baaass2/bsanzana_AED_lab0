prefix=/usr/local
CC = g++

CFLAGS = -g -Wall 
SRC = Programa.cpp Proteina.cpp Cadena.cpp Aminoacido.cpp Atomo.cpp Coordenada.cpp
OBJ = Programa.o Proteina.o Cadena.o Aminoacido.o Atomo.o Coordenada.o
APP = Programa

all: $(OBJ)
	$(CC) $(CFLAGS)-o $(APP) $(OBJ) 

clean:
	$(RM) $(OBJ) $(APP)

install: $(APP)
	install -m 0755 $(APP) $(prefix)/bin

uninstall: $(APP)
	$(RM) $(prefix)/bin/$(APP)

