#include <cmath>
#include <iostream>

void collatz(int number) {
	int x;
	x=number;
	while (x>1 && (x!=0 || x!=-5)) {
			if ( x % 2 == 0 ) {
			x=x/2;
		}
		else {
			x=x*3+1;
		}
	std::cout<<"Ergebnis: "<<x<<std::endl;
	}
}

		
int main(int argc, char** argv)
{
	int n;
	std::cout << "n=" << std::flush;
	std::cin >> n;
	
	collatz(n);
}
