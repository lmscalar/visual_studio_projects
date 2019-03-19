//
//  address.cpp
//  cppClasses
//
//  Created by Luis Molina on 2019/03/15/.
//  Copyright © 2019 Luis Molina. All rights reserved.
//

#include <stdio.h>
#include "address.h"

using namespace std;

Address::Address()
{
    
}

Address::~Address()
{
    
}

Address::Address(int n, string st, string a, string c, string s, int zip)
{
    number = n;
    street = st;
    apt = a;
    city = c;
    state = s;
    zip_code = zip;
}


