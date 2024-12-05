class Employee {
        String name;
        int age;
        String role;
        double salary;
        
public Employee(String name, int age, String role, double salary) {
        this.name = name;
        this.age = age;
        this.role = role;
        this.salary = salary;
    }
public void display(){
    System.out.println("  name: " + name +"  age: "+ age+"  role: "+role+"  salary:$ "+salary);
}}
class Main {
    public static void main(String[] args) {
    Employee emp1 = new Employee("abebe",23,"manager",200.00);
    Employee emp2 = new Employee ("kebede",44,"ceo",9000.00);
    emp1.display();
    System.out.println();
    emp2.display();
        
    }}