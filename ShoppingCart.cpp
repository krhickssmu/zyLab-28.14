#include <iostream>
#include "ShoppingCart.h"
 using namespace std;


ShoppingCart::ShoppingCart(){
  this->customerName = "none";
  this->currentDate = "January 1, 2016";
}
ShoppingCart::ShoppingCart(string name, string date){
  this->customerName = name;
  this->currentDate = date;
}

string ShoppingCart::GetCustomerName() const{
  return customerName;
}
string ShoppingCart::GetDate() const{
  return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item){
  cartItems.push_back(item);
}
void ShoppingCart::RemoveItem(string name){
  bool isFound = false;
  for(int i=0; i<cartItems.size(); i++){
    if(cartItems.at(i).GetName() == name){
      cartItems.at(i) == null;
      isFound = true;
      break;
    }
  }
  if(isFound == false){
    cout << "Item not found in cart. Nothing removed." << endl;
  }
}

int ShoppingCart::GetNumItemsInCart(){
  return cartItems.size();
}

double ShoppingCart::GetCostOfCart(){
  double total = 0;
  for(int i=0; i<cartItems.size(); i++){
    total = total + cartItems.at(i).GetPrice();
  }
return total;
}

void ShoppingCart::PrintTotal(){
  if(cartItems.size() == 0){
    cout << "SHOPPING CART IS EMPTY" << endl;
  }
  else{
      cout << "Number of Items: " << cartItems.size() << endl;
      for(int i=0; i<cartItems.size(); i++){
       cartItems.at(i).PrintItemCost();
    }
  }
}

void ShoppingCart::PrintDescriptions(){
  if(cartItems.size() == 0){
    cout << "SHOPPING CART IS EMPTY" << endl;
  }
  else{
     for(int i=0; i<cartItems.size(); i++){
       cartItems.at(i).PrintItemDescription();
    }
}
}

void ShoppingCart::ModifyItem(ItemToPurchase item){
  string nameOf = item.GetName();
  for(int i=0; i<cartItems.size(); i++){
    if(nameOf == cartItems.at(i).GetName()){
      //In the works
    }
    else{
      cout << "Item not found in cart. Nothing removed." << endl;
    }
  }
}


