#include<stdio.h>
#include<stdlib.h>

/*void mystrcpy(char *s1, char *s2, size_t len){

    /*char temp[len];          //used this to make it dynamic
    //printf("s1: %d, temp: %d, len: %d\n", s1,temp,len);
    int i =0;
    while(s1[i] != '\0'){
        temp[i] = s1[i];
        i++;
    }
    temp[i] ='\0';
    printf("s1: %s, temp: %d, len: %d\n", s1,&temp,len);
    s2 = &temp;


    int i =0;
    for (size_t i = 0; i < len; i++)
        if ((s2[i] = s1[i]) == '\0') return;
}
*/
char *mystrcpy(char *s1, int len)
{
    char *temp = calloc(len, sizeof(char));
    printf("%d\n", temp);
    if (temp == NULL) return NULL;
    int i;
    for ( i = 0; i < len; i++) temp[i] = s1[i];

    return temp;
}

int main(){

    char s1[] = "abcd";
    char *s2;
    int len = strlen(s1);
    printf("%d\n", s1);
    s2 = mystrcpy(s1,len);
    printf("%s",s2);
}
