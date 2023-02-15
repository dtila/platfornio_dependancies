#include "logging.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>



#ifdef ARDUINO
#include <Arduino.h>

void Log::e(const char *tag, const char *format, ...)
{

}

void Log::w(const char *tag, const char *format, ...)
{

}

void Log::i(const char *tag, const char *format, ...)
{

}

#endif
