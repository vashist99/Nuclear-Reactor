//Vashist Hegde
//Indian Institute of Information Technology Vadodara
#include <bits/stdc++.h>

using namespace std;
#define ldb long double
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)



int main() {

    ldb tm,q,kf,rf,h,b,kc;
     
    tm = 5000;
    kf = 0.03;
    q = 430;
    rf = 0.53;
    //tbd
    // h = 0.02;
    // b = 0.5;
    // kc = 0.02;
    h = 0.02;
    b = 0.5;
    kc = 0.02;
    
    while(1){
        cout<<"Enter the parameter to be changed:\n";
        string c;
        cin>>c;
        cout<<"enter the value:\n";
        ldb num,temp;
        cin>>num;

        if(c=="tm"){
            temp = tm;
            tm=num;
        }
        else if(c=="h"){
            temp = h;
            h = num;
        }
        else if(c=="kf"){
            temp = kf;
            kf = num;
        }
        else if(c=="q"){
            temp = q;
            q = num;
        }
        else if(c=="rf"){
            temp = rf;
            rf = num;
        }
        else if(c=="b"){
            temp = b;
            b = num;
        }
        else if(c=="kc"){
            temp = kc;
            kc = num;
        }

        else{
            cout<<"Wrong input";
            continue;
        }

        ldb res2 = b/rf;
        res2++; 
        ldb res=0;
        res+=(1/kf);
        res+=(2/(h*rf));
        ldb temp3 = pow(res2,2);
        temp3--;
        res+=(temp3)/kc;
        ldb ts = tm - (q*res/(4*3.14));

        cout<<"Temperature outside the rod: "<<-ts<<"k"<<"\n";
        cout<<"Do you want to reset the value?:\n";
        char yn;
        cin>>yn;
        if(yn=='y'){
            if(c=="tm"){
            tm = temp;
        }
        else if(c=="h"){
            
            h = temp;
        }
        else if(c=="kf"){
            kf = temp;
        }
        else if(c=="q"){
            q = temp;
        }
        else if(c=="rf"){
            rf = temp;
        }
        else if(c=="b"){
            b = temp;
        }
        else if(c=="kc"){
            kc = temp;
        }
        }

    }
    return 0;
}