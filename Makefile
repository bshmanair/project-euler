CXX := g++
CXXFLAGS := -std=c++17 -Wall -O2

SRC_DIR := problem
BIN_DIR := bin

SRC := $(wildcard $(SRC_DIR)/*.cpp)
EXE := $(patsubst $(SRC_DIR)/%.cpp, $(BIN_DIR)/%, $(SRC))

all: $(EXE)

# Rule to compile: bin/4 from problem/4.cpp
$(BIN_DIR)/%: $(SRC_DIR)/%.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

# Rule: `make 4` builds and runs bin/4
%: $(BIN_DIR)/%
	./$<

# Create bin folder if it doesn't exist
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Clean all binaries
clean:
	rm -rf $(BIN_DIR)
