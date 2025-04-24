# Compiler settings
CXX := g++
CXXFLAGS := -std=c++11 -Wall -Wextra -Werror
INCLUDES := -Iinclude -IC:/raylib/raylib/src  # <-- Update this
LDFLAGS := -Llib -lraylib -lopengl32 -lgdi32 -lwinmm

# Source files
SRC_DIR := src
SRCS := $(wildcard $(SRC_DIR)/*.cpp) \
        $(wildcard $(SRC_DIR)/entities/*.cpp) \
        $(wildcard $(SRC_DIR)/scenes/*.cpp) \
        # $(wildcard $(SRC_DIR)/entities/enemies/*.cpp) \
        # $(wildcard $(SRC_DIR)/scenes/*.cpp)

# Rest of the Makefile remains the same...

# Object files
OBJ_DIR := obj
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))

# Output executable
TARGET := game.exe

# Build rules
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $^ -o $@ $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@if not exist $(subst /,\,$(@D)) mkdir $(subst /,\,$(@D))
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR) $(TARGET)

.PHONY: all clean