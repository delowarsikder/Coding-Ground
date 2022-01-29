#include <stdio.h>
#include <limits.h>

// A utility function to get sum of array elements
// freq[i] to freq[j]
int sum(int freq[], int i, int j);

int optimalSearchTree(int keys[], int freq[], int n)
{
    int cost[n][n];
    for (int i = 0; i < n; i++)
        cost[i][i] = freq[i];
    for (int L=2; L<=n; L++)
    {
        // i is row number in cost[][]
        for (int i=0; i<n-L+1; i++)
        {
            // Get column number j from row number i and
            // chain length L
            int j = i+L-1;
            cost[i][j] = INT_MAX;

            // Try making all keys in interval keys[i..j] as root
            for (int r=i; r<=j; r++)
            {
                // c = cost when keys[r] becomes root of this subtree
                int temp,c;
                if(r<j)
                {
                    temp= cost[r+1][j];
                }
                else
                {
                    temp=0;
                }
                if(r>i)
                {
                    c=cost[i][r-1]+temp+ sum(freq, i, j);
                }
                else
                {
                    c=0+temp+ sum(freq, i, j);
                }
//                int c = ((r > i)? cost[i][r-1]:0) +
//                        ((r < j)? cost[r+1][j]:0) +
//                        sum(freq, i, j);
//
                if (c < cost[i][j])
                {
                    cost[i][j] = c;
                }

            }
        }
    }
    return cost[0][n-1];
}

// A utility function to get sum of array elements
// freq[i] to freq[j]
int sum(int freq[], int i, int j)
{
    int s = 0;
    for (int k = i; k <=j; k++)
        s += freq[k];
    return s;
}

// Driver program to test above functions
int main()
{
    int keys[] = {10,12,20,35,46};
    int freq[] = {34,8,50,21,16};
    int n = sizeof(keys)/sizeof(keys[0]);
    printf("Cost of Optimal BST is %d ",
           optimalSearchTree(keys, freq, n));
    return 0;
}
