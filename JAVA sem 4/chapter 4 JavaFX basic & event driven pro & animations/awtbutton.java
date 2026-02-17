import java.awt.*;
class awtbutton
{
     public static void main(String[] args)
    {
        Frame f = new Frame("AWT button example");
        Button b1 = new Button("Click me");
        b1.setBackground(Color.blue);
        b1.setForeground(Color.WHITE);
        b1.setFont(new Font("Arial", Font.BOLD, 14));
        b1.setBounds(150,50,100,50);

        Button b2 = new Button("Press me");
        b2.setBackground(Color.red);
        b2.setForeground(Color.WHITE);
        b2.setFont(new Font("Arial", Font.BOLD, 14));
        b2.setBounds(150,150,100,50);

        f.add(b1);
        f.add(b2);
        f.setSize(400,300);
        f.setLayout(null);
        f.setVisible(true);
    }
}