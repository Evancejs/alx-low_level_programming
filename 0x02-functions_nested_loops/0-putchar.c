#include "main.h"
/**
* main - prints _putchar, followed by a new line
*
* Return: 0
*/
int main(void) {
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');
    return 0;
}

int _putchar(char c) {
    char ch = c;
    __asm__ ("movq $4, %%rax\n\t"
             "movq $1, %%rdi\n\t"
             "movq %0, %%rsi\n\t"
             "movq $1, %%rdx\n\t"
             "syscall"
             :
             : "g"((intptr_t) ch)
             : "%rax", "%rdi", "%rsi", "%rdx", "memory");
    return ch;
}
