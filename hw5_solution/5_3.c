#include <stdio.h>
#define SIZE 6

int whatIsThis(const int b[], size_t p);
// function prototype
// function main begins program execution
int main(void)
{
    int x; // holds return value of function whatIsThis
    // initialize array a
    int a[SIZE] = {1, 2, 3, 4, 5, 6};
    x = whatIsThis(a, SIZE);
    printf("Result is %d\n", x);
}

// what does this function do ?
// Use recursive to calulate the produt of all numbers in array
int whatIsThis(const int b[], size_t p)
{
    // base case
    if (1 == p)
    {
        return b[0];
    }
    else
    { // recursion step
        return b[p - 1] * whatIsThis(b, p - 1);
    }
}