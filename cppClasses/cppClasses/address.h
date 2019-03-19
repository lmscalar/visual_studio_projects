//
//  address.h
//  cppClasses
//
//  Created by Luis Molina on 2019/03/15/.
//  Copyright © 2019 Luis Molina. All rights reserved.
//

#ifndef address_h
#define address_h
#include <iostream>
#include <string>

class Address {
    int number;
    std::string street;
    std::string apt;
    std::string city;
    std::string state;
    int zip_code;
public:
    Address();
    ~Address();
    Address(int n, std::string st, std::string a, std::string c, std::string s, int zip);
    
};
#endif /* address_h */
