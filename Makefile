COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run:	$(PROGRAM)
	./$(PROGRAM)

$(PROGRAM):	main.cpp Quiz.h Quiz.cpp printResult.h printResult.cpp
	$(COMPILER) $(OPTIONS) main.cpp Quiz.cpp printResult.cpp -o $(PROGRAM)

clean:
	rm main.out
