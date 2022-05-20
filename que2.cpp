 #include <iostream>
 using namespace std;
 int main(){
     int a,b,c;
     cout<<"Enter the value of a "<<endl;
     cin>>a;
     cout<<"Enter the value of b "<<endl;
     cin>>b;
     cout<<"Enter the value of c "<<endl;
     cin>>c;
     if(a>b && a>c){
        cout<<"a is largest amomg three"<<endl;
     }
     else if(b>a && b>c){
         cout<<"b is largest among three"<<endl;
     }
     else{
         cout<<"c is largest among three"<<endl;

     }
     return 0;
 }