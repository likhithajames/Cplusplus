#include <iostream>
#include <vector>

using namespace std;

//vector is called the dynamic array

int main()
{
//presize the vector
vector<int>age(10);
age[0] = 1;
age[1] = 2;
cout<<age[0]<<endl;
cout<<age.size()<<endl;
//with presize if we use the push_back size will increase.
//Elements are added to the bottom of the vector.
//so while using push_back don't use presize

vector<string>name;
name.push_back("Likhitha");
name.push_back("Lohitha");
cout<<name[0]<<endl;
cout<<name.size()<<endl;

vector<string>::iterator it = name.begin();
cout<<*it<<endl;

cout<<"Test for iterators"<<endl;
for(vector<string>::iterator start = name.begin();start != name.end();start++)
{
cout<<*start<<endl;
}

return 0;
}
