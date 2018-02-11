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
    FILE * fp = NULL;
    
    do
    {
        appPrint_mainMenu();
        option = helpers_getOption();
        switch(option)
		{
			case '1':   // display carga archivo
				fp = option_load_file(fp);     // FUNCIONA OK, fp es el puntero al archivo      
				break;
                
            case '2':   // display submenu1
				//appMenu_subMenu1();
                appMain_displaysubMenu_metadatos(fp);
				break;
				
			case '3':   // display submenu2
				appMain_displaysubMenu_edicion(fp);
				break;
				
			case '4':   // display submenu3
				appMain_displaysubMenu_archivos(fp);
				break;
				
			default:
				break;
		}
    } while(option != '0');
}


/* 
 * Function:    appMain_displaysubMenu_metadatos
 * Description: Displays the available options for sub-menu1
 * Arguments:   ---
 * Returns:     ---
 */
void appMain_displaysubMenu_metadatos(FILE * fp)
{	
    char option;    
    do
    {
        appPrint_subMenu_metadatos();
        option = helpers_getOption();
        switch(option) // hacer un do-while
		{			
            case '0':   // Return to Main Menu
				option_exit_submenu();
				break;
                
            case '1':   // Select option 1
				option_num_char_words_lines(fp);
				break;
				
			case '2':   // Select option 2
				option_num_vow_consonants(fp);
				break;
				
			case '3':   // Select option 3
				option_num_rep_word(fp);
				break;
                
			default:                
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
void appMain_displaysubMenu_edicion(FILE * fp)
{	
    char option;    
    do
    {    
        appPrint_subMenu_edicion();
        option = helpers_getOption();
        switch(option) // hacer un do-while
		{
			
            case '0':   // Return to Main Menu
				option_exit_submenu();
				break;
                
            case '1':   // Select option 1
				option_show_text_file(fp);
				break;
				
			case '2':   // Select option 2
				option_sust_word(fp);
				break;
				
			case '3':   // Select option 3
				option_add_line_end_file(fp);
				break;
			
            case '4':   // Select option 4
				option_insert_line_index_file(fp);
				break;
            
            case '5':   // Select option 4
				option_del_line(fp);
				break; 
               
			default:
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
void appMain_displaysubMenu_archivos(FILE * fp)
{	
    char option; 
    
    do
    {
        appPrint_subMenu_archivos();
        option = helpers_getOption();
        switch(option) // hacer un do-while
		{			
            case '0':   // Return to Main Menu
				option_exit_submenu();
				break;
                
            case '1':   // Select option 1
				option_save_file(fp);
				break;
				
			case '2':   // Select option 2
				option_renown_file(fp);
				break;
				
			case '3':   // Select option 3
				option_copy_file(fp);
				break;
			
			default:
				break;
		}  

    } while(option != '0');

    
         
}
