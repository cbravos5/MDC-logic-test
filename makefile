all: compile1 compile2 compile3 compile4 compile5 compile6 compile7 compile8
	@echo "EVERYTHING SETUP!"

compile1: 1-simple-calculator.c
	@gcc 1-simple-calculator.c -o simple-calculator

compile2: 2-prime-numbers.c
	@gcc 2-prime-numbers.c -o prime-numbers

compile3: 3-factorial.c
	@gcc 3-factorial.c -o factorial

compile4: 4-palindrome.c
	@gcc 4-palindrome.c -o palindrome

compile5: 5-table.c
	@gcc 5-table.c -o table

compile6: 6-vowel-counter.c
	@gcc 6-vowel-counter.c -o vowel-counter

compile7: 7-grade-average.c
	@gcc 7-grade-average.c -o grade-average

compile8: 8-interest-calculation.c
	@gcc 8-interest-calculation.c -o interest-calculation -lm