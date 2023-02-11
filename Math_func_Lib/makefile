TARGET: exe
exe:main.o libcalc.a
	gcc main.o -o exe -L . libcalc.a -lm
common_math.o:common_math/common_math.c
	gcc -c -I common_math common_math/common_math.c -o common_math/common_math.o
calc.o:calc/calc.c
	gcc -c -I calc calc/calc.c -o calc.o
libcalc.a:common_math/common_math.c calc/calc.c 
	ar rs libcalc.a common_math/common_math.o calc/calc.o 
main.o:main.c
	gcc -c -I common_math -I calc main.c -o main.o
clean:
	rm common_math/common_math.o
	rm calc/calc.o
	rm main.o
	rm libcalc.a
	rm exe
