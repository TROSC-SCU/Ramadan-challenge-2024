// The challenge today is very easy we want you to convert this code from java to cpp :)

import java.util.Scanner;

class Calculator{

    public double summation(double num1,double num2){
        
        return num1 + num2;
    }
    
    public double subtraction(double num1,double num2){
 
        return num1 - num2;
    }
    
    public double multiplication(double num1,double num2){
 
        return num1 * num2;
    }
    
    public double divison(double num1,double num2){
 
        return num1 / num2;
    }


public static void main(String[] args) {
Scanner in=new Scanner(System.in);
Calculator result=new Calculator();
char op;
double num1,num2;
System.out.print("Enter first number : ");
num1=in.nextDouble();
System.out.print("Enter operator (+,-,*,/) : ");
op=in.next().charAt(0);
System.out.print("Enter second number : ");
num2=in.nextDouble();
switch (op) {
    case '+':
        System.out.println(num1+" + "+num2+" = "+result.summation(num1, num2));
        break;
    case '-':
        System.out.println(num1+" - "+num2+" = "+result.subtraction(num1, num2));
        break;
    case '*':
        System.out.println(num1+" * "+num2+" = "+result.multiplication(num1, num2));
        break;
    case '/':
        System.out.println(num1+" / "+num2+" = "+result.divison(num1, num2));
        break;
    default:
        System.out.println("Invalid operator");
        break;
}
}
}
