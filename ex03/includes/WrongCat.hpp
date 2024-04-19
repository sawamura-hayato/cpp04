#ifndef EX03_WRONGCAT_HPP_
#define EX03_WRONGCAT_HPP_

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
public:
	WrongCat( void );
	WrongCat( const WrongCat& other );
	WrongCat& operator=( const WrongCat& other );
	~WrongCat( void );
};

#endif
