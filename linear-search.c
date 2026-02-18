#include <stdio.h>
int main(){
    int arr[] = {10,20,30,40,50,60};
    int x = 6;
    printf("Enter the value to search: ");
    int key = 0;   
    scanf("%d", &key);
    int i;
    int found  = 0;

    for (i=1; i< x; i++){
        if (arr[i-1]==key){
            found = 1;
            break;
        }
    }
    if (found == 1){
        printf("Value found at index %d i.e. at %d number \n", i-1, i);
    } else {
        printf("Value not found\n");
    }
    return 0;
}
