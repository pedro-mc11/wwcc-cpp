#include <iostream>
#include <vector>
using namespace std;

struct Recipe {
    string recipeName;
    vector<string> ingredients;
    vector<string> recipeSteps;
};

void addRecipe(vector<Recipe>& recipeList) {
    Recipe newRecipe;
    int ingredientCount;
    int stepCount;

    cout << "Enter recipe name: ";
    cin.ignore();
    getline(cin, newRecipe.recipeName);

    cout << "How many ingredients? ";
    cin >> ingredientCount;
    cin.ignore();

    for(int i = 0; i < ingredientCount; i++) {
        string ingredient;
        cout << "Enter ingredient " << i + 1 << ": ";
        getline(cin, ingredient);
        newRecipe.ingredients.push_back(ingredient);
    }
    
    cout << "\nHow many steps? ";
    cin >> stepCount;
    cin.ignore();

    for(int i = 0; i < stepCount; i++) {
        string step;
        cout << "Enter step " << i + 1 << ": ";
        getline(cin, step);
        newRecipe.recipeSteps.push_back(step);
    }
    
    recipeList.push_back(newRecipe);

    cout << "\nRecipe added successfully!" << endl;
}

void displayRecipes(vector<Recipe>& recipeList) {
    cout << "\nALL RECIPES" << endl;
    cout << "-----------" << endl;

    if (recipeList.empty()) {
        cout << "There are no recipes in this list, try adding one!" << endl;
    }
    int recipeNum = 0;
    for (const auto& recipe : recipeList) {
        cout << recipeNum++ << ". " << recipe.recipeName << "\n";
    }
}
int main() {
    vector<Recipe> recipeList;
    int choice;
   

    cout << "DYNAMIC RECIPE MANAGER" << endl;
    cout << "----------------------" << endl;
    cout << "1. Add Recipe" << endl; 
    cout << "2. Display All Recipes" << endl;
    cout << "3. Exit" << endl;

    do {
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice < 1 || choice > 3) {
            do {
                cout << "Enter valid choice: ";
                cin >> choice;
            }while(choice < 1 || choice > 6);

        }
        switch (choice) {
            case 1:
                addRecipe(recipeList);
                break;
            case 2:
                displayRecipes(recipeList);
                break;
            case 3:
                cout << "\nThanks for using Dynamic Recipe Manager!";
                exit(-1);
                break;
        }
    }while(choice < 1 || choice > 3);

    

 
    return 0;
}