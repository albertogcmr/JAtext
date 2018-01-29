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
 * Description: Displays the UOCCar App application main menu with the available operations
 * Arguments:   ---
 * Returns:     The option the user selected.
 */
char appMenu_mainMenu()
{
	//int version;
	char option;  // hay un fallo xq no despliega el submenú 1 
    
    appPrint_mainMenu();
	
	option = helpers_getOption();
	//option = getchar(); Aqui estaba el problema del submenú 1 (no se le hacía fflush al getchar y te daba cosas raras)
    
	return option;
}

void appPrint_mainMenu(){
    
    helpers_clearScreen();	
	//version = ops_getVersion();	
	printf("\nWelcome to JAtext application! Version de Alberto\n");
	printf("\n------------------------------\n\n");
    
	printf("Please, select a menu option:\n\n");
	printf("1. Carga un archivo \n");
	printf("2. subMenu2 \n");
	printf("3. subMenu3 \n");
	printf("\n");
	printf("0. Exit\n\n");
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