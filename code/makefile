CXX := g++
CPP_SOURCES := $(wildcard src/*.cpp)
OBJ_DIR := obj
BIN_DIR := bin
EXECUTABLE := $(BIN_DIR)/main
CPP_OBJECTS := $(addprefix $(OBJ_DIR)/, $(notdir $(CPP_SOURCES:.cpp=.o)))

all: $(OBJ_DIR) $(BIN_DIR) $(EXECUTABLE)

$(EXECUTABLE): $(CPP_OBJECTS)
	$(CXX) -o $@ $^

$(OBJ_DIR)/%.o: src/%.cpp
	$(CXX) -g -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

run: $(EXECUTABLE)
	@./$(EXECUTABLE)

clean:
	rm -f $(CPP_OBJECTS) $(EXECUTABLE)

fresh: clean all

freshrun: fresh run

valgrind_run: 
	valgrind --leak-check=full ./$(EXECUTABLE)