package me.study.nativedemo;

/**
 * Created by admin on 2018/6/11.
 */

public class Calculate {


    static {
        System.loadLibrary("calculate");
    }

    /**
     * 加法操作
     *
     * @param numOne
     * @param numTwo
     * @return
     */
    public static native int add(int numOne, int numTwo);

    /**
     * 减法操作
     *
     * @param numOne
     * @param numTwo
     * @return
     */
    public static native float minus(float numOne, float numTwo);

    /**
     * 乘法操作
     *
     * @param numOne
     * @param numTwo
     * @return
     */
    public static native double multiple(double numOne, double numTwo);

    /**
     * 除法操作
     *
     * @param numOne
     * @param numTwo
     * @return
     */
    public static native double divide(double numOne, double numTwo);

}
