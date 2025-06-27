# Usage:
#   make FILE=5       → compiles problem/5.cpp to bin/5
#   make run FILE=5   → compiles and runs bin/5
#   make clean        → removes all binaries
#   make list         → shows all *.cpp files in the problem folder

bin_dir := bin
src_dir := problem

all:
	@if [ -z "$(FILE)" ]; then \
		echo "Usage: make FILE=<number>"; \
		exit 1; \
	fi
	@if [ ! -f "$(src_dir)/$(FILE).cpp" ]; then \
		echo "$(src_dir)/$(FILE).cpp does not exist."; \
		exit 1; \
	fi
	@mkdir -p $(bin_dir)
	@g++ -std=c++17 $(src_dir)/$(FILE).cpp -o $(bin_dir)/$(FILE) && echo "Compiled $(src_dir)/$(FILE).cpp -> $(bin_dir)/$(FILE)"

run: all
	@echo "Running $(bin_dir)/$(FILE):"
	@./$(bin_dir)/$(FILE)

clean:
	@rm -rf $(bin_dir)
	@echo "Cleaned $(bin_dir)/"

list:
	@ls $(src_dir)/*.cpp 2>/dev/null || echo "No .cpp files found in $(src_dir)/."
