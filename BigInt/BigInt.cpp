#include "BigInt.h"

using std::string;

BigInt::BigInt()
{
    // TO-DO.
}

BigInt::BigInt(int value)
{
    // TO-DO.
}

short BigInt::getSign()
{
    return sign;
}

string BigInt::toString()
{
    // TO-DO.
    return "";
}

void BigInt::operator=(const BigInt& value)
{
    // TO-DO.
}

void BigInt::operator=(int value)
{
    // TO-DO.
}

BigInt operator+(const BigInt &first, const BigInt &second)
{
    // TO-DO.
    return BigInt();
}

BigInt operator+(const BigInt &first, int second)
{
    return first + BigInt(second);
}

BigInt operator+(int first, const BigInt &second)
{
    return BigInt(first) + second;
}

BigInt operator-(const BigInt &first, const BigInt &second)
{
    // TO-DO.
    return BigInt();
}

BigInt operator-(const BigInt &first, int second)
{
    return first - BigInt(second);
}

BigInt operator-(int first, const BigInt &second)
{
    return BigInt(first) - second;
}

bool operator==(const BigInt &first, const BigInt &second)
{
    // TO-DO.
    return false;
}

bool operator!=(const BigInt &first, const BigInt &second)
{
    return !(first == second);
}

bool operator>(const BigInt &first, const BigInt &second)
{
    // TO-DO.
    return false;
}

bool operator<(const BigInt &first, const BigInt &second)
{
    // TO-DO.
    return false;
}

bool operator>=(const BigInt &first, const BigInt &second)
{
    // TO-DO.
    return false;
}

bool operator<=(const BigInt &first, const BigInt &second)
{
    // TO-DO.
    return false;
}