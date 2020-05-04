pgm2: main.o printGrades.o calculateLetterGrade.o readGrades.o insertToList.o sort.o
	gcc -o pgm2 -Wall sort.o insertToList.o printGrades.o calculateLetterGrade.o readGrades.o main.o

printGrades.o: printGrades.c student_arr.h
	gcc -c -Wall printGrades.c

calculateLetterGrade.o: calculateLetterGrade.c student_arr.h
	gcc -c -Wall calculateLetterGrade.c

readGrades.o: readGrades.c student_arr.h
	gcc -c -Wall readGrades.c
	
sort.o: sort.c student_arr.h
	gcc -c -Wall sort.c

insertToList.o: insertToList.c student_arr.h
	gcc -c -Wall insertToList.c

main.o: main.c student_arr.h
	gcc -c -Wall main.c
