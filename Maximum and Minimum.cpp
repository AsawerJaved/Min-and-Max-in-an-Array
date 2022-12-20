#include <iostream>
using namespace std;
int main()
{
    int size=5;
    int array[size],max=0,min=0;
    for(int a=0;a<size;a++)
    {
        cout<<"Enter element "<<a+1<<": ";
    	cin>>array[a];
	}
    max=array[0];             // initializing max and min with the 1st element of array
    min=array[0];
    for(int a=0;a<size;a++)
    {
       if(array[a]>max)
       max=array[a];
       else if(array[a]<min)
       min=array[a];
    }
    cout<<endl;
    cout<<"Maximum is "<<max<<endl;
    cout<<"Minimum is "<<min<<endl;

    return 0;
}
