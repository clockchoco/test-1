#include<iostream>
int main()
{
	auto a = [](){
		std::cout << "hi\n";
	};
	a();
	return 0;
}
