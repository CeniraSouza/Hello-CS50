//Functions printf and get_string will be used from these libraries
#include <stdio.h>    
#include <cs50.h>

// The main function comes on the top

int main(void)
{
    string name = get_string("What's your name?\n"); 
    printf("hello, %s\n", name); 
}
