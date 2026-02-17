/* code no 6 object cloning */
class GFG implements Cloneable
{
    int x,y;
    GFG()
    {
        x=10;
        y=20;
    }
    public Object clone()throws CloneNotSupportedException
    {
        return super.clone();
    }
}
public class main
{
    public static void main(String args[])
    {
        GFG o1=new GFG();
        GFG o2=(GFG) o1.clone();
        System.out.println("o1: "+o1.x+" "+o1.y);
        System.out.println("o2: "+o2.x+" "+o2.y);
    }
}