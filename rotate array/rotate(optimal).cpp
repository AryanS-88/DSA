#include <iostream>
using namespace std;

void rotate(int arr,int size,int rotate)
{
  int temp[size];
   // storing 1st k elements in temporary array
  for(i=0;i<rotate;i++)
    {
     temp[i]=arr[i];
    }
// shifting remaining elements of the array
  for(i=rotate;i<size;i++)
    {
     arr[size-rotate]=arr[rotate];
    }
//storing back the k elements to the orignal array
  for(i=0;i<rotate;i++)
    {
     arr[size-rotate+i]=temp[i];
    }
 //printing array
  for(i=0;i<size;i++)
    {
     std::cout<<arr[i]<<" ";
    }
  std::endl;
}
int main() {
    int n; // Size of array
    cin >> n;
    int arr[n];
    //initializing array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k; // No. of times to rotate
    cin >> k;
    rotateArray(arr, n, k);

    return 0;
}
