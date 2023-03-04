#include<stdio.h>

int main(){
    int arr[5] = {5,4,3,2,1};
    // int key,j;
    // for(int i =1;i<5;i++){
    //     j = i-1;
    //      key = arr[i];
    //      while(j>=0 && key <arr[j]){
    //             arr[j+1]  =arr[j];
    //             j--;
    //      }
    //      arr[j+1] = key;
    // }
    // int minind,j;
    // for (int i = 0; i < 4; i++)
    // {
    //     minind = i;
    //     for ( j = i+1; j < 5; j++)
    //     {
    //         if (arr[j]<arr[minind])
    //         {
    //          minind = j;   
    //         }
    //         int temp = arr[i];
    //         arr[i] = arr[minind];
    //         arr[minind] = temp;
            
    //     }
        
    // }
    

for (int i = 0; i < 4; i++)
for (int j = 0; j < 5; j++)
{
    if(arr[j]>arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
    }
}

{
    /* code */
}

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    
}