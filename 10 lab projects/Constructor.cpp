//CONSTRUCTOR IN C++
//It is a special member function which is used to initialize value of a variable inside an object
// A constructors name is same as the class name 
// A constructor is  automatically invoked as soon as an object of its class is created.
//A constructor hasn't any return type not even "void".

//There are three type of constructor i.e 1.)Default constructor 2.)Parametrized constructor and 3.) Copy constructor



// default constructor have no argument

//#include<iostream>
//using namespace std;
//class demo{
//	int a,b;
//	public:
//		demo(){
//			a=10;
//			b=20;
//		}
//		void putdata();
//};
//void demo::putdata(){
//	cout<<"The sum is:"<<a+b<<endl;
//}
//int main()
//{
//	demo aa;
//	aa.putdata();
//	return 0;
//}




//Parametrized constructor
//A constructor having argument is called parameterizwd constructor

//#include<iostream>
//using namespace std;
//class demo{
//	int a,b;
//	public:
//	demo(int m,int n ){
//			a=m;
//			b=n;
//		}
//	void putdata(){
//		cout<<"\na="<<a<<"\nb="<<b;
//	}
//
//};
//int main()
//{
//	demo aa(10,20);
//	aa.putdata();
//	return 0;
//}




//copy constructor
// when we need to initialize the variables of an object with the value of variable of another object of same type then we use the concept of copy constructor
#include<iostream>
using namespace std;
class demo{
	int a;
	public:
	demo( ){
			a=10;
		}
		demo(demo&z){
			a=z.a;
		}
	void putdata(){
		cout<<"\nA="<<a;
	}
};
int main()
{
	demo aa;
	demo bb(aa);
	aa.putdata();
	bb.putdata();
	return 0;
}



