/*
 * File:        JAtext_operations.c
 * Description: Contains the functios for text management functionality for the JAtext application
 * 				Basically, it implements the different operations to modify text files.
 */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_TAM 254
#define MAX_FILENAME_TAM 64


FILE * option_load_file(FILE * fp)
{
    char filename [MAX_FILENAME_TAM];    
    //char buff[MAX_LINE_TAM];  
    
    printf("\nEscribe nombre de archivo origen: ");
    scanf("%s", filename);
    printf("\nNombre elegido: %s", filename);
    
    fp = fopen(filename, "r+"); // r+ abre archivo existente para lectura y modificación
    if ( fp == NULL ) 
    {
        printf("\nError en archivo");
    }
    
    //prueba
    //fgets(buff, MAX_LINE_TAM, (FILE*)fp);
    //printf("\n[1] : %s", buff);
    
    return fp;
}

void option_num_char_words_lines(FILE * fp)
{
    char buff[MAX_LINE_TAM]; 
    int num_char = 0;
    int num_words = 0;
    int num_lines = 0;
    
    printf("\nEstamos en la opción:(2.1) Número de caracteres/Palabras/Lineas\n");
    
    while(fgets(buff, MAX_LINE_TAM, (FILE*)fp)) // recorre el archivo fila a fila mientras no encuentre EOF
    {
        //printf("\n[%d] : %s", indice, buff);
        num_char += strlen(buff);
        num_words += count_num_words(buff);
        num_lines++;
    }
    
    rewind(fp); // reinicia el puntero al principio del archivo
    printf("\nNúmero de Caracteres/Palabras/Lineas\n");
    printf("\nCaracteres = %d", num_char);
    printf("\nPalabras = %d", num_words);
    printf("\nLineas = %d", num_lines);

}

void option_num_vow_consonants(FILE * fp)
{
    char buff[MAX_LINE_TAM]; 
    int num_vocales = 0;
    int num_consonantes = 0;
    printf("\nEstamos en la opción:(2.2) Número de vocales/Consonantes\n");
    
    while(fgets(buff, MAX_LINE_TAM, (FILE*)fp)) // recorre el archivo fila a fila mientras no encuentre EOF
    {
        //printf("\n[%d] : %s", indice, buff);
        num_vocales += count_vowls_in_string(buff);
        num_consonantes += count_consonants_in_string(buff);
    }
    
    rewind(fp); // reinicia el puntero al principio del archivo
    printf("\nNúmero de vocales/Consonantes\n");
    printf("\nVocales = %d", num_vocales);
    printf("\nConsonantes = %d", num_consonantes);

}
void option_num_rep_word(FILE * fp)
{
    printf("\nEstamos en la opción:(2.3) Número apariciones de una palabra\n");

}

void option_show_text_file(FILE * fp)
{
    char buff[MAX_LINE_TAM]; 
    int indice = 0;
    
    printf("\nEstamos en la opción: (3.1) Muestra texto\n");
    
    while(fgets(buff, MAX_LINE_TAM, (FILE*)fp)) // recorre el archivo fila a fila mientras no encuentre EOF
    {
        printf("\n[%d] : %s", indice, buff);
        indice++;
    }
    
    rewind(fp); // reinicia el puntero al principio del archivo
}

void option_sust_word(FILE * fp)
{
    printf("\nEstamos en la opción: (3.2) Sustituir palabra\n");

}
void option_add_line_end_file(FILE * fp)
{
    printf("\nEstamos en la opción: (3.3) Añadir linea al final del documento\n");

}
void option_insert_line_index_file(FILE * fp)
{
    printf("\nEstamos en la opción: (3.4) Insertar linea en posición X\n");

}

// No funciona correctamente todavía, el archivo original no se borra completamente si no que lo sobreescribe dejando restos
void option_del_line(FILE * fp)
{
    char buff[MAX_LINE_TAM]; 
    int indice = 0;
    int linea = 0; 
    FILE * fpaux = NULL;
    char * filenameaux = "temp.txt";
    int ret;
    
    printf("\nEstamos en la opción: (3.5) Eliminar linea\n");
    
    // obtenemos el indice de la linea
    printf("\nEscribe el indice de la linea a eliminar (0, 1, 2, etc): ");
    scanf("%d", &linea);
    printf("\nHas elegido linea = %d", linea);

    
    // abrimos archivo auxiliar
    fpaux = fopen(filenameaux, "w+"); // crea archivo vacio para escribir en el
    if ( fpaux == NULL ) 
    {
        printf("\nError en archivo auxilar");
    }
    printf("\nAbierto el archivo auxilar");
    // copiamos el archivo fp en fpaux EXCEPTO la linea elegida
    while(fgets(buff, MAX_LINE_TAM, (FILE*)fp)) // recorre el archivo fila a fila mientras no encuentre EOF
    {
        if( linea != indice ) // copia string en archivo aux
        {
            fputs(buff, fpaux);
        }
        indice++;
        //printf("\n[%d] : %s", indice, buff);
        //indice++;
    }
    rewind(fp); // reinicia el puntero al principio del archivo
    rewind(fpaux); // reinicia el puntero al principio del archivo

    // copiamos el archivo fpaux en fp
    while(fgets(buff, MAX_LINE_TAM, (FILE*)fpaux)) // recorre el archivo fila a fila mientras no encuentre EOF
    {
        fputs(buff, fp);
    }
    rewind(fp); // reinicia el puntero al principio del archivo
    rewind(fpaux); // reinicia el puntero al principio del archivo
    
    //liberamos la memoria de fpaux y borramos archivo
    fclose(fpaux);
    printf("\nHAsta aquí bien");
    ret = remove(filenameaux);

    if(ret == 0) 
    {
        printf("File aux deleted successfully");
    }   else 
    {
        printf("Error: unable to delete the file aux");
    }
}

void option_save_file(FILE * fp)
{
    printf("\nEstamos en la opción: (4.1) Guardar archivo\n");

}
void option_renown_file(FILE * fp)
{
    printf("\nEstamos en la opción: (4.2) Renombrar archivo\n");

}
void option_copy_file(FILE * fp)
{
    printf("\nEstamos en la opción: (4.3) Copiar archivo\n");

}

void option_exit_submenu()
{
    printf("\nEstamos en la opción: (2.0, 3.0, 4.0) Salir de submenu\n");
    //getchar(); // aqui iría la funcion que captura el nombre del archivo y obtenemos el puntero a FILE
}