#include<iostream>
using namespace std;
/*  INPUT IS 5: */
/*  DESIRED OUTPUT  */
/* 


*
**
***
****
*****


*/
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
