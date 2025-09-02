#include <iostream>
using namespace std;

int main()
{
	int pollution_level[6];
	int average;
	int counter =0;  

	while (counter<=6) 
	{
		cout<<"Enter pollution level for day "<<counter<<" range (1-100): ";
		cin>>pollution_level[counter];
		average = average + pollution_level[counter];
	}
	cout<<endl;
	cout<< "The average pollution level over those 6 days was:"<<average/6<<endl;

	return 0;
}