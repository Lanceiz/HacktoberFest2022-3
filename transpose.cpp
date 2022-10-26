#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    cout<<"Enter the elemnet: ";
    for(int i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"'\n'Matrix: ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"transpose: ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
