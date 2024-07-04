// Program Hero's inventory 2.0
// Describes work with vectors

#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> Inventory;
	Inventory.push_back("sword");
	Inventory.push_back("armor");
	Inventory.push_back("shield");
	std::cout << "You have " << Inventory.size() << " items.\n";
	std::cout << "\nYour items: \n";

	for (unsigned int i = 0; i < Inventory.size(); i++)
	{
		std::cout << Inventory[i] << std::endl;
	}

	std::cout << "\nYou trade your sword for a battle axe.";
	Inventory[0] = "battle axe";
	std::cout << "\nYour items: \n";

	for (unsigned int i = 0; i < Inventory.size(); i++)
	{
		std::cout << Inventory[i] << std::endl;
	}

	std::cout << "\nThe item name '" << Inventory[0] << "' has";
	std::cout << Inventory[0].size() << " letters in it.\n";
	std::cout << "\nYour shield is destroyed in a fierce battle.";
	Inventory.pop_back();
	std::cout << "Your items:\n";

	for (unsigned int i = 0; i < Inventory.size(); i++)
	{
		std::cout << Inventory[i] << std::endl;
	}

	std::cout << "\n You were robbed of all of your possessions by a thief.";
	Inventory.clear();
	if (Inventory.empty())
	{
		std::cout << "\nYou lost all your items.\n";
	}
	else
	{
		std::cout << "\nYou have at least one item.\n";
	}

	return 0;
}