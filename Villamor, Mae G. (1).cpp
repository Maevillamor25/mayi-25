#include <iostream>

using namespace std;
  
    
   int myarray[30];
   int numElem = 0;
   int maxElem = 20;
  
  
   void traverseArray(){
       cout <<"showing elements in my array \n";
       for(int i =0; i< maxElem; i++){
           cout << to_string(myarray[i])+ "|";
   }
      cout<<"\n";
   }
   
   int main(){
       myarray[0]=19;
       myarray[1]=256;
       myarray[2]=20;
       myarray[3]=3;
       myarray[4]=7;
       myarray[5]=37;
       myarray[6]=9;
       traverseArray();
          
          return 0;
   } 
  
   string insertAttheEnd(int num){
       if(numElem != maxElem){
           myarray[numElem] = num;
           numElem++;
           return "An elements is successfully inserted at the end! \n";
       }
       return "The array is full.Please remove elements before inserting a new one.\n";
   

   }
   
   
   
   
 
  
   
      
      
