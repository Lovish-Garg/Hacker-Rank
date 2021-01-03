#include <iostream>
#include <cstdio>
using namespace std;



void printDigit(int i)
{
    switch(i)
    {
        case 1:
            printf("one\n");
            break;
        
        case 2:
            printf("two\n");
            break;
        
        case 3:
            printf("three\n");
            break;
            
        case 4:
            printf("four\n");
            break;
            
        case 5:
            printf("five\n");
            break;
            
        case 6:
            printf("six\n");
            break;
            
        case 7:
            printf("seven\n");
            break;
            
        case 8:
            printf("eight\n");
            break;
            
        case 9:
            printf("nine\n");
            break;
    }    
}

void print(bool res)
{
    if (res == 0)
        printf("even\n");
    else 
        printf("odd\n");
}

void evenOdd(int num)
{
    int decision = (num % 2 == 0) ? 0 : 1;
    print(decision);
}

int main() {
    int start;
    int end;
    
    cin >> start >> end;
    
    for (int i = start; i <= end; ++i)
    {
        if (i <= 9)
            printDigit(i);
        else 
            evenOdd(i);
    }
    // Complete the code.
    return 0;
}
