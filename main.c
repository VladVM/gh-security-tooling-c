#include <stdio.h>

void test1(void);

void main(void **argv, int argc){
    printf("Hello world\n");
    test1();
}

void test1(void){
    char buf[24];
    printf("Please enter your name and press <Enter>\n");
    gets(buf);
    printf("%s", buf);
    return;
}