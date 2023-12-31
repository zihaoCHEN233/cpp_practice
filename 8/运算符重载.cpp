#include<iostream>
using namespace std;

class Person {
public:
	// Person operator+ (Person &p) {
	// 	Person temp;
	// 	temp.m_A = this->m_A + p.m_A;
	// 	temp.m_B = this->m_B + p.m_B;
	// 	return temp;
	// }
	int m_A, m_B;

};

Person operator+(Person &p1, Person &p2) {
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

Person operator+(Person &p1, int number) {
	Person temp;
	temp.m_A = p1.m_A + number;
	temp.m_B = p1.m_B + number;
	return temp;
}

void test() {
	Person p1;
	Person p2;
	p1.m_A = 10;
	p1.m_B = 10;
	p2.m_A = 20;
	p2.m_B = 20;
	Person p3 = p1 + p2;
	Person p4 = p1 + 60;
	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;
	cout << p4.m_A << endl;
	cout << p4.m_B << endl;
}

int main() {
	test();
	system("pause");
	return 0;
}