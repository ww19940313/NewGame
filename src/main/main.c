#include <stdio.h>

int main(){
    char str[100];
     printf("please put a string\n");
    scanf("%s",str);
    printf("hello world  ,%s\n",str);

    while (1){
        char info[255];
        scanf ("%s",info);
        printf("%s\n",info);
        //todo
        if (info[0] =='o'){
            break;
        }
        int i = 0;
        i++;
        
    }
    printf("\nfinish \n");

    return 0;
}