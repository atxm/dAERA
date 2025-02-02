#include "../header/Inventory.h"
#include <algorithm>
//Shoutout Mario for making an inventoryStub for his environment class, lot of inspiration taken from him

void InventoryManagement::addItem(Item* item) {
    if(backpack.size() < carryCap) {
        backpack.push_back(item);
    }
    else {
        std::cout << "Your backpack is full. Throw something out and try again.\n";
    }
}

void InventoryManagement::removeItem(Item* itemRemove) {
    std::vector<Item*>::iterator item;
    item = std::find_if(backpack.begin(), backpack.end(), 
    [&itemRemove](const Item* itemToRemove) {
        return itemRemove->getName() == itemToRemove->getName();
    });
    if(item !=backpack.end()) {
        std::cout << (*item)->getName() << " has been removed from the inventory.\n";
        backpack.erase(item);
        
    }
    else std::cout << itemRemove->getName() << " was not found in the inventory.\n";
}

void InventoryDisplay::displayInventory() {
    std::vector<Item*>::const_iterator item;
    const std::vector<Item*>& backpack = inventory.getBackpack();
    if(!backpack.empty()){
        std::cout << "Inventory: ";
        for(item = backpack.begin(); item != backpack.end(); ++item) {
            std::cout << (*item)->getName();
            if(std::next(item) != backpack.end()) {
                std::cout << ", ";
            }
        }
        std::cout << "\n";
    }
    else std::cout << "Nothing here...\n";
}

std::size_t InventoryDisplay::getNumItems() {
    const std::vector<Item*>& backpack = inventory.getBackpack();
    return backpack.size();
}

