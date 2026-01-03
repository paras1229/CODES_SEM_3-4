/* code no 29 method overriding */
class Animal
{
    void eat()
    {
        System.out.println("Eating...");
    }
}
class Dog extends Animal
{
    void eat()  // overriding the eat method of Animal class
    {
        System.out.println("eating bread...");
    }
}
class Cat extends Animal
{
    void eat()  // overriding the eat method of Animal class
    {
        System.out.println("eating rat...");
    }
}
class Lion extends Animal
{
    void eat()  // overriding the eat method of Animal class
    {
        System.out.println("eating meat...");
    }
}
class method2
{
    public static void main(String[] args)
    {
        Animal a;
        a=new Dog();
        a.eat();
        a=new Cat();
        a.eat();
        a=new Lion();
        a.eat();
    }
}