#include <iostream>
#include <cstdio>
using namespace std;

int largest(int arr[], int n) 
{ 
    int i; 
      
    // Initialize maximum element 
    int max = arr[0]; 
  
    // Traverse array elements  
    // from second and compare 
    // every element with current max  
    for (i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
  
    return max; 
} 


int max_of_four(int a, int b, int c, int d) {
    int arr[] = {a,b,c,d}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    return largest(arr, n);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}