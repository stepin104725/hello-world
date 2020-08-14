#include<stdio.h>
#include<string.h>

int main()
{
    char mystring[100]="My_Name_Is_Edcast_Future_Skills";
    const char del[2]="_";
    char *token;
    token=strtok(mystring,del);
    while(token!=NULL)
    {
        printf("%s\n", token);
        token=strtok(NULL,del);

    }

}
