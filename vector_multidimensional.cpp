#include <iostream>
#include <vector>

using namespace std;

int main()
{

vector< vector<int> >age(4,vector<int>(5,6));
for(int row=0;row<age.size();row++)
{
for(int col=0;col<age[row].size();col++)
{
cout<<age[row][col];
}
cout<<endl;
}
return 0;
}
