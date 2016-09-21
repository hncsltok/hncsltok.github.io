#pragma once

#include <stdio.h>

// typedef and constant
typedef char *string;
typedef void *pointer;
pointer null = 0;

typedef int bool;
const bool true = 1;
const bool false = 0;
const string true_string = "true";
const string false_string = "false";


// io
// todo: refactor with generics

void put_bool(bool x);
void put_char(char x);
void put_int(int x);
void put_float(float x);
void put_double(double x);

void put_string(string x);

char get_char();
int get_int();
float get_float();
double get_double();

// utils
void pause();
void warp();

// power

int pow(int x, int y);


// litan.c

void put_bool(bool x) {
	x ? put_string(true_string) : put_string(false_string);
}

void put_char(char x) {
	printf("%c", x);
}

void put_int(int x) {
	printf("%d", x);
}

void put_float(float x) {
	printf("%f", x);
}

void put_double(double x) {
	printf("%lf", x);
}

void put_string(string x) {
	printf(x);
}

void pause();
char get_char() {
	char x;
	scanf("%c", &x);
	pause();
	return x;
}

int get_int() {
	int x;
	scanf("%d", &x);
	pause();
	return x;
}

float get_float() {
	float x;
	scanf("%f", &x);
	pause();
	return x;
}

double get_double() {
	double x;
	scanf("%lf", &x);
	pause();
	return x;
}

// utils
void pause() {
	char _;
	scanf("%c", &_);
}

void warp() {
	put_char('\n');
}

// power
int pow(int x, int y) {
	int i;
	int result = 1;
	for (i = 0; i < y; ++i) {
		result *= y;
	}
	return result;
}

