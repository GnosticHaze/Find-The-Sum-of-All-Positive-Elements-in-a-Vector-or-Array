#include <iostream>
#include <string>
#include <vector>

int findPositiveSumOfElements( const std::vector<int>& nums ) {
	int sumOfPositive {};

	for ( auto i = 0; i < nums.size(); i++ ) {
		if ( nums[ i ] > 0 ) {
			sumOfPositive += nums[ i ];
		}
	}

	return sumOfPositive;
}

int main( int argc, char* arv[] ) {

	std::vector<int> nums { 25, 78, 12, 9, 5 };

	std::cout << findPositiveSumOfElements( nums ) << std::endl;
}
