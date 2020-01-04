// 课堂操练.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class MyCircle {
public:
	double m_r;//属性 成员变量
	double m_s;//
public:
	double getR() {
		return m_r;
	}
	void setR(double r) {  //成员函数
		m_r = r;
	}
	double getS() {
		m_s = 3.14*m_r*m_r;
		return m_s;
	}
};
void printCircle01(MyCircle *pC) {
	printf("%f\n", pC->getS());
}
void printCircle02(MyCircle &mpC) {
	cout << mpC.getS();
}
void printCircle03(MyCircle myc) {

}
int main类的封装第一层含义()
{
	MyCircle c1, c2;
	c1.setR(10);
	printCircle01(&c1);
	c2.setR(20);
	printCircle01(&c2);

	//引用
	printCircle02(c2);
	return 0;
}
