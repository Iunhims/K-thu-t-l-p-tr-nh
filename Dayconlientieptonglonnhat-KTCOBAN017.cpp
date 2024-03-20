#include <iostream>
#include <vector>

int tdcln(std::vector<int> A) {
    int max_sum = A[0];
    int t_sum = A[0]; 

    for (int i = 1; i < A.size(); i++) {
        t_sum = std::max(A[i], t_sum + A[i]);
        max_sum = std::max(max_sum, t_sum);
    }

    return max_sum;
}

int main() {
    int t;
    std::cin>>t;
    while(t--){
    	long long n;
    	std::cin>>n;
    	std::vector<int> A(n);
    	for(int i=0;i<n;i++) std::cin>>A[i];
    	std::cout<<tdcln(A)<<std::endl;
	}
}
