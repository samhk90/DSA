#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=1;
    while(count<n){
        for(int i=0;i<n-count;i++){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
            }
        }
        count++;
    }
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    return 0;
}