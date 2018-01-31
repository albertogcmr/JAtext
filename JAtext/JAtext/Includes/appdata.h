#ifndef _APPDATA_H_
#define _APPDATA_H_


 
#include <stdio.h>


typedef struct
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
} tDateTime;

// Used to clear the output screen
void helpers_clearScreen();

// reads a key input from the user.
char helpers_getOption();

// waits until user presses any key
void helpers_pressAnyKey();

// Parses and gets an string manually introduced by the user until it presses the Enter.
void helpers_scanText(char * property, int maxValue);

// Parses and gets an integer value manually introduced by the user.
void helpers_scanInt(int * retValue);

// Parses and gets a datetime in format yyyy/mm/dd hh:mm
void helpers_scanDateTime(tDateTime * retValue);

// Parses and gets an string written on a file until finding a new line split by delimiter.
char * helpers_scanFromFile(FILE * inputFile, char delimiter, int maxValue);

// Copies the content of a file into another file
void helpers_copyFile(FILE * inFile, FILE * outFile);

//Funciones sobre cadenas
int count_alphanum_in_string(char * s);
int count_characters_in_string(char * s);
int count_num_words(char * s);
int negate_integer(int x);

/*
int num_rep_word_in_string(char * word, char * s);
*/

// función copiada de stackoverflow, podemos hacerla más bonita
static char *replaceAll(char *buf, int buflen, const char *orig, const char *replace);

#endif
