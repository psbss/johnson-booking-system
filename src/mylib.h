#ifndef MYLIB_H
#define MYLIB_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int inquiry(void);
int validate_int(int input_range_beginning, int input_range_end, int input);
int validate_date(int range_end, int input);
void print_validation_err(int input);

#endif