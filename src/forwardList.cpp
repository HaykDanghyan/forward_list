#include "forward.h"
#include <algorithm>
#include <numeric>
int main() {	
	forward_list<int> f1 {4, 5, 2, 3, 6, 1};
	f1.sort();
	for (const auto& elem : f1) {
		std::cout << elem << "   ";
	}
	std::cout << std::endl;
	forward_list<double> f2(3, 3.14);
	for (auto it = f2.begin(); it != f2.end(); ){
		std::cout << *it++ << "  ";
	}
	std::cout << std::endl;
	std::for_each(f1.begin(), f1.end(), [](const auto& n) {std::cout << n << "  \n";});
	std::cout << "Sum(f1) : " << std::accumulate(f1.begin(), f1.end(), 0) << std::endl;
	f2.push_front(59.94);
	std::cout << "Sum(f2) : " << std::accumulate(f2.begin(), f2.end(), 0) << std::endl;
	return 0;
}
