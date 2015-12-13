//
//  Lab IV Part III
//
//  Created by Edgar Esparza on 6/15/15.


#include <iostream>
using namespace std;

int tortoisePick(int numberOfEggs);

int main()
{
    bool gameOver = false; // flag
    int numberOFEggs = 13;
    int player = 0; // 1 for Tortoise , 2 for Hare
    int selected;
    cout << "Would you like to go first or second? " << endl;
    
    cin >> player;
    
    if (player==1)
        player = 2;
    else
        player = 1;
    
    
    while( !gameOver )
    {
        
        cout << "Number of eggs remaining is " << numberOFEggs << endl;
        if (player == 2){
            
            cout << "Enter your selection (1, 2 or 3) "
            << (player==1 ? "Tortoise":"Hare") << " ";
            cin >> selected;
        }
        else{
            selected = tortoisePick(numberOFEggs);
            cout << "The computer picked: " << selected << endl;
        }
        
         int tortoisePick(numberOFEggs){
        
            int result;
            
            if((numberOfEggs %4) !=0)
                result = (numberOfEggs%4);
            else
                result = 1;
            
            return result;
        }
    }
}
