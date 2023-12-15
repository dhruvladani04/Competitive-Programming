import java.util.*;
class champion {
    public int findChampion(int n, int[][] edges) {
        int[] inDegrees = new int[n];

        for (int[] edge : edges) {
            inDegrees[edge[1]]++;
        }

        int possibleChampion = -1;

        for (int i = 0; i < n; i++) {
            if (inDegrees[i] == 0) {
                if (possibleChampion == -1) {
                    possibleChampion = i;
                } else {
                    return -1;
                }
            }
        }

        return possibleChampion;
    }
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int n=in.nextInt();
        int m=(n*(n-1))/2;
        int edges[][]=new int[m][m];
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<2;j++)
            {
                edges[i][j]=in.nextInt();
            }
        }
        champion ob=new champion();
        int ans=ob.findChampion(n, edges);
        System.out.println(ans);
    }
}