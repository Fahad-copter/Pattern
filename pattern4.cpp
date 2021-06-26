#include<iostream>
using namespace std;
/*  INPUT IS 5: */
/*  DESIRED OUTPUT  */
/* 


    *
   * *
  * * *
 * * * *
* * * * *


*/
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int count=n-i;
        while(count--)//for space
        {
            cout<<" ";
        }
        int j=i;
        while(j--)//stars with spaces in between
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}
