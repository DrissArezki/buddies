#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct flgs - struct for flags
 * @plus:  for the '+' character
 * @space:  for the ' ' character
 * @hash:  for the '#' character
 */
typedef struct flgs
{
	int plus;
	int space;
	int hash;
} flgs_t;

/**
 * struct funchandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @spec: format specifier
 * @func: pointer to the correct printing function
 */
typedef struct funchandler
{
	char *spec;
	int (*func)(va_list, flgs_t *f);
} specify_t;

int _printf(const char *format, ...);
int handleInt(va_list form, flgs_t *f);
int _putchar(char c);
int print_string(va_list form, flgs_t *f);
int print_binary(va_list form, flgs_t *f);
int print_unsigned(va_list form, flgs_t *f);
int print_octal(va_list form, flgs_t *f);
int print_hex(va_list form, flgs_t *f);
int handleP(va_list form, flgs_t *f);
int rot13(va_list form, flgs_t *f);
int print_rev(va_list form, flgs_t *f);
int print_bigS(va_list form, flgs_t *f);
char *convert(unsigned long int num, int base, int lowercase);
int _puts(char *str);
int print_hex1(va_list form, flgs_t *f);
int print_cent(va_list form, flgs_t *f);
int print_char(va_list form, flgs_t *f);
int get_flag(char s, flgs_t *f);

#endif
