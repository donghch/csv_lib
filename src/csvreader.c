/**
 * csvreader
 * 
 * Purpose: This file is designed for read and parsing csv data
 * Author: Houchuan(Henry) Dong
 * Email: dieshenke@gmail.com
 * Date: Oct 20 2022
*/
#include <stdio.h>
#include "csvreader.h"

int getWidth(FILE* fileHandle) {
    
    FILE* handle  = fileHandle;
    int columnCount = 0;
    int quoteCount = 0;
    char c;

    while ((c = fgetc(handle)) != '\n') {
        if (c == '\'' || c == '\"') {
            quoteCount++;
        } else if (c == ',' && (quoteCount % 2) == 0) {
            quoteCount++;
        }
    }

    return ++quoteCount;

}

int getLength(FILE* fileHandle) {
    
    FILE* handle = fileHandle;
    int lineCount = 0;
    char c;
    while ((c = fgetc(handle)) != EOF) {
        if (c == '\n') 
            lineCount++;
    }

    return lineCount;

}