#include<iostream>
#include<iomanip>
void display(int num[5][6]);
void graph(int num[5][6]);
using namespace std;
int main (){
	int num[5][6];
	srand(time(NULL));
	for(int i = 0;i<5;i++)
	{	
		for(int j = 0;j<6;j++)
		{
			num[i][j] = rand()%9;	
		}
	}
	display(num);
	graph(num);
	system("pause");
	return 0;
}

void display(int num[5][6])
{
	for(int i = 0;i<5;i++)
	{	
		for(int j = 0;j<6;j++)
		{
			cout<<num[i][j]<<"\t";
		}
		cout<<endl;
	}
	
}

void graph(int num[5][6])
{
  cout<<"--------------display graph------------------------"<<endl;
  cout<<"\t0\t1\t2\t3\t4\t5 "<<endl;
  cout<<"---------------------------------------------------"<<endl;
  for(int i = 0;i<5;i++)
  {
	  cout<<i<<'|';
	  for(int j = 0;j<6;j++)
	  {
		
		if(num[i][j] != 0){
			cout<<"\t"<<'*';
		}
		else if (num[i][j] == 0){
		cout<<"\t";
		}
	  }
	  cout<<endl;
  }
}
