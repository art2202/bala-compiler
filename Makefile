all: 	
	@clear
	@lex lexica.l
	@yacc -d sintatica.y

	@g++ -o glf y.tab.c src/*.cpp -std=gnu++11
	@./glf < code.bala

test:
	@reset
	@./glf < code.bala debug.cpp | tee test.cpp
	@g++ test.cpp -o test
	@echo "\nExecutando o codigo intermediario\n"
	@./test | tee result.txt