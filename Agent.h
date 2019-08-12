#pragma once

#include <vector>

class Program;


class Thing
{

};

class Agent
{
public:
	Agent( Program* program ) noexcept;
	virtual ~Agent( void ) noexcept;

	virtual const bool			canGrap( const Thing& thing ) noexcept;


private:

	bool				_alive;
	bool				_bump;
	std::vector<int>	_holding;
	int					_performance;
	Program*			_program;

};