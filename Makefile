# Compiler for native Linux
CC_LINUX = gcc

# Compiler for Windows (MinGW cross-compiler)
CC_WINDOWS = x86_64-w64-mingw32-gcc

# Target executable names
TARGET_LINUX = calcdriver_linux
TARGET_WINDOWS = calcdriver.exe

# Source file
SRC = calcdriver.c

# Compiler flags
CFLAGS = -Wall

# Linker flags
LDFLAGS = -lm

# Rules
all: linux windows

linux: $(SRC)
	@echo "Compiling for Linux..."
	$(CC_LINUX) $(CFLAGS) -o $(TARGET_LINUX) $(SRC) $(LDFLAGS)

windows: $(SRC)
	@echo "Compiling for Windows (cross-compilation)..."
	$(CC_WINDOWS) $(CFLAGS) -o $(TARGET_WINDOWS) $(SRC) $(LDFLAGS)

clean:
	@echo "Cleaning up build files..."
	rm -f $(TARGET_LINUX) $(TARGET_WINDOWS)
