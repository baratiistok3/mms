#pragma once

#include "Distance.h"

namespace mms {

class Meters : public Distance {

public:
    Meters();
    Meters(double meters);
    Meters(const Distance& distance);
    Meters operator+(const Distance& distance) const;
    Meters operator-(const Distance& distance) const;
    Meters operator*(double factor) const;
    Meters operator/(double factor) const;
    double operator/(const Distance& distance) const;
    void operator+=(const Distance& distance);

};

} // namespace mms
