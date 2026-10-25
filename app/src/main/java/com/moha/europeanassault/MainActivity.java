package com.moha.europeanassault;

import android.app.Activity;
import android.os.Bundle;
import android.view.Gravity;
import android.widget.TextView;

public class MainActivity extends Activity {
    @Override public void onCreate(Bundle state) {
        super.onCreate(state);
        TextView view = new TextView(this);
        view.setGravity(Gravity.CENTER);
        view.setText("Medal of Honor: European Assault\n\nAndroid ARM64 build scaffold.\nGame runtime integration is not complete.");
        setContentView(view);
        try {
            System.loadLibrary("moha_android");
        } catch (UnsatisfiedLinkError e) {
            view.append("\nNative library failed to load.");
        }
    }
}
