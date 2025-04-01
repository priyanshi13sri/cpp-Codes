#include <iostream>
using namespace std;
int main()
{
    int k = 70; /*(65 + i)*/ 
    for (int  i = 5; i > 0; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            cout<<(char)(k-j);
            cout<<"  ";
            /* code */
        }
        cout<<endl; 
        /* code */
    }
    



    return 0;
}
