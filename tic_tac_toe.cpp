#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        char game[3][3];
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin >> game[i][j];
            }
            cout << endl;
        }
        
        for (int i=0; i<3; i++){
            if((game[i][0]==game[i][1]==game[i][2]) || (game[0][i]==game[1][i]==game[2][i]) || game[0][0]==game[1][1]==game[2][2] || game[0][2]==game[1][1]==game[2][0])
                cout << "1" << endl;
            else if((game[i][0]==game[i][1]==game[i][2] && game[i+1][0]==game[i+1][1]==game[i+1][2]) || (game[0][i]==game[1][i]==game[2][i] && game[0][i+1]==game[1][i+1]==game[2][i+1]))    
                cout << "3" << endl;
            else
                cout << "2" << endl;
        }
    }
	return 0;
}
