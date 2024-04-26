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
        ItemToPurchase temp = cartItems.at(i);
        for(int j=i+1; j<cartItems.size(); j++){
            cartItems.at(j-1) = cartItems.at(j);
        }
        cartItems.pop_back();
        isFound = true;
      break;
    }
  }
  if(isFound == false){
    cout << "Item not found in cart. Nothing removed." << endl;
  }
}

int ShoppingCart::GetNumItemsInCart(){
   int quantity = 0;
   for(int i=0; i<cartItems.size(); i++){
      quantity = quantity + cartItems.at(i).GetQuantity();
   }
  return quantity;
}

double ShoppingCart::GetCostOfCart(){
  double total = 0;
  for(int i=0; i<cartItems.size(); i++){
    total = total + (cartItems.at(i).GetPrice() * cartItems.at(i).GetQuantity());
  }
return total;
}

void ShoppingCart::PrintTotal(){
  if(cartItems.size() == 0){
      cout << "Number of Items: " << GetNumItemsInCart() << endl;
      cout << endl;
      cout << "SHOPPING CART IS EMPTY" << endl;
  }
  else{
      cout << "Number of Items: " << GetNumItemsInCart() << endl;
      cout << endl;
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
  bool isFound = false;
  string nameOf = item.GetName();
  for(int i=0; i<cartItems.size(); i++){
    if(nameOf == cartItems.at(i).GetName()){
      isFound = true;
       if(item.GetDescription() != "none"){
         cartItems.at(i).SetDescription(item.GetDescription());
       }
     if(item.GetPrice() != 0){
         cartItems.at(i).SetPrice(item.GetPrice());
       }
     if(item.GetQuantity() != 0){
         cartItems.at(i).SetQuantity(item.GetQuantity());
       }
    }
  }
 if(isFound == false){
  cout << "Item not found in cart. Nothing modified." << endl;
 }
}