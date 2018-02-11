#ifndef _OPERATIONSH_
#define _OPERATIOS_H_

//una función por cada operación, primero van a imprimir por pantalla, luego le metemos contenido
FILE * option_load_file(FILE * fp);

void option_num_char_words_lines();
void option_num_vow_consonants();
void option_num_rep_word();

void option_show_text_file(FILE * fp);
void option_sust_word();
void option_add_line_end_file();
void option_insert_line_index_file();
void option_del_line();

void option_save_file();
void option_renown_file();
void option_copy_file();

void option_exit_submenu();






#endif
