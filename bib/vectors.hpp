#include <iosfwd>

struct Rdec {
    double x = 0.0;
    double y = 0.0;
};

const double eps = std::numeric_limits<double>::epsilon();


struct Rpol{
    double r = 0.0;
    double ang = 0.0;
};

std::ostream& operator<<(std::ostream &ostrm,  const Rdec &r);

std::ostream& operator<<(std::ostream &ostrm,  const Rpol &r);

Rpol ToPol(Rdec dec);

Rdec ToDec(Rpol pol);

Rdec operator+=(Rdec& lhs, const Rdec& rhs);

Rdec operator-=(Rdec& lhs, const Rdec& rhs);

Rdec operator*=(Rdec& lhs, const double& rhs);

Rdec operator/=(Rdec& lhs, const double& rhs);

Rdec operator+(const Rdec& lhs, const Rdec& rhs);

Rdec operator-(const Rdec& lhs, const Rdec& rhs);

Rdec operator*(const Rdec& lhs, const double& rhs);

Rdec operator/(const Rdec& lhs, const double& rhs);

Rdec operator-(const Rdec& lhs);

Rpol operator+=(Rpol & lhs, const Rpol & rhs);

Rpol operator-=(Rpol & lhs, const Rpol & rhs);

Rpol operator*=(Rpol & lhs, const double & rhs);

Rpol operator/=(Rpol & lhs, const double & rhs);

Rpol operator+(const Rpol &lhs, const Rpol &rhs);

Rpol operator-(const Rpol &lhs, const Rpol &rhs);

Rpol operator*(const Rpol &lhs, const double &rhs);

Rpol operator/(const Rpol &lhs, const double &rhs);

Rpol operator-(const Rpol& lhs);

bool operator==(const Rdec& lhs, const Rdec& rhs);

bool operator!=(const Rdec& lhs, const Rdec& rhs);

bool operator==(const Rpol& lhs, const Rpol& rhs);

bool operator!=(const Rpol& lhs, const Rpol& rhs);

double Dot (const Rdec& lhs, const Rdec& rhs);

double Norm (const Rdec& lhs);

double Dot (const Rpol& lhs, const Rpol& rhs);

double Norm (const Rpol& lhs);


