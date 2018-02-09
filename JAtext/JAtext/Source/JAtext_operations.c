/*
 * File:        JAtext_operations.c
 * Description: Contains the functios for text management functionality for the JAtext application
 * 				Basically, it implements the different operations to modify text files.
 */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void option_load_file()
{
    printf("\nEstamos en la opción:(1) Cargar archivo\n");
}

void option_num_char_words_lines()
{
    printf("\nEstamos en la opción:(2.1) Número de caracteres/Palabras/Lineas\n");

}
void option_num_vow_consonants()
{
    printf("\nEstamos en la opción:(2.2) Número de vocales/Consonantes\n");

}
void option_num_rep_word()
{
    printf("\nEstamos en la opción:(2.3) Número apariciones de una palabra\n");

}

void option_show_text_file()
{
    printf("\nEstamos en la opción: (3.1) Muestra texto\n");

}
void option_sust_word()
{
    printf("\nEstamos en la opción: (3.2) Sustituir palabra\n");

}
void option_add_line_end_file()
{
    printf("\nEstamos en la opción: (3.3) Añadir linea al final del documento\n");

}
void option_insert_line_index_file()
{
    printf("\nEstamos en la opción: (3.4) Insertar linea en posición X\n");

}
void option_del_line()
{
    printf("\nEstamos en la opción: (3.5) Eliminar linea\n");

}

void option_save_file()
{
    printf("\nEstamos en la opción: (4.1) Guardar archivo\n");

}
void option_renown_file()
{
    printf("\nEstamos en la opción: (4.2) Renombrar archivo\n");

}
void option_copy_file()
{
    printf("\nEstamos en la opción: (4.3) Copiar archivo\n");

}

void option_exit_submenu()
{
    printf("\nEstamos en la opción: (2.0, 3.0, 4.0) Salir de submenu\n");
    //getchar(); // aqui iría la funcion que captura el nombre del archivo y obtenemos el puntero a FILE
}