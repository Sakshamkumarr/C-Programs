// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

void bitDestuffing(int N, int arr[]){
    int brr[30];
    int i,j,k;
    i=0;
    j=0;
    int count=1;
    while(i<N){
        if(arr[i]==1){
            brr[j]=arr[i];
            for(k=i+1; arr[k]==1 && count<5; k++){
                j++;
                brr[j] = arr[k];
                count++;
                if(count==5){
                    k++;
                }
                i=k;
            }
        }else{
            brr[j]=arr[i];
        }
        i++;
        j++;
    }
    for(i=0; i<j; i++){
        printf("%d",brr[i]);
    }
    
}

int main() {
    int N;
    int arr[30];
    printf("Enter frame size : ");
    scanf("%d",&N);
    printf("Enter the frame in the form of 0 and 1 : ");
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    bitDestuffing(N,arr);

    return 0;
}