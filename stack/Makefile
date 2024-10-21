CXX = g++
CXXFLAGS = -std=c++11 -Wall
BUILD_DIR = build

all: $(BUILD_DIR)/main

$(BUILD_DIR)/main: src/main.cpp
	mkdir -p $(BUILD_DIR)       # Create build directory if not exists
	$(CXX) $(CXXFLAGS) -o $@ src/main.cpp

run: all
	./$(BUILD_DIR)/main         # Run the compiled binary

clean:
	rm -rf $(BUILD_DIR)         # Remove the build directory
