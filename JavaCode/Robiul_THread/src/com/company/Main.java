package com.company;

class MyThread extends Thread
{
    @Override
    public void run() {
        super.run();
        for(int i=0;i<10;i++)
        {
            System.out.println("KUET :"+i);
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
public class Main {

    public static void main(String[] args) {
    MyThread t1=new MyThread();
    MyThread t2=new MyThread();

    t1.start();
    t2.start();
    System.out.println("In main");
    try{
        t1.join();
        t2.join();
    } catch (InterruptedException e) {
        e.printStackTrace();
    }
    }
}
