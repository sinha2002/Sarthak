#include <iostream>
using namespace std;
void findThreeLargestElements(int arr[], int arr_size){
   int max, max2, max3;
   max3 = max = max2 = arr[0];
   for(int i = 0; i < arr_size; i++){
      if (arr[i] > max){
         max3 = max2;
         max2 = max;
         max = arr[i];
      }
      else if (arr[i] > max2){
         max3 = max2;
         max2 = arr[i];
      }
      else if (arr[i] > max3)
         max3 = arr[i];
   }
   cout<<endl<<"Three largest elements of the array are "<<max<<","<<max2<<","<<max3;
}
int main(){
   int arr[] = {67, 76, 45, 78, 45,34, 56};
   int n = sizeof(arr) / sizeof(arr[0]); 
   cout<<"The array is : ";
   for(int i = 0; i < n; i++) 
      cout<<arr[i]<<"\n"; 
   findThreeLargestElements(arr, n);
   return 0;
}