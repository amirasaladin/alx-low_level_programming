#ifndef MAIN_H
#define MAIN_H

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);

#endif
