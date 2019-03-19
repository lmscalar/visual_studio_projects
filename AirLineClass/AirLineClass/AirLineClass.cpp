// AirLineClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "AirlineTicket.h"

using namespace std;

int main()
{
    // creation of stack-based AirlineTicket object as well as a heap-based one

	AirlineTicket myTicket;     // Stack-based AirlineTicket
	myTicket.setPassengerName("Sherman T. Socketwrench");
	myTicket.setNumberOfMiles(700);
	double cost = myTicket.calculatePriceInDollars();
	cout << "This ticket will cost $" << cost << endl;

	//Heap-based AirlineTicket with smart pointer
	auto myTicket2 = make_unique<AirlineTicket>();
	
	myTicket2->setPassengerName("Laudimore M. Hallidue");
	myTicket2->setNumberOfMiles(2000);
	myTicket2->setHasEliteSuperRewardsStatus(true);
	double cost2 = myTicket2->calculatePriceInDollars();
	cout << "This other ticket will cost $" << cost2 << endl;

	// Heap-based AirlineTicket without smart pointer (not recommended)
	AirlineTicket* myTicket3 = new AirlineTicket();
	// ... use ticket3
	delete myTicket3;





}
