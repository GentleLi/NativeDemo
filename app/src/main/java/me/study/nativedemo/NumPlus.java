package me.study.nativedemo;

/**
 * Created by admin on 2018/4/3.
 */

public class NumPlus {


    static {
        System.loadLibrary("plus");
    }

    public static native int getSum(int a, int b);
}
