all: compile1 compile2 compile3 compile4 compile5 compile6 compile7 compile8
	@echo "EVERYTHING SETUP!"

compile1: 1-simpleCalculator.c
	@gcc 1-simpleCalculator.c -o simpleCalculator

compile2: 2-primeNumbers.c
	@gcc 2-primeNumbers.c -o primeNumbers

compile3: 3-factorial.c
	@gcc 3-factorial.c -o factorial

compile4: 4-palindrome.c
	@gcc 4-palindrome.c -o palindrome

compile5: 5-table.c
	@gcc 5-table.c -o table

compile6: 6-vowelCounter.c
	@gcc 6-vowelCounter.c -o vowelCounter

compile7: 7-gradeAverage.c
	@gcc 7-gradeAverage.c -o gradeAverage

compile8: 8-interestCalculation.c
	@gcc 8-interestCalculation.c -o interestCalculation -lm