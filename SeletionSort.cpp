#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>

using namespace std;

int dubple[1000];
int main()
{  
   const int listSz=50;
   
   int sSortlist[listSz+1];
   
   srand((unsigned)time(NULL));
   
    for (int i = 1; i <= listSz; )
    {
        sSortlist[i] = rand() % 300 + 1;
        if (dubple[sSortlist[i]] == false)
        {
            dubple[sSortlist[i]] = true;
            i++;
        }
    }
    
    for(int i=1; i<=listSz; i++) cout<< sSortlist[i]<<' ';
    cout<<endl;
   for(int i=1; i<=listSz; i++)
   {
       int findMin = 2e9,minIdx = -1;
       for(int j=i; j<=listSz; j++)
       {
           if(findMin>sSortlist[j])
           {
               findMin = sSortlist[j];
               minIdx = j;
           }
       };
       swap(sSortlist[i],sSortlist[minIdx]);
   };
   
   for(int i=1; i<=listSz; i++) cout<<sSortlist[i]<<' ';
return 0;   
}
