#include <string>
#include <iomanip>
#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
    const int SECPERMIN =60;
    const int SECPERHOUR =3600;

    long lseconds = seconds % SECPERMIN;
    long lminutes = (seconds / SECPERMIN) %SECPERMIN;
    long lhours   = seconds /SECPERHOUR;

    std::stringstream ssresult;

    ssresult << std::setfill('0') << std::setw(2) << lhours << ":";
    ssresult << std::setfill('0') << std::setw(2) << lminutes << ":";
    ssresult << std::setfill('0') << std::setw(2) << lseconds;

    return ssresult.str();
}