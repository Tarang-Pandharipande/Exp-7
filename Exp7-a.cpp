#include <iostream>
using namespace std;

int main(){
    int array1[5] = {19, 10, 8, 17, 9}; //declaring array
    int array2[] = {19 , 10, 8, 17, 9};
    int array3[5] = {19, 10, 8};

    //Printing the elements of the array
    for (int i =0; i<5; ++i){
        cout<<array1[i]<<endl;
    }

    //Creating an array 
    int n, i, j=0, k, l, temp;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int array4[n];
    int array5[n];
    for(i=0;i<n;i++){
        cout<<"Enter elements: ";
        cin>>array4[i];
    }

    //Display the array
    cout<<"Array entered by user: ";
    for(l=0;l<n;l++){
        cout<<array4[l]<<endl;
    }
    //Reverse array
    for(k=(n-1);k>=0;k--){
        temp = array4[k];
        array5[j] = temp;
        j++;
    }
    //Display reveres array
    cout<<"Reversed array is: ";
    for(l=0;l<n;l++){
        cout<<array5[l]<<endl;
    }
    //check if element exsits
    int marks[5], num, flag = 0, count = 0;

    // Input the elements into the array
    for(i = 0; i < 5; i++) {
        cout << "Enter element-" << i + 1 << ": ";
        cin >> marks[i];
    }

    // Input the element to be searched
    cout << "Enter element to be searched: ";
    cin >> num;

    // Search for the element in the array
    for(j = 0; j < 5; j++) {
        if(marks[j] == num) {
            cout << "Position of " << num << ": " << j + 1 << endl;
            count++;
            flag = 1;
        }
    }

    // Print the result
    if(flag == 0) {
        cout << "Element not present" << endl;
    } else {
        cout << "Element is present " << count;
        if(count > 1) {
            cout << " times" << endl;
        } else {
            cout << " time" << endl;
        }
    }
    //Sum and average 
    int a1[5];
float sum=0, avg;
for(i=0;i<5;i++) {
cout<<"Enter element: ";
cin>>a1[i];
}
for(j=0;j<5;j++) {
sum = sum + a1[j];
}
cout<<"Sum of elements = "<<sum<<endl;
avg = sum/5;
cout<<"Average = "<<avg<<endl;

//Max and min 
int max=0;
cout<<"Enter number of elements: ";
cin>>n;
int a[n];
for(i=0;i<n;i++){
cout<<"Enter element-"<<i<<": ";
cin>>a[i];
}
for(i=0;i<n;i++){
if(a[i]>max){
max=a[i];
}
}
int min=a[0];
for(i=0;i<n;i++){
if(min>a[i]){
min=a[i];
}
}
cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min;

    return 0;
}
