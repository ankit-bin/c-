#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "hollow square enter the value of n ";
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i==1 || i==n){
                cout<<"*"<<" ";
            }else{
                if(j==1 || j==n) cout<<"*"<<" ";
                else cout<<"  ";
            }
            
        }
        cout << endl;
    }
}