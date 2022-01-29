package com.company;

import java.sql.SQLOutput;

class Mythread extends Thread
{
    @Override
    public void run() {
        super.run();
        for(int i=0;i<10;i++)
        {
            System.out.println("Number :"+i);
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
    Mythread t1=new Mythread();
    Mythread t2=new Mythread();

    t1.start();
    t2.start();
    System.out.println("in main");

    try {
        t1.join();
        t2.join();
    } catch (InterruptedException e) {
        e.printStackTrace();
    }

    }
}
