import java.util.ArrayList;
import java.util.Iterator;


public class TamBolenler {
    public static void main(String[] args) {
        ArrayList<Integer>  arr = tam_bolenler(100_0000_000);
        
        Iterator<Integer> foreach = arr.iterator();
        while (foreach.hasNext()){
            System.out.println(foreach.next());
        } 
        
    }

    public static ArrayList<Integer> tam_bolenler(int sayi) {
        int index = 1;
        ArrayList<Integer> arr = new ArrayList<Integer>();
        while (index <= sayi) {
            if (sayi % index == 0) {
                arr.add(index);
                arr.add((-1)*index);
            }
            index++;
        }
        return arr;
    }
}