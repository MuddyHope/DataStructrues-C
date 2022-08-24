#include<stdio.h>


int findingdigit(int arr[], int start, int len, int target){
    for(int i=0;i<len;i++){
        if(arr[i] == target){
            return i+1;
        }
    }
}

int main(){
    int arr[] = {1,2,2,2,3,4,4,4,4,4,5,5,5,5,5,6,7};

    int target = 2;

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

    ans[1] = i+1;
    printf("%d %d", *ans, *(ans+1));


}

