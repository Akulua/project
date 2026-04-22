#include <iostream>

int main() {
    using namespace std;

    int dayWeek;

    cout << "___________Restaurant Menu___________" << endl;
    cout << "Enter day of the week (1-7):" << endl;
    cout << "Monday    - 1" << endl;
    cout << "Tuesday   - 2" << endl;
    cout << "Wednesday - 3" << endl;
    cout << "Thursday  - 4" << endl;
    cout << "Friday    - 5" << endl;
    cout << "Saturday  - 6" << endl;
    cout << "Sunday    - 7" << endl;
    cout << "Choice: ";
    cin >> dayWeek;

    switch (dayWeek) {
    case 1:
        cout << "Soup: Classic Borscht with sour cream." << endl;
        cout << "Salad: Vinaigrette with beans." << endl;
        cout << "Main: Chicken Kyiv with mashed potatoes." << endl;
        break;
    case 2:
        cout << "Soup: Tomato basil cream soup." << endl;
        cout << "Salad: Greek salad with feta and olives." << endl;
        cout << "Main: Pasta Carbonara." << endl;
        break;
    case 3:
        cout << "Soup: Salmon fish soup (Ukha)." << endl;
        cout << "Salad: 'Mimosa' salad with tuna." << endl;
        cout << "Main: Steamed cod fillet with broccoli." << endl;
        break;
    case 4:
        cout << "Soup: Solyanka (mixed meat soup)." << endl;
        cout << "Salad: Coleslaw (cabbage and carrots)." << endl;
        cout << "Main: Beefsteak with egg and rice." << endl;
        break;
    case 5:
        cout << "Soup: Chicken noodle soup with ginger." << endl;
        cout << "Salad: Chuka salad with nut sauce." << endl;
        cout << "Main: Pork Teriyaki with sesame seeds." << endl;
        break;
    case 6:
        cout << "Soup: Cheese cream soup with croutons." << endl;
        cout << "Salad: Caesar salad with chicken." << endl;
        cout << "Main: Homemade dumplings (Pelmeni) with butter." << endl;
        break;
    case 7:
        cout << "Soup: Mushroom cream soup." << endl;
        cout << "Salad: Roasted beet salad with soft cheese." << endl;
        cout << "Main: Duck leg confit with berry sauce." << endl;
        break;
    default:
        cout << "Error: An incorrect number has been entered!" << endl;
        return 1;
    }

    cout << "Drinks: Wild berry juice or Tea." << endl;
    cout << "Side: Freshly baked ciabatta." << endl;

    return 0;
}