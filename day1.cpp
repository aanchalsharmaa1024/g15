//find the max of three given nos.
# include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }else{
            cout<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<endl;
        }else{
            cout<<c<<endl;
        }
    }
    return 0;

}
//WAP to find if the given no. is even or odd
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n%2==0){
        cout<<"Even"<<endl;
    }else{
        cout<<"Odd"<<endl;
    }
    return 0;
}
//WAP to do sum of numbers upto n
# include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int sum=0;
    for(int counter=1;counter<=n;counter++){
        sum=sum+counter;
    }
    cout<<sum<<endl;
    return 0;

}
//WAP to find the max of three nos.
#include <iostream>
using namespace<std>

    int a,b,c;
    cin>>a>>b>>c;
    int main{
        if(a>b){
            if(a>c){
                cout<<a<<endl;
            }else{
                cout<<c<<endl;
            }

        }

else{
if(b>c){
    cout<<b<<endl;
}
else{
    cout<<c<<endl;
}
}
return 0;


}
//WAP to find if the given no.is odd or even
#include<iostream>
using namespace std
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"even"<<endl;
    }else{
        cout<<"odd"<<endl;

    }
return 0;
}
