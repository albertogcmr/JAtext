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
	
	helpers_clearScreen();
	
	//version = ops_getVersion();
	
	printf("\nWelcome to JAtext application!\n");
	printf("\n------------------------------\n\n");
	//printf("Library version: %d\n\n", version);
	
	printf("Please, select a menu option:\n\n");
	printf("1. subMenu1 \n");
	printf("2. subMenu2 \n");
	printf("3. subMenu3 \n");
	printf("\n");
	printf("0. Exit\n\n");
	
	//option = helpers_getOption();
	option = getchar();
    
	return option;
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
	
	helpers_clearScreen();
	
	printf("\nSub-Menu 1\n");
	printf("\n------------------------\n\n");
		
	printf("\n   1 - Option1 \n");
	printf("\n   2 - Option2 \n");
	printf("\n   3 - Option3 \n");
	printf("\n   4 - Option4 \n\n");
	
	printf("\n Select an option. (0 to exit)\n");
	
	option = helpers_getOption();
	
	return option;
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
	
	helpers_clearScreen();
	
	printf("\nSub-Menu 2\n");
	printf("\n------------------------\n\n");
		
	printf("\n   1 - Option1 \n");
	printf("\n   2 - Option2 \n");
	printf("\n   3 - Option3 \n");
	printf("\n   4 - Option4 \n\n");
	
	printf("\n Select an option. (0 to exit)\n");
	
	option = helpers_getOption();
	
	return option;
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
	
	helpers_clearScreen();
	
	printf("\nSub-Menu 3\n");
	printf("\n------------------------\n\n");
		
	printf("\n   1 - Option1 \n");
	printf("\n   2 - Option2 \n");
	printf("\n   3 - Option3 \n");
	printf("\n   4 - Option4 \n\n");
	
	printf("\n Select an option. (0 to exit)\n");
	
	option = helpers_getOption();
	
	return option;
}

void a_menu(){
    printf("\nMenu: \n");
}