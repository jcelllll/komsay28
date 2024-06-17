#include <iostream>
using namespace std;

class Product{
	private:
		string name;
		string category;
		string brand;
		string material;
		string description;
		int quantity;
		int price;
		float warranty;
	
	public:
		Product(){}
		Product(string newName, string newCategory, string newBrand, string newMaterial, string newDescription, int newQuantity, int newPrice, float newWarranty ){
			name = newName;
			category = newCategory;
			brand = newBrand;
			material = newMaterial;
			quantity = newQuantity;
			description = newDescription;
			price = newPrice;
			warranty = newWarranty;
		}
		//fucntions to set and get the data values
		void setName(string newName){
			name = newName;
		}
		string getName(){
			return name;
		}
		void setCategory(string newCategory){
			category = newCategory;
		}
		string getCategory(){
			return category;
		}
		void setBrand(string newBrand){
			brand = newBrand;
		}
		string getBrand(){
			return brand;
		}
		void setMaterial(string newMaterial){
			material = newMaterial;
		}
		string getMaterial(){
			return material;
		}
		void setDescription(string newDescription){
			description = newDescription;
		}
		string getDescription(){
			return description;
		}
		void setQuantity(int newQuantity){
			quantity = newQuantity;
		}
		int getQuantity(){
			return quantity;
		}
		void setPrice(int newPrice){
			price = newPrice;
		}
		int getPrice(){
			return price;
		}
		void setWarranty(float newWarranty){
			warranty= newWarranty;
		}
		float getWarranty(){
			return warranty;
		}
};//child class of product class
class Clothing: public Product {
	private:
		string size;
		string color;
	public:
		Clothing(){}
		Clothing(string newSize, string newColor){
			size = newSize;
			color = newColor;
		}
		
		//functions to set and get data values
		void setSize(string newSize){
			size = newSize;
		}
		string getSize(){
			return size;
		}
		void setColor(string newColor){
			color = newColor;
		}
		string getColor(){
			return color;
		}
};
//child of product class
class Electronics: public Product{
	private:
		string model;
		string techspecs;
	public:
		Electronics(){}
		Electronics(string newModel, string newTechspecs){
			model = newModel;
			techspecs = newTechspecs;
		}
		//functions to get and set data values
		void setModel(string newModel){
			model = newModel;
		}
		string getModel(){
			return model;
		}
		void setTechspecs(string newTechspecs){
			techspecs = newTechspecs;
		}
		string getTechspecs(){
			return techspecs;
		}
};
