/*
 * File:        JAtext_Main.c
 * Description: Contains the main functionality for the application
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "JAtext_Main.h"
#include "JAtext_menu.h"


/* 
 * Function:    appMain_displayMenu
 * Description: Displays the JAtext App main menu
 * Arguments:   ---
 * Returns:     ---
 */
void appMain_displayMenu()
{
	char option;

	option = appMenu_mainMenu();
	
	while (option != '0')
	{
		switch(option)
		{
			case '1':   // display submenu1
				appMenu_subMenu1();
				break;
				
			case '2':   // display submenu2
				appMain_subMenu2();
				break;
				
			case '3':   // display submenu3
				appMain_subMenu3();
				break;
				
			default:
				break;
		}
		option = appMenu_mainMenu();
	}
}


/* 
 * Function:    appMain_subMenu1
 * Description: Displays the available options for sub-menu1
 * Arguments:   ---
 * Returns:     ---
 */
void appMain_subMenu1()
{
	
    char option;
    
    
    option = appMenu_subMenu1();
    
    switch(option)
		{
			
            case '0':   // Return to Main Menu
				appMain_displayMenu();
				break;
                
            case '1':   // Select option 1
				
				break;
				
			case '2':   // Select option 2
				
				break;
				
			case '3':   // Select option 3
				
				break;
			
            case '4':   // Select option 4
				
				break;
                
			default:
				break;
		}
       
       option = appMenu_subMenu1();

}



/* 
 * Function:    appMain_subMenu2
 * Description: Displays the available options for sub-menu2
 * Arguments:   ---
 * Returns:     ---
 */
void appMain_subMenu2()
{
	
    char option;
    
    
    option = appMenu_subMenu2();
    
    switch(option)
		{
			
            case '0':   // Return to Main Menu
				appMain_displayMenu();
				break;
                
            case '1':   // Select option 1
				
				break;
				
			case '2':   // Select option 2
				
				break;
				
			case '3':   // Select option 3
				
				break;
			
            case '4':   // Select option 4
				
				break;
                
			default:
				break;
		}
       
       option = appMenu_subMenu2();

}



/* 
 * Function:    appMain_subMenu3
 * Description: Displays the available options for sub-menu3
 * Arguments:   ---
 * Returns:     ---
 */
void appMain_subMenu3()
{
	
    char option;
    
    
    option = appMenu_subMenu3();
    
    switch(option)
		{
			
            case '0':   // Return to Main Menu
				appMain_displayMenu();
				break;
                
            case '1':   // Select option 1
				
				break;
				
			case '2':   // Select option 2
				
				break;
				
			case '3':   // Select option 3
				
				break;
			
            case '4':   // Select option 4
				
				break;
                
			default:
				break;
		}
       
       option = appMenu_subMenu3();

}
