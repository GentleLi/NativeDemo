package me.study.nativedemo;

/**
 * Created by admin on 2018/4/3.
 */

public class Meet {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("meet");
    }

    public static native String meeting(int a, int b);
}
