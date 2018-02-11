#ifndef _OPERATIONSH_
#define _OPERATIOS_H_

//una función por cada operación, primero van a imprimir por pantalla, luego le metemos contenido
FILE * option_load_file(FILE * fp);

void option_num_char_words_lines(FILE * fp);
void option_num_vow_consonants(FILE * fp);
void option_num_rep_word(FILE * fp);

void option_show_text_file(FILE * fp);
void option_sust_word(FILE * fp);
void option_add_line_end_file(FILE * fp);
void option_insert_line_index_file(FILE * fp);
void option_del_line(FILE * fp);

void option_save_file(FILE * fp);
void option_renown_file(FILE * fp);
void option_copy_file(FILE * fp);

void option_exit_submenu();






#endif
