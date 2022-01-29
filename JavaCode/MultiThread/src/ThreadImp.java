class Runner implements Runnable
{

    @Override
    public void run() {

        for (int i=0;i<10;i++)
        {
            System.out.println("Thread :"+ i);
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

public class ThreadImp {
  public static void main(String[] args)
  {
      Thread runable1=new Thread( new Runner());
      Thread runable2=new Thread( new Runner());

      runable1.start();
      runable2.start();
      try
      {
          runable1.join();
          runable2.join();
      } catch (InterruptedException e) {
          e.printStackTrace();
      }
  }
}
