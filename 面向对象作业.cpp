/*#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int n;
struct student{
	char name[10];
	float yuwen;
	float shuxue;
	float english;
	
	
}stu[10];

int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>stu[i].name>>stu[i].yuwen>>stu[i].shuxue>>stu[i].english;
		
	}
	cout << fixed << setprecision(2); 
	for(int i=1;i<=n;i++)
	{
		cout<<stu[i].name<<' '<<stu[i].yuwen<<' '<<stu[i].shuxue<<' '<<stu[i].english<<' '<<(stu[i].english+stu[i].shuxue+stu[i].yuwen)/3;
	//	cout<<n; 
	if((stu[i].english+stu[i].shuxue+stu[i].yuwen)/3>=90)
cout<<' '<<"Excellent"<<'\n';
else
cout<<'\n';
	}
	

}

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int countVowels(const char* p) 
{int num=0;
//const char *j=p;
while(*p!='\0'){

	if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
	num++;
	p++;
	}
	return num;
}

int main()
{
	char name[20];
	cin>>name;
cout<<"Number of vowels:"	<<countVowels(name);
//cout<<strlen(name);	
}


#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

inline double square(double x)
{
	return x*x;
	
	
}
double power(double base, int exponent = 2){
	return pow(base,exponent);
	
	
}

double calc(double a, double b, char op){
	switch(op){
	case'+':return a+b;
	case'-':return a+b;
	case'*':return a+b;
	case'/':if(b==0)
	cout<<"Error: divide by zero";
	else return a/b
	
	}
	
	
}

double calc(int a,  b, char op){
	switch(op){
	case'+':return a+b;
	case'-':return a+b;
	case'*':return a+b;
	case'/':
	
	
	 return a/b;
	
	}
	
	
}

int main()
{
double a,b;
char op;
cin>>a>>b>>op;	
if(b==0&&op=='/')
cout<<Error: divide by zero" ;
	else cout<<calc(a,b,op);
	
	
}

*/

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;


void swap(int& x, int& y){
	int temp=x;
	x=y;
	y=temp;
	
	
}

void swap(int* x, int* y){
	int* temp=x;
	x=y;
	y=temp;
	
	
}

int main()
{int a,b;
cin>>a>>b;
cout<<"Before swap:"<<a<<b<<'\n';
cout<<"after swap:";
	swap(a,b);
	cout<<a<<' '<<b<<' '; 
	swap(&a,&b);
	cout<<a<<' '<<b;
	
 } 




