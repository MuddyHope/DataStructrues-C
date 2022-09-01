#include<stdio.h>


int findingdigit(int arr[], int start, int len, int target){
    for(int i=0;i<len;i++){
        if(arr[i] == target){
            return i;
        }
    }
}

int main(){
    int arr[] = {2,4,5,5,5,5,5,7,9,9};

    int target = 5;

    //output should be [6,10]
    int ans[2] = {};
    printf("size of arr is %d\n", sizeof(arr)/sizeof(arr[0]));

    int len = sizeof(arr)/sizeof(arr[0]);

    int first, last=0;
    ans[0] = findingdigit(arr,0, len, target);

    int i = len-1;
    while(target != arr[i]){
        i--;
    }

    ans[1] = i;
    printf("%d %d", *ans, *(ans+1));


}

