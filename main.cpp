#include <iostream>
#include <cmath>
#include<algorithm>

using namespace std ;

int main()
{
    int k , s;
    cin >> k >> s ;
    int count = 0 ;
    for(int i = 0 ; i<=k ; i++)
    {
        for(int j = 0 ; j<=k ; j++)
        {
            if(s-i-j>=0&&s-i-j<=k)
            {
                count++;
            }
        }
    }
    cout << count << endl ;

    return 0;
}
