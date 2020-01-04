#include <iostream>
using namespace std;
class MyPoint {
public:
	void setPoint(int _x1, int _y1) {
		x1 = _x1;
		y1 = _y1;
	}
	int getX1() {
		return x1;
	}
	int getY1() {
		return y1;
	}
protected:
private:
	int x1;
	int y1;

};
class AdvCircle {
public:
	void setCircle(int _r, int _x0, int _y0) {
		r = _r;
		x0 = _x0;
		y0 = _y0;
	}
	int judge(MyPoint &myp) {
		int d = (x0 - myp.getX1())*(x0 - myp.getX1()) + (y0 - myp.getY1()*(y0 - myp.getY1()));
		if (d <= r) {
			return 1;
		}
		else {
			return 0;
		}
	}
protected:
private:
	int r;
	int x0;
	int y0;

};
int main() {
	AdvCircle c1;
	MyPoint p1;
	c1.setCircle(2, 3, 3);
	p1.setPoint(7, 7);
	int jud=c1.judge(p1);
	if (jud == 0) {
		cout << "点在圆外" << endl;
	}
	else {
		cout << "点在圆内" << endl;
	}

}