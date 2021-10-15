#define N 10
int a[N] = {543, 12, 84, 57, 69, 41, 9, 5,465,723}; 


int getMax(int a[], int n){  
  int max = a[0];  
  for (int i = 1; i < n; i++)  
    if (a[i] > max)  
      max = a[i];  
  return max;  
}  

void bucket(int a[], int n){  
  int max = getMax(a, n); //max is the maximum element of array  
  int bucket[max], i;  
  for (int i = 0; i <= max; i++)  
  {  
    bucket[i] = 0;  
  }  
  for (int i = 0; i < n; i++){  
      bucket[a[i]]++;  
  }  
  for (int i = 0, j = 0; i <= max; i++){  
    while (bucket[i] > 0){  
        a[j++] = i;  
        bucket[i]--;  
    }  
  }  
}

int main( ){
    
    bucket(a, N);  
    
    return 0;
}