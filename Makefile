CXX = g++
CXXFLAGS = -std=c++20 -Wall -g -pthread # Añadido -pthread
LDFLAGS = -pthread # Añadido -pthread

TARGET = main
SRCS = main.cpp \
	   DemoRestaurante.cpp \
	   restaurante/persona.cpp \
	   restaurante/cliente.cpp \
	   restaurante/mozo.cpp \
	   restaurante/plato.cpp \
	   restaurante/pedido.cpp \
	   restaurante/mesa.cpp


OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean