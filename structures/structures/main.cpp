//
//  main.cpp
//  structures
//  Roman numerals conversion
//
//  Created by Luis Molina on 2019/03/12/.
//  Copyright © 2019 Luis Molina. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

class Roman {
    
private:
    enum  {L=100};
public:
    Roman(unsigned n);
    char a[L];
};

Roman :: Roman(unsigned n)
{
    int v[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    int len = sizeof(v)/sizeof(*v);
    
    string r[] = {"M","CM", "D", "CD", "C", "XC", "L", "XL","X", "IX", "V", "IV", "I"};
    
    int pos = 0;
    for (int i=0; i < len; i++)
    {
        while (v[i] <= n)
        {
            if (pos + 3 > L)
            {
                cout << "Number too large.\n"; exit(1);
                
            }
        a[pos++] = r[i][0];
        if (r[i][1]) a[pos++] = r[i][1];
        n -= v[i];
        }
    }
    a[pos] = '\0';
}


void string_out()
{
    char target[20];
    
    strcpy(target, "I like c++.");
    cout << target << endl;
    
}

void swap0(int &a, int &b)
{
    int x;
    x = a; a = b; b = x;
}


int main(int argc, const char * argv[]) {
    
    unsigned n;
    cout << "Enter a decimal number: ";
    cin >> n;
    cout << "Roman: " << Roman(n).a << endl;
    
    string_out();
    
    int a = 3; int b = 21;
    
    swap0(a, b);
    cout << a << " " << b << endl;
    
    return 0;
}
