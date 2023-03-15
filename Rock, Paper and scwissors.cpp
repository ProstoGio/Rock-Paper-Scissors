#include <bits/stdc++.h>
#include <cstring>
#include <algorithm>
using namespace std;

int main (){
	
	cout<<"Game Rules:\nrock > Scissors; rock < paper;"<<endl<<"paper > rock; paper < Scissors"<<endl<<"Scissors < rock; Scissors > paper"<<endl<<endl;
	string player1, player2, tolow1="", tolow2="";
	cin>>player1;
	cin>>player2;
	for(int i=0; i<player1.size(); i++)
	{
		tolow1=tolow1+char(tolower(player1[i]));
	}
	player1=tolow1;
	for(int i=0; i<player2.size(); i++)
	{
		tolow2=tolow2+char(tolower(player2[i]));
	}
	player2=tolow2;
	if(player1=="rock" && player2=="rock"){
		
		cout<<"Tie";
	}
		if(player1=="rock" && player2=="paper"){
		
		cout<<"Player 2 is winner  ";
	}
		if(player1=="rock" && player2=="scissors"){
		
		cout<<"Player 1 is winner  ";
	}
		if(player1=="paper" && player2=="rock"){
		
		cout<<"Player 1 is winner  ";
	}
	if(player1=="paper" && player2=="paper"){
		
		cout<<"Tie";
    }
    if(player1=="paper" && player2=="scissors"){
		
		cout<<"Player 2 is winner  ";
    }
    if(player1=="scissors" && player2=="rock"){
		
		cout<<"Player 2 is winner  ";
    }
    if(player1=="scissors" && player2=="paper"){
		
		cout<<"Player 1 is winner  ";
    }
    if(player1=="scissors" && player2=="scissors"){
		
		cout<<"Tie";
    }
   
    
    
    return 0;
}
