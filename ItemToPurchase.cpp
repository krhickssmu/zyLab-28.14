#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

//constructors
ItemToPurchase::ItemToPurchase(){
  itemName="none";
  itemDescription="none";
  itemPrice=0;
  itemQuantity=0;
}
ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity){
  itemName=name;
  itemDescription=description;
  itemPrice=price;
  itemQuantity=quantity;
}

//setters
void ItemToPurchase::SetName(string name){
  this->itemName = name;
}
void ItemToPurchase::SetDescription(string description){
  this->itemDescription = description;
}
void ItemToPurchase::SetPrice(int price){
  this->itemPrice = price;
}
void ItemToPurchase::SetQuantity(int quantity){
  this->itemQuantity = quantity;
}

//getters
string ItemToPurchase::GetName() const{
  return itemName;
}
string ItemToPurchase::GetDescription() const{
  return itemDescription;
}
int ItemToPurchase::GetPrice() const{
  return itemPrice;
}
int ItemToPurchase::GetQuantity() const{
  return itemQuantity;
}

//printers
void ItemToPurchase::PrintItemCost(){
  cout<<itemName<<" "<<itemQuantity<<" @ $"<<itemPrice;
  cout << " = $"<<itemQuantity*itemPrice<<endl;
}

void ItemToPurchase::PrintItemDescription(){
  cout<<itemName<<": "<<itemDescription<<endl;
}
