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
   cout<<endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   if(option=='a'){
      string newName, newDesc; 
      int newPrice, newQuant;
      cout<<"ADD ITEM TO CART"<<endl;
      cout<<"Enter the item name:"<<endl;
      getline(cin,newName);
      cout<<"Enter the item description:"<<endl;
      getline(cin, newDesc);
      cout<<"Enter the item price:"<<endl;
      cin>>newPrice;
      cout<<"Enter the item quantity:"<<endl;
      cin>>newQuant;
      ItemToPurchase newItem(newName, newDesc, newPrice, newQuant);
      theCart.AddItem(newItem);
      cout<<endl;

      
   }
   else if(option=='d'){
      string deletedName;
      cout<<"REMOVE ITEM FROM CART"<<endl;
      cout<<"Enter name of item to remove:"<<endl;
      getline(cin,deletedName);
      theCart.RemoveItem(deletedName);
      cout<<endl;
 
   }
   else if(option=='c'){
      string name;
      int newQuant;
      cout<<"CHANGE ITEM QUANTITY"<<endl;
      cout<<"Enter the item name:"<<endl;
      getline(cin,name);
      cout<<"Enter the new quantity:"<<endl;
      cin>>newQuant;
      ItemToPurchase newItem(name, "none", 0, newQuant);
      theCart.ModifyItem(newItem);
      cout<<endl;
      
      
   }
   else if(option=='i'){
      cout<<"OUTPUT ITEMS' DESCRIPTIONS"<<endl;
      cout<<theCart.GetCustomerName()<<"'s Shopping Cart - "<<theCart.GetDate()<<endl;
      cout<<endl;
      cout<<"Item Descriptions"<<endl;
      theCart.PrintDescriptions();
      cout<<endl;
     
   }
   else if(option=='o'){
      cout<<"OUTPUT SHOPPING CART"<<endl;
      cout<<theCart.GetCustomerName()<<"'s Shopping Cart - "<<theCart.GetDate()<<endl;
      theCart.PrintTotal();
      cout<<endl;
      cout<<"Total: $"<<theCart.GetCostOfCart()<<endl;
      cout<<endl;   
   }
   else if(option=='q'){
   //done
   }
}

int main() {
   string customer;
   string date;
   char choice;

   
   cout<<"Enter customer's name:"<<endl;
   getline(cin, customer);
   cout<<"Enter today's date:"<<endl;
   getline(cin, date);

   cout<<endl;
   cout<<"Customer name: "<<customer<<endl;
   cout<<"Today's date: "<<date<<endl;
   cout<<endl;
   ShoppingCart newCart= ShoppingCart(customer, date);
   
   PrintMenu();

   while(choice!='q'){
       
      bool repeat=true;
      while(repeat){
         cout<<"Choose an option:"<<endl;
         cin>>choice;
         cin.ignore();
         if (choice=='a'||choice=='o'||choice=='i'||choice=='d'||choice=='q'||choice=='c'){
          repeat=false;
          }
      }
      
      if(choice=='q'){
         break;
      }
   
      ExecuteMenu(choice, newCart);
      PrintMenu();   
      
   }  
   return 0;
}
