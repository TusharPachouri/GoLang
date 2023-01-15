#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count=1;
    int dec = 1;
    
    for (int i = str.size() - 1; i >= 0; i--)
    {   
        if (str[i] == 0)
        {
            count++;
            continue;
        }
        else
        {
            dec = dec + pow(2, count);
        }
    }cout<<dec;

    return 0;
}


//java by remainder method
// import java.util.Scanner;
// import java.lang.Math;
// public class Main {

// 	public static void main(String[] args) {
// 		// Write your code here
// 		Scanner s = new Scanner(System.in);
// 		int n = s.nextInt();
// 		int count = 0;
// 		int decimal =0;
		
// 		while(n>0){
// 			int mul = 0;
// 			int t = n%10;
// 			if(t == 0){
// 				count++;
				
// 			}
// 			else{
// 				mul =(int)Math.pow(2, count);
// 				count++;
// 			}
// 			decimal = decimal +mul;
// 			n = n/10;
// 		}
// 		System.out.println(decimal);

// 	}
// }