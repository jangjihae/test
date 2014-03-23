#include <iostream>

using namespace std;
int Fib_func(int num);
int main()
{
	int input;
	int output;
	cout<<"Input number : ";
	cin>>input;
	

	output=Fib_func(input);
	cout<<"Fibonacci sequence : "<<output<<endl;

	system("pause");
	 
return 0;

}

int Fib_func(int num)
{
	if(num == 1) 
	{
		return 0;
	}
	if(num==2 || num==3)
	{	
		return 1;
	}

	
	return Fib_func(num-1)+Fib_func(num-2);          //1,2,3 아닐때 리턴값의 합 리턴.
	
}