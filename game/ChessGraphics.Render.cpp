#include <iostream>
#include "ChessBoard.h"
#include "ChessGraphics.h"

using namespace std;

void ChessGraphics::Render(void) const {
    char szBottom[ ] = "ABCDEFGH";

    for (int i=0;i<=8;i++){
        for(int j=0; j<=8; j++){
            if(i==8){
                if(j==0){
                   cout << " ";
                }
                else {
                    cout << szBottom[j-1] << " ";
                }
                continue;
            }
            if(j==0) {
                cout << 8 - i << " ";
            }
            else{
                cout << ToChar(pBoard->GetPiece(j - 1, i));
            }
        }
        cout << endl;
    }

    return;
}
