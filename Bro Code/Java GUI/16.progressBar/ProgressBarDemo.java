import java.awt.*;
import javax.swing.*;
import java.awt.color.*;


public class ProgressBarDemo {
   
    JFrame frame = new JFrame();
    JProgressBar bar = new JProgressBar();

    ProgressBarDemo(){

        bar.setValue(0);
        bar.setBounds(0,0,420,50);
        bar.setStringPainted(true);
        bar.setFont(new Font("Arial", Font.PLAIN,20));
        bar.setForeground(Color.red);
        bar.setBackground(Color.black);




        frame.add(bar);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(420,420);
        frame.setLayout(null);
        frame.setVisible(true);

        fill();

    }

    public void fill(){
        int counter = 0;
        while(counter<=100){
            
            bar.setValue(counter);
            try{
            Thread.sleep(50);
        }catch(InterruptedException e){
            e.printStackTrace();
        }
        counter += 1;
    }
    bar.setString("Done");
}
}

