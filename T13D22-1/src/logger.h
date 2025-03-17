#ifndef SRC_LOGGER_H_
#define SRC_LOGGER_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "log_levels.h"
#define SIZE 256

FILE* log_init(char* filename);
int log_close(FILE* log_file);
int logcat(FILE* log_file, char* message, log_level level);

#endif  // SRC_LOGGER_H_
