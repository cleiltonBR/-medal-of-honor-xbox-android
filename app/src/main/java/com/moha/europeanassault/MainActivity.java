package com.moha.europeanassault;

import android.app.Activity;
import android.os.Bundle;
import android.view.Gravity;
import android.widget.TextView;

public class MainActivity extends Activity {
    private static native String nativeRuntimeStatus();

    @Override
    public void onCreate(Bundle state) {
        super.onCreate(state);

        TextView view = new TextView(this);
        view.setGravity(Gravity.CENTER);
        view.setPadding(24, 24, 24, 24);
        view.setTextSize(16);

        try {
            System.loadLibrary("moha_android");
            view.setText(
                "Medal of Honor: European Assault\n\n"
                + nativeRuntimeStatus()
            );
        } catch (UnsatisfiedLinkError e) {
            view.setText("Falha ao carregar a biblioteca nativa:\n"
                + e.getMessage());
        }

        setContentView(view);
    }
}
