#include <iostream>
using namespace std;

int main(){
    int playerCoins = 40;
    int itemPrice = 60;

    if (playerCoins >= itemPrice){
        playerCoins -= itemPrice;

        cout << "Purchase successful!" << endl;
        cout << "Remaining Coins: " << playerCoins << endl;
    }

    else{
        cout << "Not enough coins to purchase." << endl;
        cout << "You need " << itemPrice - playerCoins << " coins more to purchase the item.";
    }

    return 0;
}