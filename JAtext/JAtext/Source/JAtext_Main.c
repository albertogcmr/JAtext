/*
 * File:        JAtext_Main.c
 * Description: Contains the main functionality for the application
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "JAtext_Main.h"
#include "JAtext_menu.h"
#include "JAtext_operations.h"


/* 
 * Function:    appMain_displayMenu
 * Description: Displays the JAtext App main menu
 * Arguments:   ---
 * Returns:     ---
 */
void appMain_displayMenu()
{
	char option;
    
    do
    {
        appPrint_mainMenu();
        option = helpers_getOption();
        switch(option)
		{
			case '1':   // display carga archivo
				option_load_file();
				break;
                
            case '2':   // display submenu1
				//appMenu_subMenu1();
                appMain_subMenu1();
				break;
				
			case '3':   // display submenu2
				appMain_subMenu2();
				break;
				
			case '4':   // display submenu3
				appMain_subMenu3();
				break;
				
			default:
				break;
		}
    } while(option != '0');
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
    do
    {
        appPrint_subMenu1();
        option = helpers_getOption();
        switch(option) // hacer un do-while
		{			
            /*case '0':   // Return to Main Menu
				appMain_displayMenu();
				break;*/
                
            case '1':   // Select option 1
				option_num_char_words_lines();
				break;
				
			case '2':   // Select option 2
				option_num_vow_consonants();
				break;
				
			case '3':   // Select option 3
				option_num_rep_word();
				break;
                
			default:
                option_exit_submenu();
				break;
		} 
    
    } while(option != '0');
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
    do
    {    
        appPrint_subMenu2();
        option = helpers_getOption();
        switch(option) // hacer un do-while
		{
			
            case '0':   // Return to Main Menu
				appMain_displayMenu();
				break;
                
            case '1':   // Select option 1
				option_show_text_file();
				break;
				
			case '2':   // Select option 2
				option_sust_word();
				break;
				
			case '3':   // Select option 3
				option_add_line_end_file();
				break;
			
            case '4':   // Select option 4
				option_insert_line_index_file();
				break;
            
            case '5':   // Select option 4
				option_del_line();
				break; 
               
			default:
                option_exit_submenu();
				break;
		}
        
    } while(option != '0');
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
    
    do
    {
        appPrint_subMenu3();
        option = helpers_getOption();
        switch(option) // hacer un do-while
		{			
            case '0':   // Return to Main Menu
				appMain_displayMenu();
				break;
                
            case '1':   // Select option 1
				option_save_file();
				break;
				
			case '2':   // Select option 2
				option_renown_file();
				break;
				
			case '3':   // Select option 3
				option_copy_file();
				break;
			
			default:
                option_exit_submenu();
				break;
		}  

    } while(option != '0');

    
         
}
