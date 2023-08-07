#define MAIN_H
#ifndef MAIN_H


/*
 * File: holberton.h
 * Auth: Godswill Kalu
 * Desc: Header file containing prototypes for all functions
 *       written in the 0x14-file_io directory.
 */


#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>


int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */