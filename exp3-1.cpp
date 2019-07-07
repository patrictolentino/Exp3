#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
int main()
{
	int Arr[10],a,n,smallest,largest, sum=0;
	float average;


	a=10;

	for(n=0;n<a;n++)
	{
		cout<<"Enter number "<<n+1<<":";
		cin>>Arr[n];
	}

		smallest=Arr[0];
		largest=Arr[0];

		for(n=1;n<a;n++)
		{
			if(Arr[n]<smallest)
				smallest=Arr[n];
			if(Arr[n]>largest)
				largest=Arr[n];
		}
	
				for(n=0;n<a;n++)
			{
				sum += Arr[n];
			}
	
		average = (float)sum /a;

		cout<<"\nLargest integer is: "<<largest;
		cout<<"\nSmallest integer is: "<<smallest;
    
    	cout << "\nTotal: " << sum<< endl;
    	cout << "Average: " << average;

    getch();
	return 0;
}
