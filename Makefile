pgm2: main_pgm2.o printGrades_pgm2.o calculateLetterGrade_pgm2.o readGrades_pgm2.o insertToList.o sort.o
	gcc -o pgm2 -Wall sort.o insertToList.o printGrades_pgm2.o calculateLetterGrade_pgm2.o readGrades_pgm2.o main_pgm2.o

printGrades_pgm2.o: printGrades_pgm2.c student_list.h
	gcc -c -Wall printGrades_pgm2.c

calculateLetterGrade_pgm2.o: calculateLetterGrade_pgm2.c student_list.h
	gcc -c -Wall calculateLetterGrade_pgm2.c

readGrades_pgm2.o: readGrades_pgm2.c student_list.h
	gcc -c -Wall readGrades_pgm2.c
	
sort.o: sort.c student_list.h
	gcc -c -Wall sort.c

insertToList.o: insertToList.c student_list.h
	gcc -c -Wall insertToList.c

main_pgm2.o: main_pgm2.c student_list.h
	gcc -c -Wall main_pgm2.c
