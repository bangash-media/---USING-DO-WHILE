#include <iostream>

using namespace std;

int main() 
{
	double num1,num2; //Varibles declaration
	char op,op2;  
	cout<<"\n\n\t\t\t\"CALCULATOR\"\n\n";
	do //Starting point of loop for another calcultion 
	{
	
	cout<<"\n\n\t\tEnter First number: "; cin>>num1; //first input number from user
	cout<<"\n\t\tEnter Second number: "; cin>>num2;  //second input number from user
	do //staring point of loop for wrong input
	{
	cout<<"\n\t\tEnter the Type of Operation (+,-,*,/): "; cin>>op; //operation type input
	if(op!='+'&&op!='-'&&op!='*'&&op!='/')  //if input wrong operation by user 
	cout<<"\n\t\tWrong Input"<<endl; //this will execute
    }while(op!='+'&&op!='-'&&op!='*'&&op!='/'); //loop will execute again & again if wrong "op" is input
	
	 if(op == '+') 
        cout<<"\n\n\t\tResult= "<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
    else if(op == '-')
        cout<<"\n\n\t\tResult= "<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
    else if(op == '*')
        cout<<"\n\n\t\tResult= "<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
    else if(op == '/')
        cout<<"\n\n\t\tResult= "<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
    cout<<"\n\t\tPrss Y for another Calculation: "; cin>>op2; //input for another calcultion
	    
        
    }while (op2=='y'||op2=='Y'); //loop will execute again & again till user presses Y for another calculation
    cout<<"\n\n\t\tTurning Off..."; //if not ,then program will be turned off
	return 0;
}
