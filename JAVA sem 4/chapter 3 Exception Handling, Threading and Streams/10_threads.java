/* code no 10 threads */
class A extends Thread
{
    public void run()
    {
        try {
            for(int i=1; i<=5; i++) 
            {
               System.out.println("java");
               Thread.sleep(1000); 
            }
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
class main
{
    public static void main(String args[])
    {
        A a1=new A();
        a1.run();
    }
}