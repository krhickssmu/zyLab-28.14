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
ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity = 0){
  itemName=name;
  itemDescription=description;
  itemPrice=price;
  itemQuantity=quantity;
}

//setters
void SetName(string name){
  itemName = name;
}
void SetDescription(string description){
  itemDescription = description;
}
void SetPrice(int price){
  itemPrice = price;
}
void SetQuantity(int quantity){
  itemQuantity = quantity;
}

//getters
string GetName() const{
  return itemName;
}
string GetDescription() const{
  return itemDescription;
}
int GetPrice() const{
  return itemPrice;
}
int GetQuantity() const{
  return itemQuantity;
}

//printers
void PrintItemCost(){
  cout<<itemName<<" "<<itemQuantity<<" @ $"<<cout<<itemPrice<<" = "<<itemQuantity*itemPrice<<endl;
}
void PrintItemDescription(){
  cout<<itemName<<": "<<itemDescription<<endl;
}
  
   
  
