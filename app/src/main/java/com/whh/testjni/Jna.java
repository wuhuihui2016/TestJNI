package com.whh.testjni;

public class Jna {

    static {
        System.loadLibrary("whhjni");
    }

    public native String getStringFromNDK();

    public static native int sum(int a, int b);


}
