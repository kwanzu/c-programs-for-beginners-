#include <iostream>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <iomanip>
#define MAX 1000
using namespace std;
const int cd= 9988;
class Calculator{

public:
    Calculator(){
    cout<<"1. Factorial\n"
        <<"2. S. Arithmetic\n"
        <<"3. nth-Root\n"
        <<"4. GCD\n"
        <<"5. LCM\n"<<endl;
    }

    signed int factorial(int );
     int gcd( int , int);
     int lcm(int, int);
     int computeLcm(int , int);
    double sArith(double , char , double);
    double power(double , double);
    int computeGcd(int , int );
    int checkGcd(int,int );
};

int main(){

int choose,vc;//picks a role in the menu
cout<<"pass code: ";
cin>>vc;
if(vc==cd){
Calculator calc;
cin>>choose;
switch(choose){

    case 1:
    int val;
    cout<<"Factorial:\n";
    cin>>val;
    cout<<val<<"! ="<<calc.factorial(val)<<endl;
     break;

     case 2:
     double first,sec;
     char oper;
     cout<<"Arithmetic:\n";
     cin>>first>>oper>>sec;
     cout<<first<<oper<<sec<<"= "<<calc.sArith(first, oper,sec)<<endl;
     break;

     case 3:
     cout<<"nth-Root:\n";
     double b,i;
     cin>>b>>i;
     cout<<b<<"^"<<i<<"= "<<calc.power(b,i)<<endl;
     break;

     case 4:
     cout<<"GCD:\n";
     int val1,val2;
     cin>>val1>>val2;
     cout<<calc.checkGcd(val1,val2)<<"= ("<<val1<<","<<val2<<")"<<endl;
     break;

     case 5:
     int valm1,valm2;
     cout<<"LCM:\n";
     cin>>valm1>>valm2;
     cout<<calc.lcm(valm1,valm2)<<"= ["<<valm1<<","<<valm2<<"]"<<endl;
     break;


     default:
     cout<<"Not in the menu"<<endl;
}

getch();
system("cls");
main();
}
return 0;
}

signed int Calculator::factorial(int val){//factorial finder

  int fact;
	if (val == 0)
		return 1;
	else
		fact = val * factorial(val - 1);
  return fact;


}

double Calculator::sArith(double f , char o , double s){//Simple Arithmetic
//if(isdigit(f) && isdigit(s) && isalpha(o)){
switch(o){
  case '+':
  return (f+s);
  break;

  case '-':
  return (f-s);
  break;

  case '*':
  return (f*s);
  break;

  case '/':
  return (f/s);
  break;

  case '%':
  return ((int)f % (int)s);
  break;
  default:
return EOF;

}

}
//}

double Calculator::power(double base, double index){

    return pow(base,index);
};

int Calculator::computeLcm(int f,int g){

	int get1[MAX],get2[MAX];
	int mult=1, i;//co-efficient (multiplier)
	for(mult; mult<=MAX; mult++)//cipher and store all multiples of f<= size(1000)
		get1[mult-1]=f*mult;

	for(mult=1;mult<=MAX; mult++)//cipher and store all multiples of g<=size(1000)
		get2[mult-1]=g*mult;

	for(mult=0; mult<MAX; mult++){		//gets a new value of get2 to compare with existing value of get1
		for(i=0; i<MAX; i++){			//gets a new value of get1 to be compared with new value of get2
			if(get1[i] == get2[mult]){ 	//compares get1 if equals get2
			 return get1[i];			//returns first value that compared i.e least common multiple

			}
	 }
	}

}


int Calculator::lcm(int m, int n){//exception handling
	if(m==0 && n != 0)
		return n<0 ? n=-n: n;//returns +ve for -ve n
	else if(n==0 && m != 0)
		return m<0 ? m=-m: m;//returns +ve for -ve m

	else if(m <0 && n>0){
		m=-m;
		return Calculator::computeLcm(m,n);
	}
	else if(n <0 && m>0){
		n=-n;
		return Calculator::computeLcm(m,n);
	}
	else if(m <0 && n<0){
		m=-m;
		n=-n;
		return Calculator::computeLcm(m,n);
	}
	else
		return Calculator::computeLcm(m,n);

};


int Calculator::checkGcd(int f,int g){//checks and changes a negative input to positive input and return gcd
	if(f==0 && g==0)
		return 1;
	else if(f==0)
		return (g<0 ? (g=-g): g);//converts g to +ve g if negative

	else if(f<0 && g>=0){
			f=(-f);
		return Calculator::computeGcd(f,g);
	}

		else if(g<0 && f>=0){
			g=(-g);
			return Calculator::computeGcd(f,g);
	}

		else if(f<0 && g<0){
			f=(-f),g=(-g);
			 return Calculator::computeGcd(f,g);
	}
	else
		return Calculator::computeGcd(f,g);
}

int Calculator::computeGcd(int f, int g){//finds and returns a gcd of the numbers passed by check(a,b) function
	int get[100],d,count=0;
	for(d=1; d<=f; d++){ 	//a value of 'f' or 'g' could be in the condition 'd <= [a|b]'
		if(f%d==0 && g%d==0){	//since gcd of n-numbers is never greater than the smallest number in the tuple e.g gcd = (a,b) --> 3 = (6,9)

		get[count++]=d;
	}
	}

	return get[count-1];//-1 for it to return value in the current index and not
						// a memory address of a non-existing value in the next index
};
