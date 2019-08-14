.PHONY: test
test:
	g++ -std=c++17 tests/*.cpp -o test && ./test --success

.PHONY: compile
compile:
	g++ -std=c++17 src/*.cpp -o output && ./output