/*************************************************************************
	> File Name: 50pow.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月25日 星期五 22时56分00秒
 ************************************************************************/

#include<iostream>
using namespace std;
ass Solution {
    public:
    double myPow(double x, int n) {
                if((abs(x-1)<1e-6)||(abs(x+1)<1e-6&&!(n%2))||(n==0)) return 1;
                if(abs(x+1)<1e-6&&n%2) return -1; 
                if((abs(x)<1e-6)||(x<1&&n>1000000)||(x>1&&n<-100000)) return 0;
                int m=n;
                double w=x;
                if(n<0) {m=-n;w=1/x;}
                int i,j,k=11,l;
                bool flag=false;
                double z,y=1;
                for(j=k;j>2;j--)
        {
                        if(!(m%j))
            {
                                z=myPow(w,m/j);
                                for(l=0;l<j;l++)
                                    y*=z;
                                flag=true;
                                break;
                            
            }
                    
        }
                if(!flag)
        {
                        z=myPow(w,m/2);
                        y=z*z;
                        if(m%2)
                            y*=w;
                    
        }      
                return y;
            
    }

};
