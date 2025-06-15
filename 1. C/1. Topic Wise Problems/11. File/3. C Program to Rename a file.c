#include<stdio.h>
int main()
{
    char old_file[]="student_data.bin";
    char new_file[]="multiple_student_data.bin";
    int returnvalue=rename(old_file,new_file);
    if(returnvalue==0)printf("Changed Successfully");
    else printf("Failed");
    return 0;
}
