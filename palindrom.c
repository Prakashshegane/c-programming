#include<stdio.h>
int palindrome(int arr[])
{
  int i=0;
  int j=6;
  while(i<j)
  {
    if(arr[i]!=arr[j])
    {
        return 0;
    }
    i++;
    j--;
  }
  return 1;
}
int main(){
    int arr[7]={1,2,3,5,3,2,1};
    //int n=sizeof(arr)/sizeof(arr[0]);
    if(palindrome(arr))
    {
        printf("the array is palindrome");
    }
    else{
        printf("the array is not a palindrome");
    }
return 0;
}