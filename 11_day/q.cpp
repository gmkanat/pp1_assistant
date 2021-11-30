#include <iostream>
#include <vector>
#include <cmath>
using namespace std;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
bool prime(int a)
{
    int count=0;
 for(int i=2;i<a;i++)
 {
     if(a%i==0)
     {
         count++;
     }
 }
 if(count==0)
 {
     return 1;
 }
else
{
    return 0;
}
}
int main()
{
    int n;
    int k;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cin>>k;
    int count=0;

    for(int i=0;i<n;i++)
    {
        bool result=prime(v[i]);
        if(result==1 &&v[i]>=k)
        {
            count++;
        }
    }
    cout<<count;
}