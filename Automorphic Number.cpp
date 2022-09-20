string is_AutomorphicNumber(int n)
		{
		    int sq = n*n;
		    while(n>0){
		        int digit = n%10;
		        int digitSq = sq%10;
		        if(digit!=digitSq){
		            return "Not Automorphic";
		        }
		        sq/=10;
		        n/=10;
		    }
		    return "Automorphic";
		}
