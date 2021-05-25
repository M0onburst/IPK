#include <cmath>
#include <iostream>

double mitternachtsformel (double a, double b, double c) {
	
	double root = std::sqrt(b*b-4*a*c);
	double solution;
	double x1;
	double x2;
	std::cout << root << std::endl;
	if ( root < 0 ) {
		std::cout << "Diskriminante negativ. Keine Lösung!" << std::endl;
		return 0;
	}
	if ( root == 0) {
		solution = -b/2*a;
		return solution;
	}
	else { 
		x1 = (-b + root) / 2*a;
		x2 = (-b - root) / 2*a;
		std::cout << "x1 = " << x1 << " " << "x2 = " << x2 << std::endl;
		
}
return 0;
}
	


int main(int argc, char** argv)
{
	double a;
	double b;
	double c;
	std::cout << "a=" << std::flush;
	std::cin >> a;
	std::cout << "b=" << std::flush;
	std::cin >> b;
	std::cout << "c=" << std::flush;
	std::cin >> c;
	
	double endsolution = mitternachtsformel(a,b,c);
	std::cout << "Ergebnis: " << endsolution << std::endl; 
}