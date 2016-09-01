#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int *arr,int size)
{
   int key,i,j,ans=0;
   for(i=1 ; i<size ; ++i)
   {
      key = arr[i];
      j=i-1;
      while(j>=0 && arr[j]>key)
      {
         arr[j+1]=arr[j];
         j--;
         ans++;
      }
      arr[j+1]=key;
   }
   printf("%d\n",ans);
}

int main()
{
   int t, size;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d",&size);	
      int arr[size];
      for(int i=0 ; i<size ; ++i)
         scanf("%d",&arr[i]);
      InsertionSort(arr,size);
   }
   return 0;
}
