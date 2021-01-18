import java.util.*;

public class B{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for(int t=0; t<T; ++t){
            int n = sc.nextInt();
            int x = sc.nextInt();
            int m = sc.nextInt();


            Interval arr[] = new Interval[m];
            while(m>0){
                Interval temp = new Interval(sc.nextInt(), sc.nextInt());
                if(temp.check(x)){
                    arr = new Interval[m];
                    arr[0] = temp;
                    break;
                }
                m--;
            }

            for(int i=1; i<m; ++i){
                arr[i] = new Interval(sc.nextInt(), sc.nextInt());
            }
            boolean present = false;
            Stack<Interval> stack = mergeIntervals(arr);
            int count = 0;

            while(!stack.isEmpty()){
                Interval temp = stack.pop();
                if(temp.check(x))
                    present = true;
                if(present)
                    count += temp.end - temp.start + 1;
            }

            if(present){
                System.out.println(count);
            }
            else
                System.out.println(1);
        }
        sc.close();
    }

    public static Stack<Interval> mergeIntervals(Interval arr[])  
    {  
        // Test if the given set has at least one interval  
        if (arr.length <= 0)  
            return new Stack<Interval>();  
    
        // Create an empty stack of intervals  
        Stack<Interval> stack=new Stack<>(); 
    
        // sort the intervals in increasing order of start time  
        Arrays.sort(arr,new Comparator<Interval>(){ 
            public int compare(Interval i1,Interval i2) 
            { 
                return i1.start-i2.start; 
            } 
        }); 
    
        // push the first interval to stack  
        stack.push(arr[0]);  
    
        // Start from the next interval and merge if necessary  
        for (int i = 1 ; i < arr.length; i++)  
        {  
            // get interval from stack top  
            Interval top = stack.peek();  
    
            // if current interval is not overlapping with stack top,  
            // push it to the stack  
            if (top.end < arr[i].start)  
                stack.push(arr[i]);  
    
            // Otherwise update the ending time of top if ending of current  
            // interval is more  
            else if (top.end < arr[i].end)  
            {  
                top.end = arr[i].end;  
                stack.pop();  
                stack.push(top);  
            }  
        }

        return stack;
    }  
}

class Interval 
{ 
    int start,end; 
    Interval(int start, int end) 
    { 
        this.start=start; 
        this.end=end; 
    } 

    boolean check(int x){
        if(x>=start && x<=end)
            return true;    
        else
            return false;
    }
} 