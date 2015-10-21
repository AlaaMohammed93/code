#include <iostream>
#include <string>
using namespace std;
class person{
private:
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];

public:
	person() { lname = ""; fname[0] = '\0'; }
	person(const string & ln, const char * fn = "Heyyou")
	{
		lname = ln;
		for (int i = 0; i < 25; i++)
		{
			fname[i] = fn[i];
		}
	}

	void show() const;
	void FormalShow() const;
};
void person::show() const
{
	cout << fname << " " << lname;
}
void person :: FormalShow() const
{
		cout << lname << " " << fname;
}


void main()
{
	person one;
	one.show();
	cout << "\n";
	one.FormalShow();
	person two("smythecraft");
	two.show();
	cout << "\n";
	two.FormalShow();
	cout << "\n";
	person three("Dimwiddy", "sam");
	three.show();
	cout << "\n";
	three.FormalShow();
	cout << "\n";
	system("pause");
}
