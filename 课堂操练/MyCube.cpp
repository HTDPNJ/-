#include <iostream>
using namespace std;
class Cube
{
private:
	int m_a;
	int m_b;
	int m_c;
	int m_v;
	int m_s;

public:
	void setABC(int a,int b,int c) {
		m_a = a;
		m_b = b;
		m_c= c;
	}
	int getV() {
		m_v = m_a * m_b*m_c;
		return m_v;
	}
	int getS() {
		m_s = 2 * (m_a + m_b + m_c);
		return m_s;
	}


};

//全局函数判断两体积是否相等
int judge(Cube &v1,Cube &v2) {
	return 0;
}
void main202014() {
	Cube v1, v2;
	v1.setABC(1, 2, 3);
	cout << v1.getS() << endl;
	cout << v1.getV()<<endl;
	v2.setABC(1, 2, 4);
	if (judge(v1, v2) == 1) {
		cout << "相等" << endl;
	}
	else {
		cout << "不相等" << endl;
	}
}