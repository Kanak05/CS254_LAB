#include<bits/stdc++.h>
// #include<iostream>
// #include<math.h>
using namespace std;

void merge_in_place(int a[],int s,int m,int e){
    int dist=m;
    while(dist>=1){
        for(int i=s;i+dist<e;i++){
            if(a[i]>a[i+dist]){
                swap(a[i],a[i+dist]);
            }
        }
        if(dist==1){dist=0;}
        else{
            dist=ceil(dist/2.00);
        }
    }
}
void merge_sort(int a[],int s,int e){
    if(s>=e){return;}
    int mid=(s+e)/2;
    merge_sort(a,s,mid);
    merge_sort(a,mid+1,e);
    merge_in_place(a,s,mid+1,e);
}
    
int a[10000000];
int main(){
    ifstream inputFile("input3.txt");
    if(!inputFile.is_open()){
        cerr<<"Error opening the input file"<<endl;
    }
    ofstream outputFile("output3.txt");
    if(!outputFile.is_open()){
        cerr<<"Error opening the output file"<<endl;
    }
    int n;
    inputFile>>n;
    for(int i=0;i<n;i++){
        inputFile>>a[i];
    }
    clock_t start,end;
    start=clock();
    merge_sort(a,0,n);
    end=clock();
    double time_taken = double(end-start)/double(CLOCKS_PER_SEC);

    outputFile<<"The time taken to run the program is: "<<time_taken<<" sec for "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++){outputFile<<a[i]<<" ";}
    outputFile<<endl;
    return 0;
}