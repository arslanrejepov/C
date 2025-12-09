#include "stats.h"

int main() {
	int num;
	cout<<"Number of students(>5):";
	cin>>num;
	num=num<5?5:num;
	MovieStatistics m1(num);
	m1.print();
	return 0;
}
