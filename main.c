#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void test1(void);
void test2(void);

void main(void **argv, int argc){
    printf("Hello world\n");
    test1();
    test2();
}

void test1(void){
    char buf[24];
    printf("Please enter your name and press <Enter>\n");
    gets(buf);
    printf("%s", buf);
    return;
}

void test2(void){
    char buf[64];
    gets(buf);
    system(buf);
    printf("%s", buf);
}