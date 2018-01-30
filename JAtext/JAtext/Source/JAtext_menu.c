/*
 * File:        JAtext_menu.c
 * Description: Contains the user interface functionality for the JAtext application
 * 				Basically, it implements the different menus that will be displayed on the screen
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "JAtext_menu.h"
#include "appdata.h"


/* 
 * Function:    appMenu_mainMenu
 * Description: Displays the JAtext App main menu with the available operations
 * Arguments:   ---
 * Returns:     The option the user selected.
 */
char appMenu_mainMenu()
{
	//int version;
	char option;  
    
    appPrint_mainMenu();
	
	option = helpers_getOption();
    
	return option;
}

void appPrint_mainMenu(){
    
    helpers_clearScreen();	
	//version = ops_getVersion();	
	printf("\nMenu principal:\n");
	printf("==============\n\n");
    
	printf("Please, select a menu option:\n\n");
	printf("(1) Cargar archivo\n"); // no tiene submenu, pide nombre de archivo
	printf("(2) Datos y metadatos del archivo\n"); //appMenu_subMenu1()
	printf("(3) Edicion del archivo de texto\n"); //appMenu_subMenu2()
	printf("(4) Operaciones sobre archivo\n"); //appMenu_subMenu3()
	printf("\n");
	printf("(0) Salir\n\n");
    }

/*
 * Function:    appMenu_subMenu1
 * Description: Display the menu where the user selects an option
 * Arguments:   ---
 * Returns:     The selected option by the user.
 */
 
 
char appMenu_subMenu1()
{
	char option;
    appPrint_subMenu1();		
	option = helpers_getOption();
	
	return option;
}

void appPrint_subMenu1(){
    helpers_clearScreen();
	
	printf("\nSub-Menu 1: Datos y metadatos del archivo:\n");
	printf("\n------------------------------------------\n\n");
		
	printf("(1) Número de caracteres/Palabras/Lineas \n");
	printf("(2) Número de vocales/Consonantes\n");
	printf("(3) Número apariciones de una palabra \n");
	printf("(0) Salir \n\n");
	
	printf("\n Select an option. (0 to exit)\n");
    }


/*
 * Function:    appMenu_subMenu2
 * Description: Display the menu where the user selects an option
 * Arguments:   ---
 * Returns:     The selected option by the user.
 */
 
 
char appMenu_subMenu2()
{
	char option;
    appPrint_subMenu2();	
	
	option = helpers_getOption();
	
	return option;
}
void appPrint_subMenu2(){
    helpers_clearScreen();
	
	printf("\nSub-Menu 2: Edición del archivo de texto:\n");
	printf("\n-----------------------------------------\n\n");
		
	printf("(1) Muestra texto\n");
	printf("(2) Sustituir palabra\n");
	printf("(3) Añadir linea al final del documento\n");
	printf("(4) Insertar linea en posición X\n");
	printf("(5) Eliminar linea\n");
	printf("(0) Salir\n\n");
	
	printf("\n Select an option. (0 to exit)\n");
    }


/*
 * Function:    appMenu_subMenu3
 * Description: Display the menu where the user selects an option
 * Arguments:   ---
 * Returns:     The selected option by the user.
 */
 
 
char appMenu_subMenu3()
{
	char option;
	
	appPrint_subMenu3();
	
	option = helpers_getOption();
	
	return option;
}

void appPrint_subMenu3(){
    helpers_clearScreen();
	
	printf("\nSub-Menu 3: Operaciones sobre archivos:\n");
	printf("\n------------------------\n\n");
		
	printf("(1) Guardar archivo\n");
	printf("(2) Renombrar archivo\n");
	printf("(3) Copiar archivo\n");
	printf("(0) Salir \n\n");
	
	printf("\n Select an option. (0 to exit)\n");
    }

void a_menu(){
    printf("\nMenu: \n");
}