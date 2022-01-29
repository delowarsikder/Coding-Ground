package com.company;

class MyRunnable implements Runnable
{

    @Override
    public void run() {
        for(int i=0;i<10;i++)
        {
            System.out.println("CSE "+i);
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

public class Hello {
    public static void main(String [] agrs)
    {
       Thread t1= new Thread(new MyRunnable());
       //Thread t = new Thread(ob, String.valueOf(new Multiplication()));

       Thread t2= new Thread(new MyRunnable());
       t1.start();
       t2.start();
       System.out.println(" return main");
       try {
           t1.join();
           t2.join();
       } catch (InterruptedException e) {
           e.printStackTrace();
       }

    }
}
