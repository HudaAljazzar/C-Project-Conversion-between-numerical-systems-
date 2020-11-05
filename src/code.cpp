#include<iostream>
#include<cmath>
using namespace std;
void menu();

int dec_to_bin(int);
int dec_to_oct(int);
char dec_to_hex(int);

int bin_to_dec(int);
int bin_to_oct(int);
int bin_to_hex(int);

int oct_to_dec(int);
int oct_to_bin(int);
int oct_to_hex(int);

int hex_to_dec(int);
int hex_to_bin(int);
int hex_to_oct(int);



int main(){ 
    int  num,decnum,binnum,octnum,hexnum;
	
	do{
		menu();
	 
	        cout<<"Enter the choice: ";
                cin>>num;
     
               switch(num)
 		   {
   			 case 1:cout<<"Enter the decamial number:"<<endl;
         	         cin>>decnum;
	    		 cout<<dec_to_bin(decnum);
	       		 cout<<dec_to_oct(decnum);
	      	       	 cout<<dec_to_hex(decnum);
			 break;
			
	                case 2:cout<<"Enter the binary number:"<<endl;
	        cin>>binnum;
			cout<<bin_to_dec(binnum);
	       	cout<<bin_to_oct(binnum);
	       	cout<<bin_to_hex(binnum);
			break;
			
	case 3: cout<<"Enter the octal number:"<<endl;
	        cin>>octnum;
			cout<<oct_to_dec(octnum);
	       	cout<<oct_to_bin(octnum);
	       	cout<<oct_to_hex(octnum);
		    break; 
			 
 	case 4:  cout<<"Enter the hexdecamial number:"<<endl;
	        cin>>hexnum;
			cout<<hex_to_dec(hexnum);
	     	cout<<hex_to_bin(hexnum);
	     	cout<<hex_to_oct(hexnum);
			break; 
			
	default:cout<<"......EXITE..........."<<endl;
	        break;		   
	}
    }
    while(num!=5);

    return 0;
}




//function definitio

//the menu
void menu()
{
	 
    cout<<"\t************************************************"<<endl;
	cout<<"\t*..............~WELCOM DEAR USER~..............*"<<endl;
	cout<<"\t*...............^^OPTION MENU^^................*"<<endl;
	cout<<"\t* 1-CONVERT FROM DECAMAL TO OTHER SYSTEM.......*"<<endl;
	cout<<"\t* 2-CONVERT FROM BINARY TO OTHER SYSTEM........*"<<endl;
	cout<<"\t* 3-CONVERT FROM OCTAL TO OTHER SYSTEM.........*"<<endl;
	cout<<"\t* 4-CONVERT FROM HEXDECAMIAL TO OTHER SYSTEM...*"<<endl;
	cout<<"\t* 5- EXITE...                                  *"<<endl;
	cout<<"\t************************************************"<<endl;
		
}

//decmail system
//convert decamial to binary
int dec_to_bin(int decnum)
{

	int rem=0,binnum=0,i=0;
     
	while(decnum>0)
	{   
		rem=decnum%2;
		binnum=binnum+rem*pow(10,i);
		i++;
		decnum/=2;
	}
	cout<<"\nTHE number of binary system ^^.. ";
    return binnum;

}



//convert decamial to octal
int dec_to_oct(int decnum)
{
    int rem=0,octnum=0,i=0;
     
	while(decnum>0)
	{   
		rem=decnum%8;
		octnum=octnum+rem*pow(10,i);
		i++;
		decnum/=8;
	}
	cout<<"\nTHE number of octal system ^^.. ";
    return octnum; 	
}




//convert decamial to hexdecamial
char dec_to_hex(int decnum)
{
    int rem=0,hexnum=0,i=0;
     
	while(decnum>0)
	{   
		rem=decnum%16;
		hexnum=hexnum+rem*pow(10,i);
		i++;
		decnum/=16;
}
	cout<<"\nTHE number of hexdecamial system ^^.. ";
    if(hexnum==10)
    cout<<'A';
    else 
    if(hexnum==11)
    cout<<'B';
    else 
	if(hexnum==12)
    cout<<'C';
    else  
	if(hexnum==13)
    cout<<'D';
    else  
	if(hexnum==14)
    cout<<'E';
    else  
	if(hexnum==15)
    cout<<'F';
    else 
	cout<<hexnum;

}


//binary system
//convert binary to decamial
int bin_to_dec(int binnum)
{   
  int rem=0,decnum=0,i=0;
  while(binnum>0)
	 {   
		rem=binnum%10;
		decnum=decnum+rem*pow(2,i);
		i++;
		binnum/=10;
	 }
	 cout<<"\nTHE number of decamial system ^^.. ";
     return decnum;
}


//convert binary to octal
int bin_to_oct(int binnum)
{
	 int rem=0,rem1=0,decnum=0,octnum=0,i=0;
     
	 while(binnum>0)
	 {   
		rem=binnum%10;
		decnum=decnum+rem*pow(2,i);
		i++;
		binnum/=10;
	 }
		while(decnum>0)
	{   
		rem1=decnum%8;
		octnum=octnum+rem1*pow(10,i);
		i++;
		decnum/=8;
	}
	cout<<"\nTHE number of octal system ^^.. ";
    return octnum; 	 
}




