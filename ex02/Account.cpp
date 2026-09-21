#include "Account.hpp"
#include <iostream>

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	//timestamps
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total" << _totalAmount << ";";
	std::cout << "deposits" << _totalNbDeposits << ";";
	std::cout << "withdrawals" << _totalNbWithdrawals << ";";
}

Account::Account( int initial_deposit )
{
	if (!_nbAccounts)
		_nbAccounts = 1;
	else
		_nbAccounts++;
	_amount = initial_deposit;
	if (!_totalAmount)
		_totalAmount = 0;
	else
		_totalAmount += _amount;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	_accountIndex = _nbAccounts - 1;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

void	Account::makeDeposit( int deposit )
{
	_amount += deposit;
	_nbDeposits += deposit;
	_totalNbDeposits += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_amount -= withdrawal;
	_nbWithdrawals += withdrawal;
	_totalNbWithdrawals += withdrawal;
	//comprendre pourquoi ca retourne un bool
	return 
}
