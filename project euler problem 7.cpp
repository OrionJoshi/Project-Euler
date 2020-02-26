//project euler problem 7
/*


By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10001st prime numbers?

*/
#include<stdio.h>
#include<conio.h>

int main(void)
{
    long count, currentNumber, primeCount;
    
    primeCount = 1;
    
    for (currentNumber = 3; primeCount != 10001; currentNumber+=2) //currentNumber = currentNumber + 2 to skip out even numbers
    {
        for (count = 3; count < currentNumber; count+=2) //For Optimal performace, use "count < sqrt(currentNumber)"
        {
            if (currentNumber % count == 0)
                break;
        }
        
        if (count == currentNumber)
            primeCount++;
    }
    
    printf("10001st Prime number: %li", count);
    getch();
    return 0;
}

