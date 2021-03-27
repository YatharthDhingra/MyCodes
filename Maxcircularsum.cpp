#include<iostream>
#include<climits>
using namespace std;

/*Case 1: The elements that contribute to the maximum sum are arranged such that no wrapping is there. Examples: {-10, 2, -1, 5}, {-2, 4, -1, 4, -1}. In this case, Kadane’s algorithm will produce the result.
Case 2: The elements which contribute to the maximum sum are arranged such that wrapping is there. Examples: {10, -12, 11}, {12, -5, 4, -8, 11}. In this case, we change wrapping to non-wrapping. Let us see how. Wrapping of contributing elements implies non-wrapping of non-contributing elements, so find out the sum of non-contributing elements and subtract this sum from the total sum. To find out the sum of non contributing, invert the sign of each element and then run Kadane’s algorithm. 
Our array is like a ring and we have to eliminate the maximum continuous negative that implies maximum continuous positive in the inverted arrays. Finally, we compare the sum obtained by both cases and return the maximum of the two sums.
*/

int kadane(int arr[],int n){
	int cs=0 , ms=0 ,check=0 , maximum=INT_MIN;
	for(int i=0;i<n;i++){
		cs+=arr[i];
		 if(cs<0){
			cs=0;
			check++;
			maximum=max(maximum  , arr[i]);
		}
		ms=max(ms,cs); 
	}
	return check!=n? ms : maximum;
}

int max_circularsum(int arr[] , int n){
	int max_kadane = kadane(arr,n);
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		arr[i]= -arr[i];
	}
	int max_negativesum = kadane(arr,n);
	int max_wrap = sum + max_negativesum;
	if(max_wrap!=0){
	 return (max_wrap > max_kadane) ? max_wrap : max_kadane;
	}
	else{
		return max_kadane;
	}
	return 0;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<max_circularsum(arr,n);
}	