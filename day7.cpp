//WAP to display multiplication table upto 10
[200~#include<iostream>
using namespace std;
int main(){
		int n;
			cout<<"enter a number:";
				cin>>n;

					for(int i=1; i<=10; ++i){
								cout<<n<<"*"<<i<<"="<<n*i<<endl;
									}
						return 0;
}
//WAP to add only positive nos.
#include<iostream>
using namespace std;
int main(){
	int number;
	int sum=0;
	cout<<"enter a number:";
	cin>>number;

	while(number>=0){
		sum+=number;
		cout<<"enter a number:";
		cin>>number;
	}
	cout<<"\n the sum is"<<sum<<endl;

	return 0;
}
//WAP to print all odd nos. til n
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number:";
	cin>>n;

	for (int i-1; i<=n; i++){
		if(n%2==0){
			continue;
		}
		cout<<i<<endl;
	}
	return 0;
}

//WAP to find whether an alphabet ia a vowel or a consonan#include<iostream>
using namespace std;
int main(){
	char c;
	cout<<"enter a alphabet:";
	cin>>c;

	switch(c)
	{
		
		
		case'a':
		cout<<"It is a vowel"<<endl;
		break;
		
		case'e':
		cout<<"It is a vowel"<<endl;
		break;
		
		case'i':
		cout<<"It is a vowel"<<endl;
		break;
		
		case'o':
		cout<<"It is a vowel"<<endl;
		break;
		
		case'u':
		cout<<"It is a vowel"<<endl;
		break;
	}
	return 0;
}


#include<stdio.h>
int main()
{
int a = 5;
a = 1, 2, 3;
printf("%d", a);
return 0;
}

//(Priority for the values assigned to any variable is given from left to right)


