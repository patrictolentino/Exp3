#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
int main()
{
	char array[20];
	int size;
	
	cout << "Please input characters in the array:\n";
	cin>> array;
	
	size =0;
	
	while(array[size] !='\0')
	
	size++;
	cout << "Reversed array: \n";
		
	for(int a=size-1;a>=0;a--)
	{
		cout << array[a];
	}
	
	cout<< "\nThe array size is:"<< size;
	
	getch();
	return 0;
}


