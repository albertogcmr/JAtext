/*
 * File:       apdata.c
 * Description: Contains some auxilliar common functions.
 * 
 * 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "appdata.h"

/*
 * Function:    helpers_clearScreen
 * Description: Used to clear the output screen
 * Arguments:   ---
 * Returns:     ---
 */
void helpers_clearScreen()
{
	// Windows users: please, use system("cls");
	
    //system("cls");
	
	// Linux users: please, comment previous line and use system("clear");
	// system("clear");
}

/*
 * Function:    helpers_getOption
 * Description: reads a key input from the user.
 * Arguments:   ---
 * Returns:     The character pressed by the user
 */
char helpers_getOption()
{
	char retValue;
	retValue = getchar();
    printf("Option = %c", retValue);
	fflush(stdin);
	return retValue;
}


/*
 * Function:    helpers_pressAnyKey
 * Description: waits until user presses any key
 * Arguments:   ---
 * Returns:     ---
 */
void helpers_pressAnyKey()
{
	printf("\nPress any key to continue.\n");
	getchar();
	fflush(stdin);
}

/*
 * Function:    helpers_scanText
 * Description: Parses and gets an string manually introduced by the user until it presses the Enter.
 * Arguments:   property: Upon return, the pointer to the captured string
 * 			    maxValue: The maximum string length to parse.
 * Returns:     ---
 */
void helpers_scanText(char * property, int maxValue)
{
	int i;
	char c;
	
	i = 0;
	c = getchar();
	while ((i < maxValue - 1) && (c != '\n'))
	{
		// Concatenate the characters until 'Enter' or string maximum length
		property[i] = c;
		i++;
		c = getchar();
	}
	
	fflush(stdin);
}

/*
 * Function:    helpers_scanInt
 * Description: Parses and gets an integer value manually introduced by the user.
 * Arguments:   retValue: Upon return, the captured integer value
 * Returns:     ---
 */
void helpers_scanInt(int * retValue)
{
	scanf("%d", retValue);
	fflush(stdin);
}


/*
 * Function:    helpers_scanDateTime
 * Description: Parses and gets a datetime in format yyyy/mm/dd hh:mm
 * Arguments:   retValue: Upon return, the captured datetime
 * Returns:     ---
 */
void helpers_scanDateTime(tDateTime * retValue)
{
	scanf("%d/%d/%d %d:%d", &retValue->year, &retValue->month, &retValue->day, &retValue->hour, &retValue->minute);
	fflush(stdin);
}


/*
 * Function:    helpers_scanFromFile
 * Description: Parses and gets an string written on a file until finding a new line split by delimiter.
 * Arguments:   inputFile: The file pointer
 * 				delimiter: The delimeter to split the string
 * 			    maxValue: The maximum string length to parse.
 * Returns:     The pointer to the captured string
 */
char * helpers_scanFromFile(FILE * inputFile, char delimiter, int maxValue)
{
	int i;
	char c;
	char * retValue;
	
	retValue = (char *)malloc(maxValue);
	memset(retValue, 0, maxValue);
	
	i = 0;
	c = fgetc(inputFile);
	
	while ((i < maxValue) && (c != delimiter) && (c != '\n') && (c != EOF))
	{
		// Concatenate the characters until finding a new line, string maximum length or no more data in the file
		retValue[i] = c;
		i++;
		c = fgetc(inputFile);
	}
	
	return retValue;
}


/*
 * Function:    helpers_copyFile
 * Description: Copies the content of a file into another file
 * Arguments:   inFile: The file with the contents to copy
 *              outFile: The destination file pointer
 * Returns:     ---
 */
void helpers_copyFile(FILE * inFile, FILE * outFile)
{
	char c;
	
	c = fgetc(inFile);
	while (c != EOF)
	{
		fputc(c, outFile);
		c = fgetc(inFile);
	}
}


int count_alphanum_in_string(char * s){
	// FUNCIONA
	// Cuenta el número de caracteres alfanuméricos en el string 
	// hasta la llegada del fin de cadena '\0' 
	int res = 0;
	int i; 
	for(i=0; s[i]!='\0'; i++){
		if(isalnum(s[i])){
			res++;
		}
	}
	return res;	
}

int count_characters_in_string(char * s){
	// FUNCIONA
	// Cuenta el número de caracteres en el string hasta la llegada 
	// del fin de cadena '\0'
	int res = 0;
	int i; 
	for(i=0; s[i]!='\0'; i++){
			res++;			
	}
	return res;	
}	

int count_num_words(char * s){
	// FUNCIONA
	// cuenta numero de palabras = caracteres alfanuméricos conexos
	// "asdf asdf,asdf, asdf" -> 4
	int res = 0;
	int last_char_is_word = 0; // 0 si venimos de no carácter, 1 si venimos de un caracter alfanuméricos
	int i;
	for(i = 0; s[i]!= '\0'; i++){ // recorremos el string
		if( isalnum(s[i]) && last_char_is_word == 0 ){ // venimos de no palabra y encontramos caracter alfanumérico
			res++;
			last_char_is_word = 1; // last_char_is_word -> 1
		}
		else if ( !isalnum(s[i]) ){ 
			last_char_is_word = 0;
		}
	}
	return res;
}
int negate_integer(int x){
	// FUNCIONA
	// operador negación 0->1, 1->0
	int res;
	if(x == 0) res = 1;
	else res = 0;
	return res;
}
/*
int num_rep_word_in_string(char * word, char * s){
	int res = 0;
	//char * p_word = word;
	//char * p_string = s;
	
	return res;
}
*/

// función copiada de stackoverflow, podemos hacerla más bonita
static char *replaceAll(char *buf, int buflen, const char *orig, const char *replace) {
    if (!buf || !*buf || !orig || !*orig || !replace) return buf;

    int olen = strlen(orig), rlen = strlen(replace);

    int max = strlen(buf) + 1;
    if (olen < rlen) {
        max = rlen * ((max / olen) + 1) + 1;
    }
    char *tmpbuf = malloc(max);
    char *bp = buf, *tp = tmpbuf, *sp;

    while (NULL != (sp = strstr(bp, orig))) {
        int f = sp - bp;
        memmove(tp, bp, f);
        memmove(tp + f, replace, rlen);
        tp += f + rlen;
        bp += f + olen;  // no recursive replacement
    }
    strcpy(tp, bp);
    strncpy(buf, tmpbuf, buflen);
    free(tmpbuf);
    return buf;
}