//deque

#include <iostream>




#include<deque>
using namespace std;

int main()
{
    deque<int>d;
    
    d.push_back(1);
    d.push_front(2);
    
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    // d.pop_back();
    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    
    //  d.pop_front();
    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    
    cout<<d.at(1)<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<d.empty()<<endl;
    
    cout<<d.size()<<endl;
    
    d.erase(d.begin(),d.begin()+2);
    
    cout<<d.size()<<endl;
    
    for(int i:d){
        cout<<i<<endl;
    }
    

    return 0;
}


















#include <iostream>
#include<queue>

using namespace std;

int main(){
queue<string>q;
q.push("aanchal");
q.push("sharma");
q.push("love");

cout<<q.front()<<endl;
q.pop();
cout<<q.front()<<endl;
cout<<q.size();



    return 0;
}




