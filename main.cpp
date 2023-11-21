#include <iostream>
#include <cstdlib>
using namespace std;
//int main() {
//int num=0;
//int mul=1;
//while (num>=0){
//    cin>>num;
//    if(num%2==1){
//        continue;
//    }
//    if(num<0){
//        break;
//    }
//    mul*=num;
//    cout<<"Mul="<<mul<<endl;
//}
int main_1 () {
    int sum=0;
    for(int i=1;i<=10; i++){
        cout<<i<<" ";

    }

}
int main_2 () {
    int num;
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        cout << i << " \n";
        sum += i;
    }
    cout << sum << endl;
}

int main_3 (){
    int sum=0;
    for(int i=1;i<=100; i++){
        if (i%5==0){
            continue;
        }
        cout<<i<<" ";

    }

}

int main_4 (){
    int n;
    cout<<"n= ";
    cin>>n;
    for(int i=10;i<=n; i+=10){

        cout<<i<<", ";

    }

}

int main_5(){
    int line = 0;
    for(char c = 'A'; c <= 'Z'; c++){
        cout<< c << " ";
        line++;
        if (line == 5){
            cout<<endl;
            line = 0;
        }
    }
}

int main_7 (){
    int n;
    cout<<"n=";
    cin>>n;
    bool f=1;
    for(int i=2; i<n; i++){
        if(n%i==0){
            cout<<"Not prime\n";
            f=0;
            break;
        }if(f){
            cout<<"Prime\n";

        }
    }
}

int main_14(){
    int n;
    cin>>n;
    if(n==0){
        cout<<"the depth is "<<n;
    }else{
        for (int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<i;
            }
            cout<<endl;
        }
    }
}

int main_15 (){
    int n;
    cin>>n;
    float sum=0;
    for(int i=1; i<=n; i++){
        sum = sum + 1/(float)i;
        if(i==n){
            cout<<"1/"<<i;
        }else{
            cout<<"1/"<<i<<"+";
        }
    }
    cout<<"\nThe sum is "<<sum<<endl;
}

int main_16(){
    int year=5;
    float rent=1000;
    float total_yearly=0;
    float total_5_years=0;
    for(int i=1; i<=year; i++){
        rent = rent * 1.03;
        total_yearly = rent * 12;
        total_5_years = total_5_years = total_yearly;
        cout<<"Rent in "<<i<<" year is "<<rent<<endl;
        cout<<"Total rent for "<<i<<" year is "<<total_yearly<<endl;
    } cout<<"Total for 5 years is "<<total_5_years<<endl;
}

int main_17(){
    int n;
    cin>>n;
    int sum=0;
    while(n != 0) {
        sum = sum + (n % 10);
        n=n/10;
    }
    cout<<sum<<endl;
}

int main_18 (){
    int b;
    cin>>b;
    int j=1;
    int r;
    int decimal = 0;
    while(b>0){
        r=b%10;
        decimal = decimal +r * j;
        b=b/10;
        j=j*2;
    }
    cout<<"Decimal:"<<decimal<<endl;
}

int main_19(){
    int n;
    cin>>n;
    while(n>1){
        
    }
}


int main () {
    main_18 ();
}




