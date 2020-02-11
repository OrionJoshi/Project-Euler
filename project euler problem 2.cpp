//project euler problem 2
/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms

*/

#include<stdio.h>
#include<conio.h>
 
#define MAX_FIB 4000000
 
int main(void) {
    int a = 1, b = 1, c = 1, sum = 0;
 
    while (c <= MAX_FIB) {
        if (c % 2 == 0)
            sum += c;
        c = a + b;
        a = b;
        b = c;
    }
 
    printf("\nSum: %d\n", sum);
 	
 	getch();
    return 0;
}