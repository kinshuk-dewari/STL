#include<iostream>
#include<vector>  // header of the class vector 

using namespace std;

void display(vector<int> &n)
{
    for(int i=0;i<n.size();i++)             // size() to find the size of the vector
    {
        cout<<n[i]<<endl;
    }
}


int main()
{
vector<int> a;          // declaring a integer vector of name a

cout<<"the vector is :"<<endl;

for(int i=0;i<10;i++)
{
   a.push_back(i);      // inserting  in the vector 
}

display(a);         // to display the vector

// to display the front element of the vector
cout<<"the front of the vector is "<<a.front()<<endl;   

// to delete the last index element of the vector
a.pop_back();
cout<<"the vector after deleting the element"<<endl;
display(a);

return 0;

}