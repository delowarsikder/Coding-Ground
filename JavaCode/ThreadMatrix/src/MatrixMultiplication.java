
import java.util.*;

public class MatrixMultiplication
{
    static  int [][] matrix1=new int[3][3];
    static  int [][] matrix2=new int[3][3];
    static  int [][]result=new int [3][3];

    public static void main(String [] agrs)
    {
        for (int i=0;i<matrix1.length;i++)
        {
            for(int j=0;j<matrix1[i].length;j++)
            {
                matrix1[i][j]=i;
            }
        }

        for (int i=0;i<matrix2.length;i++)
        {
            for(int j=0;j<matrix2[i].length;j++)
            {
                matrix2[i][j]=i;
            }
        }
        /*System.out.println("Matrix 2:");
        for (int i=0;i<matrix2.length;i++)
        {
            for(int j=0;j<matrix2[i].length;j++)
            {
                System.out.print(matrix2[i][j]+ " ");
            }
            System.out.print("\n");
        }*/
    }
}