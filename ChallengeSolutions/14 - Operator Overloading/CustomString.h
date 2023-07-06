#ifndef _CUSTOMSTRING_H_
#define _CUSTOMSTRING_H_


#include <cstring>
#include <iostream>

class CustomString
{
    friend std::ostream& operator<<(std::ostream& os, const CustomString& obj);
    friend std::istream& operator>>(std::istream& in, const CustomString& obj);

public:
    CustomString();
    CustomString(const char* str);
    CustomString(const CustomString& source);
    CustomString(CustomString&& source);
    ~CustomString();

    const char* get_str() const { return p_str; }
    int get_length() const { return std::strlen(p_str); }
    void display() const { std::cout << get_str() << " : " << get_length() << "\n"; }

    CustomString& operator=(const CustomString& obj);  // Copy Assignment
    CustomString& operator=(CustomString&& obj);  // Move Assignment

    CustomString operator-() const;  // Make string lowercase
    CustomString operator+(const CustomString& obj) const;  // Concatenate two or more strings
    CustomString& operator+=(const CustomString& obj);  // Concatenate and assign
    CustomString operator*(int n) const;  // Repeat str n times
    CustomString& operator*=(int n);  // Repeat n times and assign
    CustomString& operator++();  // Pre-increment, str uppercase
    CustomString operator++(int);  // Post-increment, str uppercase

    bool operator==(const CustomString& obj) const;  // str equality
    bool operator!=(const CustomString& obj) const;  // str not equality
    bool operator<(const CustomString& obj) const;  // str lesser than
    bool operator>(const CustomString& obj) const;  // str greater than

private:
    char* p_str;

};

#endif