
/*class MyRunnable implements Runnable
{

    @Override
    public void run() {
        for (int i=0;i<10;i++)
        {
            System.out.println("Hello "+i);
        }
    }
}*/

class MyThread extends Thread
{
    @Override
    public void run() {
        super.run();
        for(int i=0;i<10;i++)
        {
            System.out.println("Hello "+i);
            try {
                Thread.sleep(100);
            }
            catch (InterruptedException e)
            {
                e.printStackTrace();
            }
        }
    }
}


public class thread {
    public static void main(String [] args)
    {
        MyThread t1=new MyThread();
        MyThread t2=new MyThread();
        t1.start();
        t2.start();
        try {
            t1.join();
            t2.join();

        }catch (InterruptedException e)
        {
            e.printStackTrace();
        }
        System.out.println("Start in main");
    }
}
