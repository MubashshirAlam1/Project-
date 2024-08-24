#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
	{
	   int num_words=0;
	   string previous;
	   string current;
	   string adieu="thank you\n";
	   
	   while (cin>>current){
	    ++num_words;
	    if(previous==current);
	    cout<<"word number"<<"num_words"<<"repeated\n"<<current<<endl;
	    previous=current;
	    adieu+="Bye Bye";
	   }
	    
	    cout<<adieu<<endl;
	  
	return 0;
	
	
	
	
	
}