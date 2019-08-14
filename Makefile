.PHONY: test
test:
	g++ -std=c++17 TestKnowledgeTree/*.cpp -o test && ./test --success

.PHONY: compile
compile:
	g++ -std=c++17 KnowledgeTree/*.cpp -o output && ./output