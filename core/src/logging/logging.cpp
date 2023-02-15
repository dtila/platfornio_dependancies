#include "logging.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>


#ifdef ARDUINO
#include <Arduino.h>

char buff[128] = {};
void display(const char* type, const char* tag, const char* format, va_list &list) {
    snprintf(buff, sizeof(buff), format, list);

    Serial.print(type);
    Serial.print(": ");
    Serial.print(tag);
    Serial.print(" - ");
    Serial.print(buff);
}

void Log::e(const char *tag, const char *format, ...)
{
    va_list arg;
    va_start(arg, format);
    display("E", tag, format, arg);
    va_end(arg);
}

void Log::w(const char *tag, const char *format, ...)
{
    va_list arg;
    va_start(arg, format);
    display("W", tag, format, arg);
    va_end(arg);
}

void Log::i(const char *tag, const char *format, ...)
{
    va_list arg;
    va_start(arg, format);
    display("I", tag, format, arg);
    va_end(arg);
}

#endif
