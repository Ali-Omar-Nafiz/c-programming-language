#include <stdio.h>
#include <stdlib.h>

int func(int x){
    printf("I am in func() and my value is %d\n",x);
}
int main()
{
    for (int i=0; i<20; i++){
    func(i);
    printf("After call\n");
    }
    printf("End of program.Bye");
    return 0;
}
