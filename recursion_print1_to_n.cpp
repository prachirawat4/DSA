// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void print(int n)
{
    if(n==0)
    {
        return ;
    }
    print(n-1);
    cout<<n;
}
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    print(n);
}
