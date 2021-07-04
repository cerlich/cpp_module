#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int		Account::_nbAccounts;
int		Account::_totalAmount;
int		Account::_totalNbDeposits;
int		Account::_totalNbWithdrawals;

int Account::getNbAccounts (void)
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return(_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return(_totalNbWithdrawals);
}

Account::Account( int initial_deposit )
{
    _displayTimestamp();
    _accountIndex = getNbAccounts();
    _amount = initial_deposit;
    _totalAmount += _amount;
    std::cout << "index:" << _accountIndex << ";"
            << "amount:" << _amount << ";"
            << "created" << std::endl;
    _nbAccounts += 1;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
        << "amount:" << _amount << ";"
        << "closed" << std::endl;
}
void Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";"
            << "total:" <<  getTotalAmount() << ";"
            << "deposits:" << getNbDeposits() << ";"
            << "withdrawals:" << getNbWithdrawals() << std::endl;
    _totalAmount = 0;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
            << "amount:" << _amount << ";"
            << "deposits:" << _nbDeposits << ";"
            << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    _nbDeposits = 1;
    std::cout << "index:" << _accountIndex << ";"
            << "p_amount:" << _amount << ";"
            << "deposit:" << deposit << ";";
    _amount += deposit;
    std::cout << "amount:" << _amount << ";"
            << "nb_deposits:" << _nbDeposits << std::endl;
    _totalAmount += _amount;

    _totalNbDeposits += 1;
}

bool Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
            << "p_amount:" << _amount << ";"
            << "withdrawal:";
    if (withdrawal > _amount)
    {
        std::cout << "refused" << std::endl;
        _nbWithdrawals = 0;
        _totalAmount += _amount;
        return (false);
    }
    else
    {
        _nbWithdrawals = 1;
        _amount -= withdrawal;
        std::cout << withdrawal << ";"
            << "amount:" << _amount << ";"
            << "nb_withdrawal:" << _nbWithdrawals << std::endl;
        _totalNbWithdrawals += 1;
        _totalAmount += _amount;
        return (true);
    }
}

int Account::checkAmount( void ) const
{
    return (0);
}


void Account::_displayTimestamp( void )
{
    struct tm *u;
    time_t now = time(0);
    u = localtime(&now);

    //std::cout << "[" << 1900 + ltm->tm_year << ltm->tm_mon << ltm->tm_mday
    //        << "_" << ltm->tm_hour << ltm->tm_min << ltm->tm_sec
    //        << "] ";
    std::cout << std::put_time(u, "[%Y%m%d_%H%M%S] ");
}