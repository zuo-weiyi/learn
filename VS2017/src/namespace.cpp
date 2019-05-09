#include "iostream"

using namespace std;

namespace nameA
{
	int a = 10;
	int b = 25;
}

namespace nameB
{
	int a = 20;

	namespace nameC
	{
		struct student
		{
			int age;
			char name[20];
		};
	}
}

int main()
{
	cout << "namespace std" << endl;
	//因为前面声明了using namespace std，所以可以直接使用cout，不然需要std::cout

	using namespace nameA;

	using namespace nameB;

	cout << "namespace nameA b = " << b << endl;

	cout << "namespace nameA a = " << nameA::a << endl;

	cout << "namespace nameB a = " << nameB::a << endl;

	//显示的
	nameB::nameC::student st;
	st.age = 15;

	using nameB::nameC::student;
	student st1;
	st1.age = 14;
	system("pause");
	return 0;
}