#include<iostream>
using namespace std;
int main()//n!
{
    for(int a=1; a<=4; a++)
    {
        for(int b=1; b<=4; b++)
        {
            if(a==b)continue;
            for(int c=1; c<=4; c++)
            {
                if(c==a||c==b) continue;
                int d=10-a-b-c;

                    cout<<a<<b<<c<<d<<endl;


            }
        }
    }
    return 0;
}
