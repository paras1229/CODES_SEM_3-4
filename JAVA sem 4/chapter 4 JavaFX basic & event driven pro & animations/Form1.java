import java.awt.*;

import javax.swing.ButtonGroup;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JRadioButton;

public class Form1 {

    public static void main(String[] args) {

        Frame f = new Frame("Student Registration Form");

        Panel c = new Panel();
        c.setPreferredSize(new Dimension(400,450));
        c.setLayout(null);
        c.setBackground(new Color(240,240,240));

        Label l1 = new Label("Name:");
        l1.setFont(new Font("Arial", Font.BOLD, 20));
        l1.setBounds(50, 80, 80, 30);
        TextField t1 = new TextField();
        t1.setBounds(150, 80, 150, 30);
        t1.setFont(new Font("Arial", Font.PLAIN, 18));

        Label l2 = new Label("Gender:");
        l2.setFont(new Font("Arial", Font.BOLD, 20));
        l2.setBounds(50, 130, 80, 30);

        JRadioButton r1 = new JRadioButton("Male");
        r1.setBounds(150, 130, 80, 30);
        r1.setFont(new Font("Arial", Font.BOLD, 16));
        r1.setBackground(null);
        JRadioButton r2 = new JRadioButton("Female");
        r2.setBackground(null);
        r2.setFont(new Font("Arial", Font.BOLD, 16));
        r2.setBounds(230, 130, 80, 30);
        ButtonGroup bg = new ButtonGroup();
        bg.add(r1);
        bg.add(r2);

        Label l3 = new Label("Course:");
        l3.setFont(new Font("Arial", Font.BOLD, 20));
        l3.setBounds(50, 180, 80, 30);

        Choice ch = new Choice();
        ch.setFont(new Font("Arial", Font.BOLD, 16));
        ch.setBounds(150, 185, 100, 40);
        ch.add("select...");
        ch.add("BCA");
        ch.add("BCOM");
        ch.add("BBA");

        Label l4 = new Label("Address:");
        l4.setFont(new Font("Arial", Font.BOLD, 19));
        l4.setBounds(48, 230, 80, 30);

        TextArea ta = new TextArea();
        ta.setFont(new Font("Arial", Font.PLAIN , 18));
        ta.setBounds(150, 230, 200, 80);

        Button b1 = new Button("Register");
        b1.setBackground(Color.GREEN);
        b1.setFont(new Font("Arial", Font.BOLD, 14));
        b1.setBounds(100, 330, 80, 40);

        Button b2 = new Button("Reset");
        b2.setBackground(Color.GREEN);
        b2.setFont(new Font("Arial", Font.BOLD, 14));
        b2.setBounds(200, 330, 80, 40);

        c.add(l1);
        c.add(t1);
        c.add(l2);
        c.add(r1);
        c.add(r2);
        c.add(l3);
        c.add(ch);
        c.add(l4);
        c.add(ta);
        c.add(b1);
        c.add(b2);
        f.add(c);

        f.setSize(500, 720);
        f.setLayout(new FlowLayout());
        f.setVisible(true);
    }
}