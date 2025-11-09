// Static 
#include<stdio.h>
int main(){
    int a = 5,b = 7,c;
    c = a + b;
    printf("%d",c);
return 0;
}

// Dynamic
/*#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    c = a + b;
    printf("%d",c);
return 0;
}

// A program that can add from 5 to 20
#include<stdio.h>
int main(){
    int i , sum = 0;
    for(i=5;i<=20;i++){
        sum = sum + i;
    }
    printf("%d",sum);
return 0;
}

// A program that can add odd values from 5 to 20
#include<stdio.h>
int main(){
    int i , sum = 0;
    for(i=5;i<=20;i++){
        if(i%2 != 0){ // i%2 == 1
            sum = sum + i;
        }
    }
    printf("%d",sum);
return 0;
}

// A program that can multiply even numbers from 5 to 20
#include<stdio.h>
int main(){
    int i , product = 1;
    for(i=5;i<=20;i++){
        if(i%2 == 0){
            product = product * i;
        }
    }
    printf("%d",product);
return 0;
}

// A program that can add from 2nd and 4th index of an array
#include<stdio.h>
int main(){
    int arr[10],i,n,sum=0;
    printf("Total index of the array is :\n");
    scanf("%d",&n);
    printf("Enter the values of the array :\n");
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Show the values of the array :\n");
    for(i=1;i<=n;i++){
        printf("%d\n",arr[i]);
    }
    sum = sum + arr[2] + arr[4];
    printf("The sum of 2nd and 4th index is : %d",sum);
return 0;
} */