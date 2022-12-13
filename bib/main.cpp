
#include <iostream>
#include <cmath>
#include <limits>
#include "vectors.hpp"




std::ostream& operator<<(std::ostream &ostrm,  const Rdec &r) {
    ostrm << '(' << r.x << ',' << r.y << ')';
    return ostrm;
}

std::ostream& operator<<(std::ostream &ostrm,  const Rpol &r) {
    ostrm << '(' << r.r << ',' << r.ang << ')';
    return ostrm;
}


Rpol ToPol(Rdec dec){
    Rpol pol;
    pol.r = std::sqrt(dec.x * dec.x + dec.y * dec.y);
    pol.ang = std::atan(dec.y/dec.x);
    return pol;
}

Rdec ToDec(Rpol pol){
    Rdec dec;
    dec.x = std::cos(pol.ang)*pol.r;
    dec.y = std::sin(pol.ang)*pol.r;
    return dec;
}

Rdec operator+=(Rdec& lhs, const Rdec& rhs){
    lhs.x += rhs.x;
    lhs.y += rhs.y;
    return lhs;
}

Rdec operator-=(Rdec& lhs, const Rdec& rhs){
    lhs.x -= rhs.x;
    lhs.y -= rhs.y;
    return lhs;
}

Rdec operator*=(Rdec& lhs, const double& rhs){
    lhs.x *= rhs;
    lhs.y *= rhs;
    return lhs;
}

Rdec operator/=(Rdec& lhs, const double& rhs){
    lhs.x /= rhs;
    lhs.y /= rhs;
    return lhs;
}

Rdec operator+(const Rdec& lhs, const Rdec& rhs){
    Rdec res = lhs;
    res += rhs;
    return res;
}

Rdec operator-(const Rdec& lhs, const Rdec& rhs){
    Rdec res = lhs;
    res -= rhs;
    return res;
}

Rdec operator*(const Rdec& lhs, const double& rhs){
    Rdec res = lhs;
    res *= rhs;
    return res;
}

Rdec operator/(const Rdec& lhs, const double& rhs){
    Rdec res = lhs;
    res /= rhs;
    return res;
}

Rdec operator-(const Rdec& lhs){
    Rdec res = lhs;
    res.x = -res.x;
    res.y = -res.y;
    return res;
}

Rpol operator+=(Rpol & lhs, const Rpol & rhs){
        Rdec new_lhs = ToDec(lhs);
        Rdec new_rhs = ToDec(rhs);
        lhs = ToPol(new_lhs + new_rhs);
        return lhs;
}

Rpol operator-=(Rpol & lhs, const Rpol & rhs){
        Rdec new_lhs = ToDec(lhs);
        Rdec new_rhs = ToDec(rhs);
        lhs = ToPol(new_lhs - new_rhs);
        return lhs;
}

Rpol operator*=(Rpol & lhs, const double & rhs){
        Rdec new_lhs = ToDec(lhs);
        lhs = ToPol(new_lhs * rhs);
        return lhs;
}

Rpol operator/=(Rpol & lhs, const double & rhs){
        Rdec new_lhs = ToDec(lhs);
        lhs = ToPol(new_lhs / rhs);
        return lhs;
}

Rpol operator+(const Rpol &lhs, const Rpol &rhs){
    Rpol res = lhs;
    res += rhs;
    return res;
}

Rpol operator-(const Rpol &lhs, const Rpol &rhs){
    Rpol res = lhs;
    res -= rhs;
    return res;
}

Rpol operator*(const Rpol &lhs, const double &rhs){
    Rpol res = lhs;
    res *= rhs;
    return res;
}

Rpol operator/(const Rpol &lhs, const double &rhs){
    Rpol res = lhs;
    res /= rhs;
    return res;
}

Rpol operator-(const Rpol& lhs){
    Rdec new_lhs = ToDec(lhs);
    Rdec res = new_lhs;
    res.x = -res.x;
    res.y = -res.y;

    return (ToPol(res));
}
bool operator==(const Rdec& lhs, const Rdec& rhs){
    return((std::abs(lhs.x - rhs.x) < eps) && (std::abs(lhs.y - rhs.y) <eps));
}

bool operator!=(const Rdec& lhs, const Rdec& rhs){
    return((std::abs(lhs.x - rhs.x) >= eps) && (std::abs(lhs.y - rhs.y) >= eps));
}

double Dot (const Rdec& lhs, const Rdec& rhs){
    return (lhs.x * rhs.x + lhs.y * rhs.y);
}

double Norm (const Rdec& lhs){
    return (sqrt(lhs.x * lhs.x + lhs.y * lhs.y));
}

bool operator==(const Rpol& lhs, const Rpol& rhs){
    Rdec new_lhs = ToDec(lhs);
    Rdec new_rhs = ToDec(rhs);
    return((std::abs(new_lhs.x - new_rhs.x) < eps) && (std::abs(new_lhs.y - new_rhs.y) <eps));
}

bool operator!=(const Rpol& lhs, const Rpol& rhs){
    Rdec new_lhs = ToDec(lhs);
    Rdec new_rhs = ToDec(rhs);
    return((std::abs(new_lhs.x - new_rhs.x) >= eps) && (std::abs(new_lhs.y - new_rhs.y) >= eps));
}

double Dot (const Rpol& lhs, const Rpol& rhs){
    Rdec new_lhs = ToDec(lhs);
    Rdec new_rhs = ToDec(rhs);
    return (new_lhs.x * new_rhs.x + new_lhs.y * new_rhs.y);
}

double Norm (const Rpol& lhs){
    Rdec new_lhs = ToDec(lhs);
    return (sqrt(new_lhs.x * new_lhs.x + new_lhs.y * new_lhs.y));
}
