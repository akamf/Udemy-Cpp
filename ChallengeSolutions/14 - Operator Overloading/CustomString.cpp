#include "CustomString.h"


std::ostream& operator<<(std::ostream& os, const CustomString& obj)
{
    os << obj.p_str;
    return os;
}
std::istream& operator>>(std::istream& in, CustomString& obj)
{
    char* tmp = new char[1000];
    in >> tmp;
    obj = CustomString{tmp};
    delete [] tmp;
    return in;
}


CustomString::CustomString() : p_str{nullptr}
{
    p_str = new char[1];
    *p_str = '\0';
}
CustomString::CustomString(const char* str) : p_str{nullptr}
{
    if (str == nullptr)
    {
        p_str = new char[1000];
        *p_str = '\0';
    }
    else
    {
        p_str = new char[std::strlen(str) + 1];
        std::strcpy(this->p_str, str);
    }
}
CustomString::CustomString(const CustomString& source) : p_str{nullptr}
{
    p_str = new char[source.get_length() + 1];
    std::strcpy(this->p_str, source.p_str);
}
CustomString::CustomString(CustomString&& source) : p_str{source.p_str}
{
    source.p_str = nullptr;
}
CustomString::~CustomString()
{ 
    delete [] p_str;
}

CustomString& CustomString::operator=(const CustomString& obj)
{
    if (this == &obj)
        return *this;
    
    delete [] p_str;
    p_str = new char[obj.get_length() + 1];
    std::strcpy(this->p_str, obj.get_str());
    return *this;
}
CustomString& CustomString::operator=(CustomString&& obj)
{
    if (this == &obj)
        return *this;

    delete [] p_str;
    p_str = obj.p_str;
    obj.p_str = nullptr;
    return *this;
}

CustomString CustomString::operator-() const
{
    char* tmp = new char[this->get_length() + 1];
    std::strcpy(tmp, this->get_str());

    for (size_t i=0; i < std::strlen(tmp); i++)
        tmp[i] = std::tolower(tmp[i]);

    CustomString tmp_str{tmp};
    delete [] tmp;
    return tmp_str;
}
CustomString CustomString::operator+(const CustomString& obj) const
{
    char* tmp = new char[this->get_length() + obj.get_length() + 1];
    std::strcpy(tmp, this->get_str());
    std::strcat(tmp, obj.get_str());

    CustomString tmp_str{tmp};
    delete [] tmp;
    return tmp_str;
}
CustomString& CustomString::operator+=(const CustomString& obj)
{
    *this = *this + obj;
    return *this;
}
CustomString CustomString::operator*(int n) const
{
    CustomString tmp{};
    for (size_t i=1; i <= n; i++)
        tmp += *this;
    return tmp;
}
CustomString& CustomString::operator*=(int n)
{
    *this = *this * n;
    return *this;
}
CustomString& CustomString::operator++()
{
    for (size_t i=0; i < this->get_length(); i++)
        p_str[i] = std::toupper(p_str[i]);
    return *this;
}
CustomString CustomString::operator++(int)
{
    CustomString tmp{*this};
    tmp++;
    return tmp;
}


bool CustomString::operator==(const CustomString& obj) const { return std::strcmp(this->get_str(), obj.get_str()) == 0; }
bool CustomString::operator!=(const CustomString& obj) const { return std::strcmp(this->get_str(), obj.get_str()) != 0; }
bool CustomString::operator<(const CustomString& obj) const { return std::strcmp(this->get_str(), obj.get_str()) < 0; }
bool CustomString::operator>(const CustomString& obj) const { return std::strcmp(this->get_str(), obj.get_str()) > 0; }