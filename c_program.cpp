#include<iostream.h>
using namespace std;


class Add{
	private:
		int a;
		int b;
	public:
		void getData(int x , int y){
		a=x;
		y=b;
		}
		int addNumbers(){
		int r;
		r=a+b;
		return r;
		}

};
void main(){
Add obj1;
obj1.getData(4,5);
int result;
result = obj1.addNumbers();
cout<<"result is :"<<result;

}
