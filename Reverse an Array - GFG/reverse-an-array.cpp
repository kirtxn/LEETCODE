#include <iostream>
using namespace std;
//using recursion
void rev(int a[],int s,int e){
   
   if(s>=e)
   {
       return;
   }
   
   
       int temp=a[s];
       a[s]=a[e];
       a[e]=temp;
      
     rev(a,s+1,e-1);  
   
}

int main() {
   int t;
   
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
   }
   rev(a,0,n-1);
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
   cout<<endl;
   }
   return 0;
}