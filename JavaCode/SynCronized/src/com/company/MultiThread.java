package com.company;

import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;

class processor implements Runnable
{
    private int id;

    public processor(int id)
    {
        this.id=id;
    }
    @Override
    public void run() {
        System.out.println("Staring id..."+id);
        try {
            Thread.sleep(500);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println("complete id : "+id);
    }
}
public class MultiThread {
    public static void main(String [] args) throws InterruptedException {
        ExecutorService executor= Executors.newFixedThreadPool(2);
        for(int i=0;i<5;i++)
        {
            executor.submit(new processor(i));
        }
        executor.shutdown();
        System.out.println("All task submitted...");
        executor.awaitTermination(1, TimeUnit.DAYS);
        System.out.println("All task are completed...");

    }
}
