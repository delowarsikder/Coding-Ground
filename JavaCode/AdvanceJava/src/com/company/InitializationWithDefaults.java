package com.company;

import javafx.stage.Stage;

//public class InitializationWithDefaults extends javafx.application.Application {
//
public class InitializationWithDefaults{
    static {
        System.out.println("InitializationWithDefaults.static initializer");
    }
    public static void main(String[] args) {

        final InitializationWithDefaults initializationWithDefaults =new InitializationWithDefaults();
//        System.out.println("Hello world!");

        //test toString method


    }
    {
        System.out.println("InitializationWithDefaults.instance initializer");
    }

    //
    private boolean aBoolean;
    private byte aByte;
    private short aShort;
    private  int anInt;
    private  long aLong;
    private char aChar;
    private float aFloat;
    private  double aDouble;
    private Object object;


    public InitializationWithDefaults(){
        System.out.println("Boolean Member = "+aBoolean);
        System.out.println("byte Member = "+aByte);
        System.out.println("short Member = "+aShort);
        System.out.println("Int member = "+anInt);
        System.out.println("Long Member = "+aLong);
        System.out.println("Char Member ="+aChar);//nothing print
        System.out.println("Char Member ="+Character.codePointAt(new char[] {aChar},0));
        System.out.println("Float Member ="+aFloat);
        System.out.println("Double Member="+aDouble);
        System.out.println("referenceMember ="+object);
    }

}

