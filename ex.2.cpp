#include <iostream>
using namespace std;
int main()
{
    char s,S,j,J,x;
    cout<<"Enter s/S or j/J: ";
    cin>>x;

    if(x=='s' || x=='S')
        cout<<"The Senior sales person is paid Rs 400";
    else if(x=='j' || x=='J')
        cout<<"The junior sales person is paid Rs 275";

    return 0;
}
