#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int arrayinput(int a[],int size)
{
  for(int i=0;i<size;i++)
  {
    /std::cout<<"enter the element for the array"<<std::endl;
    std::cin>>a[i];
  }
}
int printarray(int a[],int size)
{
  for(int i=0;i<size;i++)
  {
    std::cout<<a[i]<<" ";
  }
  std::cout<<std::endl;
  return 0;
}

int rotation(int a[],int size,int rotate,int b[])
{
 for(int i=0;i<size;i++)
    {
     b[i]=a[(i+rotate)%size];
    }
}
int main() {
    int size,rotate;
    std::cout<<"enter the length of the array"<<std::endl;
    std::cin>>size;
    std::cout<<size<<endl;
    int a[size];
    int b[size];
    arrayinput(a,size);
    printarray(a,size);
    std::cout<<"enter rotation index"<<std::endl;
    std::cin>>rotate;
    rotation(a,size,rotate,b);
    printarray(b,size);
    return 0;
}
