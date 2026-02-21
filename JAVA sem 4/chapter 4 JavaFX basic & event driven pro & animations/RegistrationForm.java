import java.awt.*;

public class Form1 {

    public static void main(String[] args) {

        Frame f = new Frame("Student Registration Form");

        Label l1 = new Label("Name:");
        l1.setBounds(50, 80, 80, 30);
        TextField t1 = new TextField();
        t1.setBounds(150, 80, 150, 30);

        Label l2 = new Label("Gender:");
        l2.setBounds(50, 130, 80, 30);

        CheckboxGroup g = new CheckboxGroup();
        Checkbox c1 = new Checkbox("Male", g, false);
        c1.setBounds(150, 130, 60, 30);
        Checkbox c2 = new Checkbox("Female", g, false);
        c2.setBounds(220, 130, 80, 30);

        Label l3 = new Label("Course:");
        l3.setBounds(50, 180, 80, 30);

        Choice ch = new Choice();
        ch.setBounds(150, 180, 100, 30);
        ch.add("BCA");
        ch.add("MCA");
        ch.add("BBA");

        Label l4 = new Label("Address:");
        l4.setBounds(50, 230, 80, 30);

        TextArea ta = new TextArea();
        ta.setBounds(150, 230, 200, 80);

        Button b1 = new Button("Register");
        b1.setBounds(100, 330, 80, 30);

        Button b2 = new Button("Reset");
        b2.setBounds(200, 330, 80, 30);

        f.add(l1);
        f.add(t1);
        f.add(l2);
        f.add(c1);
        f.add(c2);
        f.add(l3);
        f.add(ch);
        f.add(l4);
        f.add(ta);
        f.add(b1);
        f.add(b2);

        f.setSize(450, 420);
        f.setLayout(null);
        f.setVisible(true);
    }
}