//convert binary to hexadecimail
int bin_to_hex(int binnum)
{ int rem=0,rem1=0,decnum=0,hexnum=0,i=0;
     
	 while(binnum>0)
	 {   
		rem=binnum%10;
		decnum=decnum+rem*pow(2,i);
		i++;
		binnum/=10;
	 }
	   
	while(decnum>0)
	{   
		rem1=decnum%16;
		hexnum=hexnum+rem1*pow(10,i);
		i++;
		decnum/=16;
	}
	cout<<"\nTHE number of hexdecamial system ^^.. ";
    if(hexnum==10)
    cout<<'A';
    else  
	if(hexnum==11)
    cout<<'B';
    else  
	if(hexnum==12)
    cout<<'C';
    else  
	if(hexnum==13)
    cout<<'D';
    else  
	if(hexnum==14)
    cout<<'E';
    else  
	if(hexnum==15)
    cout<<'F';
    else 
	cout<<hexnum;

}


//octal system
//convert octal to decamial
int oct_to_dec(int octnum)
{
	 int rem=0,decnum=0,i=0;
	 while(octnum>0)
	 {   
		rem=octnum%10;
		decnum=decnum+rem*pow(8,i);
		i++;
		octnum/=10;
	 }
	 cout<<"\nTHE number of decamial system ^^.. ";
     return decnum;
}


//convert octal to binary
int oct_to_bin(int octnum)
{    int rem=0,rem1=0,decnum=0,binnum=0,i=0;
	 while(octnum>0)
	 {   
		rem=octnum%10;
		decnum=decnum+rem*pow(8,i);
		i++;
		octnum/=10;
	 }
	 	while(decnum>0)
	{   
		rem1=decnum%2;
		binnum=binnum+rem1*pow(10,i);
		i++;
		decnum/=2;
	}
	cout<<"\nTHE number of binary system ^^.. ";
    return binnum;
	
}




//convert octal to hexadecimal
int oct_to_hex(int octnum)
{ 
	 int rem=0,decnum=0,hexnum=0,i=0;
	 while(octnum>0)
	 {   
		rem=octnum%10;
		decnum=decnum+rem*pow(8,i);
		i++;
		octnum/=10;
	 }
     
	while(decnum>0)
	{   
		rem=decnum%16;
		hexnum=hexnum+rem*pow(10,i);
		i++;
		decnum/=16;
	}
	cout<<"\nTHE number of hexdecamial system ^^.. ";
    if(hexnum==10)
	cout<<'A';
	else
	if(hexnum==11)
	cout<<'B';
	else
	if(hexnum==12)
	cout<<'C';
	else
	if(hexnum==13)
	cout<<'d';
	else
	if(hexnum==14)
	cout<<'E';
	else
	if(hexnum==15)
	cout<<'F';
	else 
	cout<<hexnum;
	
} 
 
//hexdecamial system
//convert hexdecamial to decamial
 int hex_to_dec(int hexnum)
{
	int rem=0 ,decnum=0 ,i=0;
	
	while(hexnum>0)
	{
		rem=hexnum%10;
		decnum+=rem*pow(16,i);
		i++;
		hexnum/=10;
	}
	cout<<"\nThe number of decamial system^^..";
	return hexnum;
}  
 
//convert hexdecamial to binary
int hex_to_bin(int hexnum)
{
	int rem=0,rem1=0 ,decnum=0 ,binnum=0,i=0;
	
	while(hexnum>0)
	{
		rem=hexnum%10;
		decnum+=rem*pow(16,i);
		i++;
		hexnum/=10;
	}
	while(decnum>0)
	{
		rem1=decnum%2;
		binnum+=rem*pow(10,i);
		i++;
		decnum/=2;
	}
 cout<<"\nThe number of binary system^^..";
	if(hexnum==10)
	cout<<'A';
	else
	if(hexnum==11)
	cout<<'B';
	else
	if(hexnum==12)
	cout<<'C';
	else
	if(hexnum==13)
	cout<<'d';
	else
	if(hexnum==14)
	cout<<'E';
	else
	if(hexnum==15)
	cout<<'F';
	else 
	cout<<hexnum;
	
} 
 
 //convert hexdecamial to octal
 int hex_to_oct(int hexnum)
{ 
	 int rem=0,decnum=0,octnum=0,i=0;
	 while(hexnum>0)
	 {   
		rem=hexnum%10;
		decnum=decnum+rem*pow(16,i);
		i++;
		octnum/=10;
	 }
     
	while(decnum>0)
	{   
		rem=decnum%8;
		octnum=octnum+rem*pow(10,i);
		i++;
		decnum/=8;
	}
	cout<<"\nTHE number of octal system ^^.. ";
    if(hexnum==10)
	cout<<'A';
	else if(hexnum==11)
	cout<<'B';
	else if(hexnum==12)
	cout<<'C';
	else if(hexnum==13)
	cout<<'d';
	else if(hexnum==14)
	cout<<'E';
	else if(hexnum==15)
	cout<<'F';
	else 
	cout<<hexnum;
	
}
