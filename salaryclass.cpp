#include<iostream>
using namespace std;
class company{
	int salary;
	public:
		int getsalary(int fsalary, int osalary)
		{ salary=fsalary+osalary;
		}
		int display(){
			cout<<"salary is "<<salary;
		}
};
int main()
{
	company c;
	c.getsalary(60000,30000);
	c.display();
	return 0;
}
