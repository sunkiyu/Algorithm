#include <iostream>

using namespace std;
int main()
{  
   const int listSz=5;
   int sSortlist[listSz] = {5, 8, 3, 2, 4};

   for(int i=0; i<listSz; i++)
   {
       int findMin = 2e9,minIdx = -1;
       for(int j=i; j<listSz; j++)
       {
           if(findMin>sSortlist[j])
           {
               findMin = sSortlist[j];
               minIdx = j;
           }
       };
       swap(sSortlist[i],sSortlist[minIdx]);
   };
   
   for(int i=0; i<listSz; i++) cout<<sSortlist[i];
return 0;   
}
