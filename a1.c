
#include <stdio.h>

/* litan.h ... view source on "hncsltok.github.io" */   			                                           typedef char *string;typedef void *pointer;const pointer null = 0;typedef int bool;const bool true = 1;const bool false = 0;const string true_string = "true";const string false_string = "false";void put_bool(bool x);void put_char(char x);void put_int(int x);void put_float(float x);void put_double(double x);void put_string(string x);char get_char();int get_int();float get_float();double get_double();void pause();void warp();void put_bool(bool x) { x ? put_string(true_string) : put_string(false_string);}void put_char(char x) { printf("%c", x);}void put_int(int x) { printf("%d", x);}void put_float(float x) { printf("%f", x);}void put_double(double x) { printf("%lf", x);}void put_string(string x) { printf(x);}void pause();char get_char() { char x; scanf("%c", &x); pause(); return x;}int get_int() { int x; scanf("%d", &x); pause(); return x;}float get_float() { float x; scanf("%f", &x); pause(); return x;}double get_double() { double x; scanf("%lf", &x); pause(); return x;}void pause() { char _; scanf("%c", &_);}void warp() { put_char('\n');}

int main() {

    // have fun
	
	
	put_string("I:\tHello ~ Eniac\n");
	printf("Enica:\tHello ~ What's your name?\n");
	
	char code;
	code = get_char();
	
	put_string("Welcome to My World ~, ");
	put_char(code);
	put_string("!\n");


    return 0;
}

