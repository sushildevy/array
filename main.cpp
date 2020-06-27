//file:          <main.cpp>
//Name:          <Sushil Pandey>
//class:          CSIS 252
//program:        assignment 3
//date:          <02/07/2018>

#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
//program description
//this program will input the numbers from the keyboard and 
//display the output in different ways through array processing.

const int sentinel =0;
const int arraySize=20;
const int posArray=20;
const int negArray=20;
const int oddPosArray=20;
const int evenPosArray=20;

int main()
{
  //array sizes
  int posArray[arraySize],negArray[arraySize],evenPosArray[arraySize],oddPosArray[arraySize];
  //variables
  int posCount,negCount;                      // count of positive integers and negative integers
  int ints;                                   // entered integers
  int evenPosIntCt=0,oddPosIntCt=0;           //count of even positive and odd positive integers resp.
  int evenPosSum=0;                           //even positive sum
  int OddPosSum=0;                            //odd positive sum
  int reqEvenValue;                           //even value for question 7
  int reqOddValue;                            //pdd value for question 8
  int position;                               //position of even value for question 7
  int position1;                              //position of odd value for question 8
  int pos,pos1;                               //count for question 7 && 8
  bool found;                                 //boolean initialization
  double avgEvenPosInt,avgOddPosInt;          //float average value of even and odd sum of positive integers
  
  
  cout<<"please enter the integers or ("<<sentinel<<") to quit:";
  cin>>ints;
  posCount=0;
  negCount=0;
  //1.storing positive and negative integers in positive and negative array
  while (ints != sentinel && (posCount +negCount)<2*arraySize)
  { if (ints >0)
    {   
         posArray[posCount]=ints;
	 posCount++;
    }
	 
    else 
    {   negArray[negCount]=ints;
         negCount++;
    }
  
   cout<<"please enter the integers or ("<<sentinel<<") to quit:";
   cin >> ints;
  }  
   
  
  
  //2.output of negative array on single line separated by spaces
  cout<<"\nnegative Integers in negative array are:"<<endl;
  for (int j=0; j< negCount;j++)
    cout << negArray[j] << ' ';
    cout<<endl;
  
  
  //3.0utput of  negative array in reverse order after assigning absolute value
  cout<<"\nThe reverse of negative array after assigning to absolute value is:"<<endl;
  for (int j=0;j<negCount;j++)
    negArray[j]=negArray[j]*(-1);
  for(int l=negCount;l--;)
    cout<<negArray[l]<<' ';
    cout<<endl;
  
    
  //4.distributing positive array into even and odd 
   for (int p=0; p<posCount;p++)
   {   if ((posArray[p]%2)==0)
	 { evenPosArray[evenPosIntCt]=posArray[p];
	   evenPosIntCt++;
	 }
        else
	  
	{    oddPosArray[oddPosIntCt]=posArray[p];
	     oddPosIntCt++;
	}
   }
    
    //4i.printing even positive integers:
    cout<<"\nThe even positive integers is/are:"<<endl;
    for(int e=0;e<evenPosIntCt;e++)
      cout<<evenPosArray[e]<<' ';
      cout<<endl;
    
    //4ii.printing odd positive integercoreAs :
    cout<<"\nThe odd positive integers is/are:"<<endl;
    for (int e=0;e<oddPosIntCt;e++)
      cout<<oddPosArray[e]<<' ';
      //cout<<endl;n<scoreArray[large]unt;n++)
    
    //5.calculation of even positive average
     cout<<"\nThe average of even positive integers is:";
     for (int e=0;e<evenPosIntCt;e++)
       evenPosSum+=evenPosArray[e];
     cout<<fixed<<showpoint<<setprecision(2)<<endl;
     avgEvenPosInt=static_cast<double>(evenPosSum)/evenPosIntCt;
     cout<<avgEvenPosInt<<endl;
     
     
     
     //6.calculation of odd positive average
     cout<<"\nThe average of odd positive integers is:";
     for (int e=0; e<oddPosIntCt; e++)
       OddPosSum+=oddPosArray[e];
     cout<<fixed<<showpoint<<setprecision(2)<<endl;
     avgOddPosInt=static_cast<double>(OddPosSum)/oddPosIntCt;
     cout<<avgOddPosInt<<endl;
       
     
     
     
   //7.finding first value less or equaal to average of even positive integers
   found=false;
   pos=0 ;
   while((!found) && pos < evenPosIntCt)
   {
        if (evenPosArray[pos]<=avgEvenPosInt)
	{   reqEvenValue=evenPosArray[pos];
	    position=pos;
	    found=true;
	}
	pos+=1;
   }
	 
       
    if (found)
    {cout<<"\nThe first value that is  smal or equal to average of even positive integers is "<<reqEvenValue<<endl;
      cout<<"and the position of value is "<<position<<endl;
    }
    else
      cout<<"\nThere is no such number that is less than or equal to average of even posotive integers."<<endl;
     
    
    
    
   //8.finding first greater or equal value from back than average of odd positive array 
   found = false;
   pos1 =oddPosIntCt-1;
   while ((!found) && pos1 >0)
   {
     if (oddPosArray[pos1] >= avgOddPosInt)
     {  
       reqOddValue = oddPosArray[pos1];
       position = pos1;
       found =true;
    }
    pos1--;
  }
  
  
  if (found)
  { 
    cout<<"\nThe Value greater or equal to the average of positive odd array is: "<<reqOddValue<<endl;
    cout<<"and the Position of the value on that array is: "<<position<<endl;
  }
  else
   cout<<"\nThere is no value that is greater or equal to the average of the positive odd array"<<endl;
      
  return 0;
}
