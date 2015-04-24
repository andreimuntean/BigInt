#ifndef BIGINT_H
#define BIGINT_H
#include <vector>

using std::string;
using std::vector;

// Represents an integer value with unlimited precision.
class BigInt
{
    private:
        // Represents a big number expressed as an array of digits.
        vector<unsigned short> digits;

        // Represents the sign of the number.
        short sign;

    public:
        BigInt();
        BigInt(int);
        short getSign();
        string toString();

        // Assignment.
        void operator=(const BigInt&);
        void operator=(int);

    // Addition.
    friend BigInt operator+(const BigInt&, const BigInt&);
    friend BigInt operator+(const BigInt&, int);
    friend BigInt operator+(int, const BigInt&);

    // Subtraction.
    friend BigInt operator-(const BigInt&, const BigInt&);
    friend BigInt operator-(const BigInt&, int);
    friend BigInt operator-(int, const BigInt&);

    // Comparisons.
    friend bool operator==(const BigInt&, const BigInt&);
    friend bool operator!=(const BigInt&, const BigInt&);
    friend bool operator>(const BigInt&, const BigInt&);
    friend bool operator<(const BigInt&, const BigInt&);
    friend bool operator>=(const BigInt&, const BigInt&);
    friend bool operator<=(const BigInt&, const BigInt&);
};

#endif // BIGINT_H