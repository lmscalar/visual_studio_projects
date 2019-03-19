//
//  main.cpp
//  cpp_tutorial
//
//  Created by Luis Molina on 2019/03/13/.
//  Copyright © 2019 Luis Molina. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <array>
#include <vector>
#include <random>
#include <armadillo>
#include "ints0.h"

using namespace std;
using namespace arma;

void vec0(vector<double>& b)  // pass array by reference
{
    
    for (int i=0; i < b.size(); ++i)
        cout << b[i] << endl;
}


void ints_out()
{
    int u[3] = {10, 15, 8};
    int v[5] = {7, 12, 5, 40, 19};
    
    ints A(u, 3), B = A;
    cout << A.len() << endl;
    cout << B.len() << endl;
    
    B = ints(v, 5);
    cout << A.len() << endl;
    cout << B.len() << endl;

}

void arma_mat()
{
    mat A = randn<mat>(100,100);
    mat B = randn<mat>(100,100);
    
    cout << A * B.t() << endl;
    
}

int main(int argc, const char * argv[]) {
    
    const double g = 9.8;   // acceleration
    
    for (int t=0; t <= 10 ; t++){
        double distance = g * ( t * t / 2.0 ) ;
        printf("\t%2d %7.2f\n", t, distance);
    }
    
    //std::cout << argv[0]  << std::endl;
    
    //array<int,5> a = {2, 3, 21, 7, 9};
    cout << endl;
    vector<double> d = {2.3, 3.14159265359, 21.3, 37.1, 43.5};
    vec0(d);
    
    int* b = NULL;
    int n;
    cout << "enter integer: ";
    cin >> n;
    
    b = new int[n];
    for (int i = 0; i < n; i++){
        b[i] = i + 1;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << endl;
    }
    
    delete [] b;
    ints_out();
    
    arma_mat();
    
    return 0;
}
