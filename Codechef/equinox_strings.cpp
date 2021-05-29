#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int n;
        long long int
          a, b;
        cin >> n >> a >> b;
        
        long long int sarthak=0, anuradha=0;
        string word;
        for (int i=0 ; i<n ; i++){
            cin >> word;
            if (word[0]=='E'||word[0]=='Q'||word[0]=='U'||word[0]=='I'||word[0]=='N'||word[0]=='O'||word[0]=='X'){
            sarthak+=a;
        }
        else {
            anuradha+=b;
        }
            //word.clear();
        }

        
        if(sarthak>anuradha){
            cout<<"SARTHAK"<<endl;
        }
        else if(sarthak<anuradha){
            cout<<"ANURADHA"<<endl;
        }
        else{
            cout<<"DRAW"<<endl;
        }
    }
	return 0;
}
