import java.util.*;
class A implements Cloneable {
	private int a1;
	public A(int a) { a1 = a; }
	public void print() {
		System.out.println(a1);
	}
	public A clone() throws CloneNotSupportedException {
		return (A) super.clone();
	}
}

class B extends A {
	private List<Integer> b1;
	public B (int b) { 
        super(b);
		b1.add(b); 
		b1 = new ArrayList<Integer> ();
	}
	public void add(int x) { b1.add(x); }
	public void print() {
		for(int b: b1) {
			System.out.println(b);
		}
	}

	// Implement Clone
	public B clone() throws CloneNotSupportedException {
		B ret = (B) super.clone();
		ret.b1 = new ArrayList<Integer>();
		for(int temp : this.b1) {
			ret.b1.add(temp);
		}
		return ret;
	}
}

public class C {
	public static void main(String[] args) throws CloneNotSupportedException {
		B b1 = new B(1);
		B b2 = b1.clone();
		b2.add(10);
		b1.print();
		b2.print();
	}
}
	

