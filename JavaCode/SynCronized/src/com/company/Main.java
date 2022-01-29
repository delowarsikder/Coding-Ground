package com.company;
import java.util.*;
class Processor extends Thread
{
    private volatile boolean control=true;
    @Override
    public void run() {
        super.run();
        while (control)
        {
            System.out.println("Hello Kuet");
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }

    public void Control() {
//        this.control = control;
        control=false;
    }
}
public class Main {

    public static void main(String[] args) {

        Processor proc1=new Processor();
        proc1.start();
        System.out.println("Press return key stop ...");//return key means press enter
        Scanner scanner=new Scanner(System.in);
        scanner.nextLine();
        proc1.Control();
    }
}
