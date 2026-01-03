/* code no.27 */
class Animal
{
    void eat()
    {
        System.out.println("Eating...");
    }
}
class Dog extends Animal  // single inheritance
{
    void bark()
    {
        System.out.println("Barking...");
    }
}
class cat extends Animal  // multilevel inheritance
{
    void sleep()
    {
        System.out.println("Sleeping...");
    }
}
class Hybrid
{
    public static void main(String[] args)
    {
        Dog d=new Dog();
        d.eat();
        d.bark();

        cat c=new cat();
        c.eat();
        c.sleep();
    }
}