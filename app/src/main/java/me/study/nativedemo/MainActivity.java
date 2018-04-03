package me.study.nativedemo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tvOne = (TextView) findViewById(R.id.sample_text_one);
        tvOne.setText(Hello.sayHello());

        // Example of a call to a native method
        TextView tvTwo = (TextView) findViewById(R.id.sample_text_two);
        tvTwo.setText(Meet.meeting(1, 2));

        // Example of a call to a native method
        TextView tvThr = (TextView) findViewById(R.id.sample_text_thr);
        tvThr.setText(stringFromJNI());


    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}
