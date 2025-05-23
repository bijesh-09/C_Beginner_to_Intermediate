#include<stdio.h>
int main(){
    int i=0;
    char str1[20],str2[30];
    char *aptr = str1, *bptr = str2;
    printf("Enter a string: ");
    scanf("%s",aptr);
    while (*(aptr+i) != '\0')
    {
        *(bptr+i) = *(aptr+i);
        i++;
    }
    *(bptr+i) = '\0';
    printf("Copied string = %s",bptr);
    return 0;

}