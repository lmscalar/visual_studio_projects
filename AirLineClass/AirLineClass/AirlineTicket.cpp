#include "pch.h"
#include "AirlineTicket.h"
using namespace std;


// constructor initializer method
AirlineTicket::AirlineTicket()
	: mPassengerName("Unknow passenger")
	, mNumberOfMiles(0)
	, mHasEliteSuperRewardsStatus(false)
{
}


// destructor
AirlineTicket::~AirlineTicket()
{
}

double AirlineTicket::calculatePriceInDollars() const
{
	if (hasEliteSuperRewardsStatus()) {
		// Elite Super Rewards customers fly for free!
		return 0;
	}
	// The cost of the ticket is the number of miles times 0.1
	// Real airlines probably have a more complicated formula
	return getNumberOfMiles() * 0.1;
}

const string& AirlineTicket::getPassengerName() const
{
	return mPassengerName;
}

void AirlineTicket::setPassengerName(const string& name)
{
	mPassengerName = name;
}

// other get and set methods omitted for brevity


int AirlineTicket::getNumberOfMiles() const
{
	return mNumberOfMiles;

}

void AirlineTicket::setNumberOfMiles(int miles)
{
	mNumberOfMiles = miles;
}


bool AirlineTicket::hasEliteSuperRewardsStatus() const
{
	return mHasEliteSuperRewardsStatus;
}

void AirlineTicket::setHasEliteSuperRewardsStatus(bool status)
{
	mHasEliteSuperRewardsStatus = status;
}
