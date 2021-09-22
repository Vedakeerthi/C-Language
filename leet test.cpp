#include<iostream>
using namespace std;
class twosum
{
	public:
		int n,a[100],target;
		void getdata(void);
		void ts(void);
};

void twosum :: getdata(void)
{
	cout<<"ENTER THE NUMBER OF ELEMENTS TO BE ENTERED IN AN ARRAY : ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"ENTER THE "<<i+1<<"ELEMENT :";
        cin>>a[i];
    }
    cout<<"ENTER THE TARGET ELEMENT : ";cin>>target;
}

void twosum :: ts(void)
{
	for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]+a[j]) == target)
                cout<<"THE REQUIRED ELEMENT IS PRESENT IN : ";
                cout << i+1<<"    "<<j+1;
                break;
        }
    }	
}

int main()
{
	twosum t;
	t.getdata();
	t.ts();
}
