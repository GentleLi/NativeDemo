package me.study.nativedemo;

/**
 * Created by admin on 2018/4/3.
 */

public class Hello {

    static {
        System.loadLibrary("hello");
    }

    public static native String sayHello();
}
