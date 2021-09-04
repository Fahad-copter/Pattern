#include<iostream>
using namespace std;
//in this pattern we will be printing the pyramid of 5 lines and it's 
//inverted version also
/*  INPUT IS 5: */
/*  DESIRED OUTPUT  */
/* 

    *
   * *
  * * *
 * * * *
* * * * * 
* * * * *
 * * * *
  * * *
   * *
    *


*/
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int count=n-i;
        while(count--)
        {
            cout<<" ";
        }
        int j=i;
        while(j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=n;i>0;i--)
    {
        int count=n-i;
        while(count--)
        {
            cout<<" ";
        }
        int j=i;
        while(j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
