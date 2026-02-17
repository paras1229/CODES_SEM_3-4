/* code no 9 multiple try-catch blocks */
class handling
{
    public static void main(String[] args) {
        try {
            int a=10, b=2, c;
            c = a / b;
            System.out.println("Result: " + c);
        }
        catch(ArithmeticException e) {
            System.out.println("Arithmetic Exception: Division by zero is not allowed.");
        }
        try {
            int a[]={10,20,30};
            System.out.println(a[3]);
        }
        catch(ArrayIndexOutOfBoundsException e) {
            System.out.println("Array Index Out Of Bounds Exception: Invalid array index accessed.");
        }
    }

}