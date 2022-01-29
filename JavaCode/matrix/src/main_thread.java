import java.util.*;

class Multiplication implements Runnable {

    public static int n1 , m1, n2, m2, row , column;

    public static int  mat1[][], mat2[][], results[][],sum=0;

    public Multiplication(int r,int c)
    {
        row = r;
        column = c;
    }
    public Multiplication()
    {

    }
    public void inputMatrix(int nr,int mc,int nnr,int mmc)
    {
        Scanner input = new Scanner(System.in);

        n1 = nr;
        m1 = mc;
        n2 = nnr;
        m2 = mmc;

        mat1 = new int[n1][m1];
        System.out.println("Enter the element of first matrix : ");
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
            {
                mat1[i][j] = input.nextInt();
            }
        }


        mat2 = new int[n2][m2];
        System.out.println("Enter the element of second matrix : ");
        for(int i=0;i<n2;i++)
        {
            for(int j=0;j<m2;j++)
            {
                mat2[i][j] = input.nextInt();
            }
        }
        results = new int[n1][m2];
        input.close();
    }

    @Override
    public void run() {
        sum=0;

        for(int i =0;i<m1;i++)
        {
            sum+= mat1[row][i]*mat2[i][column];
        }
        results[row][column] = sum;
    }

    public void printResult()
    {
        int i,j;
        System.out.println("Result matrix multiplication :  ");
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m2;j++)
            {
                System.out.print(results[i][j] + " ");
            }
            System.out.print("\n");
        }
    }
}

public class main_thread {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int row1,col1,row2,col2,i,j;
        System.out.println("Enter the first matrix row ");

        row1 = input.nextInt();
        System.out.println("Enter the first matrix column ");
        col1= input.nextInt();

        System.out.println("Enter the Second matrix row ");

        row2= input.nextInt();
        System.out.println("Enter the Second matrix column");

        col2= input.nextInt();
        input.close();
        Multiplication obInput = new Multiplication();

        obInput.inputMatrix(row1,col1, row2,col2);

        for( i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                Multiplication ob  = new Multiplication(i,j);
                Thread t = new Thread(ob, String.valueOf(new Multiplication()));
                t.start();

                try {
                    t.join();
                } catch (InterruptedException e) {

                    System.out.println("exception catch");
                }

            }
        }

        obInput.printResult();
    }
}