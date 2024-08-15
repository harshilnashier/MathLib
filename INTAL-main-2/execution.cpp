#include "implementation.cpp"

int main(){

	cout<<"========================BASIC ARITHMATIC OPERATIONS => Addition, Subtraction, Multiplication, Division========================"<<endl<<endl;
	cout<<
		"INTAL a = 99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"<<endl<<
		"INTAL b = 2345678987654345678987654345678987654567898765456781234567890987654321234567890987654324567898765432456787654"<<endl<<
		"int c = 2"
	<<endl<<endl;
	
	INTAL a("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
	INTAL b("2345678987654345678987654345678987654567898765456781234567890987654321234567890987654324567898765432456787654");
	int c = 2;
	
	cout<<"Addition of INTAL with INTAL a+b = "<<endl<<a+b<<endl;
	cout<<"Addition of INTAL with int a+c = "<<endl<<a+c<<endl<<endl;

	cout<<"Subtraction of INTAL with INTAL a-b = "<<endl<<a-b<<endl;
	cout<<"Subtraction of INTAL with int a-c = "<<endl<<a-c<<endl<<endl;	

	cout<<"Multiplication of INTAL with INTAL a x b = "<<endl<<a*b<<endl;
	cout<<"Multiplication of INTAL with int a x c = "<<endl<<a*c<<endl<<endl;	

	cout<<"Division of INTAL with INTAL a/b = "<<endl<<a/b<<endl;
	cout<<"Division of INTAL with int a/c = "<<endl<<a/c<<endl<<endl<<endl<<endl<<endl<<endl;	


	cout<<"========================Factorial========================"<<endl<<endl;
	cout<<
		"INTAL x = 200"<<endl<<
		"int y = 110"
	<<endl<<endl;
	
	INTAL x("200");
	int y = 110;
	INTAL temp;
	cout<<"Factorial of INTAL x!= "<<endl<<temp.factINTAL(x)<<endl;
	cout<<"Factorial of int y! = "<<endl<<temp.factINTAL(y)<<endl<<endl<<endl<<endl<<endl<<endl;	



	cout<<"======================== Maximum Minimum ========================"<<endl<<endl;
	cout<<
		"INTAL p = 4626735673256235235726527652765237257625275"<<endl<<
		"INTAL q = 4626735673256235235726527652765237257629999"
	<<endl<<endl;
	
	INTAL p("4626735673256235235726527652765237257625275");
	INTAL q("4626735673256235235726527652765237257629999");
	INTAL temp2;
	cout<<"Maximum of p and q = "<<endl<<temp2.maxINTAL(p,q)<<endl;
	cout<<"Minimum of p and q = "<<endl<<temp2.minINTAL(p,q)<<endl<<endl<<endl<<endl<<endl<<endl;	

	int zz;
	cin>>zz;	
}
