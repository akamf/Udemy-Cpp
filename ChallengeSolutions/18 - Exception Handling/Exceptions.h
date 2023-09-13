#pragma once


class IllegalBalanceException : public std::exception
{
public:
    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() = default;

    virtual const char* what() const noexcept
    {
        return "Illegal Balance Exception";
    }
};

class InsufficientFundsException : public std::exception
{
public:
    InsufficientFundsException() noexcept = default;
    ~InsufficientFundsException() = default;

    virtual const char* what() const noexcept
    {
        return "Insufficient Funds Exception";
    }
};
