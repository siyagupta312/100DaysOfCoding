#include <stdio.h>

int main() {
    int n, key, i, j;
    
    
    scanf("%d", &n);
    int arr[n + 1];  
    
    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    scanf("%d", &key);
    

    for(i = 0; i < n; i++) {
        if(key < arr[i])
            break;
    }
    
    
    for(j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }
    
    
    arr[i] = key;
    n++; 
    
    
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}