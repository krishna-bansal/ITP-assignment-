#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n; 
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
        cout<<n<<" is a perfect number"<<endl;
    else
        cout<<n<<" is not a perfect number"<<endl;
    return 0;


}