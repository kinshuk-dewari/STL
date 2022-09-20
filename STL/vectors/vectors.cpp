#include<iostream>
#include<vector>  // header of the class vector 

using namespace std;

void display(vector<int> &n)
{
    for(int i=0;i<n.size();i++)             // size() to find the size of the vector
    {
        cout<<n[i]<<endl;
    }
     
    /* 
    we can also use for each loop
    
    for(auto it:n) cout<<it;
    
    or we can use iterators
    for(vector<int>::iterator it=n.begin();it!=n.end();it++) cout<<*it;
    */
}


int main()
{
    vector<int> a;          // declaring a integer vector of name a
    vector<int> V(10,0);          // declaring a integer vector of name V and size 10 it initial values as 0
    vector<int> b(5);          // declaring a integer vector with all the inital values set as default maybe 0
    
    
    // size 
    V.size();  //10

    cout<<"the vector is :"<<endl;

    for(int i=0;i<10;i++)
    {
      a.push_back(i);      // inserting  in the vector  can also use emplace_back
    }

    display(a);         // to display the vector

    // to display the front element of the vector
    cout<<"the front of the vector is "<<a.front()<<endl;   

    // to delete the last index element of the vector
    a.pop_back();
    cout<<"the vector after deleting the element"<<endl;
    display(a);
    
    // Accessing Vectors
    cout<<V[1];
    cout<<V.at(0);
    
    // using iterators
    vector<int>::iterator it=V.begin();
    cout<<*it;
    it+2;
    cout<<*it;
    
    // insert   v=[10,20,30]    v.insert(start,value,quantity) | [start,end)
    v.insert(v.begin(),5);  // v=[5,10,20,30]
    v.insert(v.begin(),0,2);  // v=[0,0,5,10,20,30]
    
    // deletion    v=[10,20,30,40,50]   v.erase(start,end) | [start,end)
    
    v.erase(v.begin()+1,v.begin()+3);   //[10,50]
    
    v.clear(); // []  removes all the elements from the vector
    
    
    // swap
    vector<int>v1(10,1);
    vector<int>v2(10,2);
    
    v1.swap(v2); // swaps the elements of both these vectors
    
    // chech if vector iss empty or not
    v.empty();   // 1 if true , 0 if false
    
    

return 0;

}
