#include<stdio.h>
#include<string.h>


int isAnagram(char *s1, char *s2){
    int A[26] = {0} , B[26] = {0};

    int len1 = strlen(s1);
    int len2 = strlen(s2);
    //printf("length is %d\n", len1);
    for(int i=0;i<len1;i++){
        A[s1[i]-'a']++;
    }

    for(int i=0;i<len2;i++){
        B[s2[i]-'a']++;
    }

    for(int i=0;i<len1;i++){
        printf("%d ", A[s1[i]]);
    }
    printf("\n");
    for(int i=0;i<len2;i++){
        printf("%d ", A[s2[i]]);
    }

    for(int i=0;i<26;i++){
        if(A[i] != B[i]){
            return 1;
        }
    }
    return 0;

}

int main(){


    char s1[] = "ana";
    char s2[] = "naaat";
    //printf("%d", strlen(s1));
    //printf("\n%d", s1[1]);
    int res = isAnagram(s1, s2);
    printf("\n%d", res);

}

