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
        int count=n-i;
        while(count--)
        {
            cout<<" ";
        }
        int j=i;
        while(j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
