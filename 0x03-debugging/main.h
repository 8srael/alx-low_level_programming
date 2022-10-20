#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);
int largest_number(int a, int b, int c);
/**
 * convert_day - converts days
 * @month : month
 * @day : day
 * Return: converted day
*/
int convert_day(int month, int day);

/**
 *  print_remaining_days - prints year in day
 *  @month : month
 *  @day : day
 *  @year : year
*/
void print_remaining_days(int month, int day, int year);

#endif /* MAIN_H */
