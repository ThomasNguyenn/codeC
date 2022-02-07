#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[100];
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    int ans = 0;
    int min = 100000;
    for (int i = 0; i < N; i++)
    {
        for(int k = 0; k < N; k++){
            printf("%d",arr[i]);
            for(int j = i + 1; j < k + i + 1; j++){
              if( j >= N ){
                printf("%d", arr[j % N];
              }else{
                printf("%d",arr[j]);
              }
            }
            printf("\n");
        }
    }
}
