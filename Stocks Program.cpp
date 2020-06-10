//
//  Stocks Program.cpp
//  functions_example
//
//  Created by Miro on 6/1/20.
//  Copyright © 2020 Lorenzo Miro San Diego. All rights reserved.
//

//This is a program that calculates the total profit/loss in a stock transaction.

#include <iostream>

#include <iomanip>

using namespace std;

//f(x) prototype calc_profit_loss

float calc_profit_loss(float, float, int);

int main() {

    float buy, sell;

    int shares_qty;

    //ask for buying price

    cout << "Enter buy price: $";

    cin >> buy;

    //ask for selling price

    cout << "Enter sell price: $";

    cin >> sell;

    //ask for number of shares

    cout << "Enter share count: ";

    cin >> shares_qty;

    //call calc f(x)

    calc_profit_loss(buy, sell, shares_qty);

    return 0;

}

//f(x) calc_profit_loss, which takes buy price and sell price and number of shares bought, returning profit/loss

float calc_profit_loss(float buy_price, float sell_price, int shares) {

    float profit_loss = (sell_price - buy_price) * shares;

    //show profit calculated

    if (profit_loss >= 0) {

        cout << "Profit: $" << profit_loss << endl;

    }

    //show loss calculated

    else if (profit_loss < 0) {

        cout << "Loss: $" << profit_loss << endl;
        
    }

    return profit_loss;

}
