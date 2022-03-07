all: 	
	@clear
	@lex lexica.l
	@yacc -d sintatica.y
	@g++ -o glf y.tab.c -ll

	@./glf < code.bala

test:
	@reset
	@./glf < code.bala 2> debug.cpp | tee test.cpp
	@g++ test.cpp -o test
	@echo "\nExecutando o codigo intermediario\n"
	@./test | tee result.txt