#include <iostream>
#include <string>
using namespace std;
int nap(int s, int tl){
    int x=0,y=0;
        if (s=="South") y-=tl;
        else
        if (s=="North") y+=tl;
        else
        if (s=="West") x-=tl;
        else
        if (s=="East") x+=tl;
        s=""; tl=0;
    }
    return x + " " +y;
    }
    int main() {
    string s;
    int  tl;
    cin >> s, tl;
    cout << nap(s, tl);
    }
