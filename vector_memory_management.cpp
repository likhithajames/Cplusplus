#include <iostream>
#include <vector>

using namespace std;

//To change the size use the resize
//To change the capacity use the reserve
//reserve is used for performance optimizatiion
//capacity - change the size of the internal vector and copy the contents to the 
//new vector
//size tells the number of elemets in the vector

int main()
{
vector<int>age(10,1);
age.reserve(100);
age.clear();
cout<<"capacity:"<<age.capacity()<<endl;
cout<<"size"<<age.size()<<endl;


return 0;
}
