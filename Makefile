.PHONY: test
test:
	docker-compose run gcc g++ -std=c++17 tests/*.cpp -o test && docker-compose run gcc ./test --success

.PHONY: compile
compile:
	docker-compose run gcc g++ -std=c++17 src/*.cpp -o output && docker-compose run gcc ./output