#include<bits/stdc++.h>
using namespace std;
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i; j++){
            cout<<"*" ;
        }
        cout<<endl;

    }

}

void print3(int n){
      for(int i=1;i<=n;i++){
        for(int j=1;j<=i; j++){
            cout<<j <<" ";
        }
        cout<<endl;

    }


}

void print4(int n){
      for(int i=1;i<=n;i++){
        for(int j=1;j<=i; j++){
            cout<<i <<" ";
        }
        cout<<endl;

    }


}
void print5(int n){
      for(int i=0;i<n;i++){
        for(int j=1;j<=n-i; j++){
            cout <<"*";
        }
        cout<<endl;

    }


}

void print6(int n){
    

    for (int i =0 ; i<n; i++){
        //space
        for (int j=1; j<=n-i-1;j++){

            cout<< " ";
        }
        //star
        for (int j=1; j<=2*i+1;j++){
            cout<< "*";
        }


        //space
        for (int j=1; j<=n-i-1;j++){
            cout<< " ";
            


        }
        cout<<endl;
        
    }
    


}

void print7(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print8(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
        
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print9(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    

    }
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print10(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            if((i + j)%2==0){
                cout<<1<<" ";
            }
            else {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}

void print11(int n){
    int space=2*(n-1);

    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++ ){
            cout<<j;
        }
        
        
        for(int j = 1; j <= space; j++){
            cout << " ";
        }

        for(int j=i;j>=1;j-- ){
            cout<<j;
        }
        cout<<endl;
        space-=2;








    
        
        
        

    }
}

void print12(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
}

void print13(int n){
    for(int i=0;i<n;i++){
        for(char ch='A'; ch <= 'A' + i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}


void print14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void print15(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch;

        }
        cout<<endl;
    }
}












int main(){
    int n;
    cout<<"Enter a number: ";
    cin>> n;
    print15(n);
    return 0;
}