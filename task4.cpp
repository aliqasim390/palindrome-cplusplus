#include<iostream>
#include<conio.h>
using namespace std;
class Shape{
	protected:
		double length;
		double width;
		double area;
	public:
		void printArea(){
			cout<<"Area : "<<area<<endl;
		}
};
class Rect : public Shape{
	public:
		void Area(){
			cout<<"Enter Length : "<<endl;
			cin>>length;
			cout<<"Enter Width : "<<endl;
			cin>>width;
			area=length*width;
		}
};
int main(){
	Rect r1;
	r1.Area();
	r1.printArea();
	getch();
}
