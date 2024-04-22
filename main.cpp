#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
   cout<<"MENU"<<endl;
   cout<<"a - Add item to cart"<<endl;
   cout<<"d - Remove item from cart"<<endl;
   cout<<"c - Change item quantity"<<endl;
   cout<<"i - Output items' descriptions"<<endl;
   cout<<"o - Output shopping cart"<<endl;
   cout<<"q - Quit"<<endl;  
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   if(option=='a'){
   }
   else if(option=='d'){
   }
   else if(option=='c'){
   }
   else if(option=='i'){
   }
   else if(option=='o'){
   }
   else if(option=='q'){
      break;
   }
   
   
}

int main() {
   string customer;
   string date;
   char choice;

   
   cout<<"Enter customer's name":<<endl;
   getline(cin, customer);
   cout<<"Enter today's date:":<<endl;
   getline(cin, date);

   cout<<endl;
   cout<<"Customer name: "<<customer<<endl;
   cout<<"Today's date: "<<date<<endl;

   ShoppingCart newCart= ShoppingCart(customer, date);

   while(choice!='q'){
      
      PrintMenu();
   
      cin>>choice;
   
      ExecuteMenu(choice, newCart);
      
   }
   
   
   
   
   return 0;
}
