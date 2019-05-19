#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class clock
{
    int hours,min,sec;
    int h,m,s;
public:
    constructor(int x,int y,int a)
    {
        h=x;
        m=y;
        s=a;
    }
    void display()
    {

    }
    friend clock operator ++(clock h)
    {
            m++;
            s=0;
}


}