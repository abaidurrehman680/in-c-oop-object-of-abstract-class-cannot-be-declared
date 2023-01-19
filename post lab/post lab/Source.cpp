#include<iostream>
using namespace std;
class shape {
public:
	shape(){}
	virtual void calculatearea() = 0;
	void printArea() {
		cout << "prinr area of shape" << endl;
	}
};
class twoDim :public shape {
public:
	twoDim(){}
	virtual void twoDimArea() = 0;
	void calculateArea() {
		cout << "calculate area of two dimensional" << endl;
	}
};
class threeDim :public shape {
public:
	threeDim(){}
	virtual void threeDimarea() = 0;
	void calculateArea() {
		cout << "calculate area of three dimensional" << endl;
	}
};
class triangle :public twoDim {
public:
	triangle(){}
	void printArea() {
		cout << "area of triangle" << endl;
	}
	void calculateTwoDimArea() {
		cout << "two dimensional area of triangle" << endl;
	}
};
class circle :public twoDim {
public:
	circle(){}
	void printArea() {
		cout << "area of circle" << endl;
	}
	void calculateTwoDimArea() {
		cout << "two dimensional area of circle" << endl;
	}
};
class rectangle :public twoDim {
public:
	rectangle(){}
	void printArea() {
		cout << "area of rectangle" << endl;
	}
	void calculateTwoDimArea() {
		cout << "two dimensional area of rectangle" << endl;
	}
};
class cube :public threeDim {
public:
	cube(){}
	void printArea() {
		cout << "area of cube" << endl;

	}
	void calculateThreeDimArea() {
		cout << "three dimensional area of cube" << endl;
	}
};
class cone :public threeDim {
public:
	cone(){}
	void printArea() {
		cout << "area of cone" << endl;
	}
	void calculateThreeDimArea() {
		cout << "three dimensional area of cone" << endl;
	}
};
int main() {
	shape* obj1 = new shape();//object of abstract class type shape is not allowed
	twoDim* obj2 = new twoDim();//object of abstract class type shape is not allowed
	threeDim* obj3 = new threeDim();//object of abstract class type shape is not allowed
	twoDim* obj4 = new circle();//object of abstract class type shape is not allowed
	twoDim* obj5 = new triangle();//object of abstract class type shape is not allowed
	circle* obj6 = new circle();//object of abstract class type shape is not allowed
	rectangle* obj7 = new rectangle();//object of abstract class type shape is not allowed
	cube* obj8 = new cube();//object of abstract class type shape is not allowed
	cone* obj9 = new cone();//object of abstract class type shape is not allowed
	obj7->printArea();
	obj8->printArea();
	obj9->printArea();
	obj8->calculateThreeDimArea();
	obj6->calculateTwoDimArea();

	return 0;
}