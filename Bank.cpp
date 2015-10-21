#include<iostream>
using namespace std;
class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);
	double showmove() const;
	Move add(const Move & m) const;
	double reset(double a = 0, double b = 0);

};
Move::Move(double a, double b)
{
	x = a;
	y = b;
}

double Move::showmove() const
{
	cout << "X = ";
	return x;
	cout << "\n" << "Y = ";
	return y;
	std::cout << "\n";
}
double Move::reset(double a, double b)
{
	x = 0;
	y = 0;
	return x;
	return y;
}
int main()
{
	Move test (2.3 , 5.6);
	test.showmove();
	cout<<"\n";
	Move test2(26.5, 88.4);
	test =test.add(test2);
	test.showmove();
	cout << "\n";
	test.reset();
	cout << "\n";
	test.showmove();
	system("pause");
	
}
