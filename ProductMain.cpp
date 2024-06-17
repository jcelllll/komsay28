#include <iostream>
#include <string>
#include "ProductInventory.h"

using namespace std;

int main() {
    string name, brand, description, size, color, model, techspecs, material;
    float warranty; 
    int price, quantity, category, choice;

    Electronics electronics;
    Clothing clothing;
    
    cout << "Submitted by: Jeycel Ann M. Tabon";
    cout << "Laboratory Exercise: Inheritance and Encapsulation";

    do {
        cout << "Menu:\n[1] Add Product\n[2] Show All Products\n[0] Exit\nEnter Choice: ";//For interactive program
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
            case 1:
            	//get user inputs. Product detail
                cout << "Enter Product Name: ";
                getline(cin, name);

                cout << "Enter Product Brand: ";
                getline(cin, brand);

                cout << "Enter Product Description: ";
                getline(cin, description);

                cout << "Enter Product Material: ";
                getline(cin, material);

                cout << "Enter Product Price: ";
                cin >> price;

                cout << "Enter Product Quantity: ";
                cin >> quantity;
                cin.ignore();

                cout << "Select Product Category\n[1] Clothing\n[2] Electronics: ";
                cin >> category;
                cin.ignore();

				//if belong to clothing category
                if (category == 1) {
                    cout << "Enter Product Size: ";
                    getline(cin, size);

                    cout << "Enter Product Color: ";
                    getline(cin, color);

					//pass data to set within the class
                    clothing.setName(name);
                    clothing.setBrand(brand);
                    clothing.setDescription(description);
                    clothing.setMaterial(material);
                    clothing.setPrice(price);
                    clothing.setQuantity(quantity);
                    clothing.setSize(size);
                    clothing.setColor(color);
                    clothing.setCategory("Clothing");
                }
				//if belong to electronic
				else if (category == 2) {
                    cout << "Enter Product Model: ";
                    getline(cin, model);

                    cout << "Enter Product Warranty (in years, e.g., 0.5 for 6 months): ";
                    cin >> warranty;
                    cin.ignore();

                    cout << "Enter Product Technical Specifications: ";
                    getline(cin, techspecs);

					//pass data to set within the class
                    electronics.setName(name);
                    electronics.setBrand(brand);
                    electronics.setDescription(description);
                    electronics.setMaterial(material);
                    electronics.setPrice(price);
                    electronics.setQuantity(quantity);
                    electronics.setModel(model);
                    electronics.setWarranty(warranty);
                    electronics.setTechspecs(techspecs);
                    electronics.setCategory("Electronics");
                }
                break;

            case 2:
            	//display all products
                if (!clothing.getName().empty()) {
                    cout << "\nClothing Product Details: " << endl;
                    cout << "Name: " << clothing.getName() << endl;
                    cout << "Brand: " << clothing.getBrand() << endl;
                    cout << "Price: $" << clothing.getPrice() << endl;
                    cout << "Quantity: " << clothing.getQuantity() << endl;
                    cout << "Description: " << clothing.getDescription() << endl;
                    cout << "Size: " << clothing.getSize() << endl;
                    cout << "Color: " << clothing.getColor() << endl;
                    cout << "Material: " << clothing.getMaterial() << endl;
                } else {
                    cout << "No clothing product entered yet." << endl;
                }

                if (!electronics.getName().empty()) {
                    cout << "\nElectronics Product Details: " << endl;
                    cout << "Name: " << electronics.getName() << endl;
                    cout << "Brand: " << electronics.getBrand() << endl;
                    cout << "Price: $" << electronics.getPrice() << endl;
                    cout << "Quantity: " << electronics.getQuantity() << endl;
                    cout << "Description: " << electronics.getDescription() << endl;
                    cout << "Model: " << electronics.getModel() << endl;
                    cout << "Warranty: " << electronics.getWarranty() << " years" << endl;
                    cout << "Technical Specifications: " << electronics.getTechspecs() << endl;
                    cout << "Material: " << electronics.getMaterial() << endl;
                } else {
                    cout << "No electronics product entered yet." << endl;
                }
                break;
            case 0:
                cout << "Program Terminated";
                exit(0);
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}

