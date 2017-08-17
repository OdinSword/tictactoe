#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3][3],i,j,c=0;
	
	
	
	cout<<"Value assigned to Player I is 1."<<endl;
	
	cout<<"Value assigned to Player II is 2."<<endl;
	
	
	
	
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			
			a[i][j]=0;
			
		}
		
		
	}
	
while(c<9){
	
	cout<<"Enter the position to be filled: "<<endl;
	int x,y,t;
	
	cin>>x>>y;
	
	if(c%2==0)
	t=1;

	else t=2;
	
	c++;
	
	a[x][y]=t;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			
			cout<<a[i][j]<<"  ";
			
		}
		
		cout<<endl;
	}
	
	for(i=0,j=0;i<3;i++)
	{
		
		
			if(a[i][j]==a[i][j+1] && a[i][j+1]==a[i][j+2] && a[i][j]!=0)
			{
				if(a[i][j]==1)
				{
					cout<<"player 1 wins"<<endl;
				}
				
				else cout<<"player 2 wins"<<endl;
				
				exit(0);
			}
			
		
		
		
	}
	
	
		
	for(j=0,i=0;j<3;j++)
	{
		
		
			if(a[j][i]==a[j+1][i] && a[j+1][i]==a[j+2][i] && a[j][i]!=0)
			{
				if(a[i][j]==1)
				{
					cout<<"player 1 wins"<<endl;
				}
				
				else cout<<"player 2 wins"<<endl;
				
				exit(0);
			}
			
			
		}
	
	
	i=0,j=0;
	
	if(a[i][j]==a[i+1][j+1] && a[i+1][j+1]==a[i+2][j+2] && a[i][j]!=0)
	{
		if(a[i][j]==1)
		cout<<"player 1 wins"<<endl;
		
		else cout<<"player 2 wins"<<endl;
		
		exit(0);
	}
	
	
	i=0,j=2;
	
	if(a[i][j]==a[i+1][j-1] && a[i+1][j-1]==a[i+2][j-2] && a[i][j]!=0)
	{
		
			if(a[i][j]==1)
		cout<<"player 1 wins"<<endl;
		
		else cout<<"player 2 wins"<<endl;
		
		exit(0);
	}
	
	
	
	
}

cout<<"The result is a draw"<<endl;
	}
