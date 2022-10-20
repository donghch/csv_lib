/**
 * csvreader
 * 
 * Purpose: This file is designed for read and parsing csv data
 * Author: Houchuan(Henry) Dong
 * Date: Oct 20 2022
*/
#define CSVREADER_LOADED

#include <stdio.h>


/**
 * getwidth
 * 
 * Purpose: Get csv file's data width.
 * Requires: A valid csv file defined by RFC4180 standard.
 * Returns: The data width of the file.
*/
int getwidth(FILE fileHandle);

/**
 * getlength
 * 
 * Purpose: Get csv file's length
 * Requires: A valid csv file defined by RFC4180 standard.
 * Returns: The length of the file
*/
int getlength(FILE fileHandle);
