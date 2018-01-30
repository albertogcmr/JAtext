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
	
	printf("\nSub-Menu 1\n");
	printf("\n------------------------\n\n");
		
	printf("\n   1 - Option1 \n");
	printf("\n   2 - Option2 \n");
	printf("\n   3 - Option3 \n");
	printf("\n   4 - Option4 \n\n");
	
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
	
	printf("\nSub-Menu 2\n");
	printf("\n------------------------\n\n");
		
	printf("\n   1 - Option1 \n");
	printf("\n   2 - Option2 \n");
	printf("\n   3 - Option3 \n");
	printf("\n   4 - Option4 \n\n");
	
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
	
	printf("\nSub-Menu 3\n");
	printf("\n------------------------\n\n");
		
	printf("\n   1 - Option1 \n");
	printf("\n   2 - Option2 \n");
	printf("\n   3 - Option3 \n");
	printf("\n   4 - Option4 \n\n");
	
	printf("\n Select an option. (0 to exit)\n");
    }

void a_menu(){
    printf("\nMenu: \n");
}