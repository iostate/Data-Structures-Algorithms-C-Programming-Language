import java.util.ArrayList;
import java.util.Random;
import java.awt.Color;
public class Program3 {
    public static void main(String[] args) {

        DavidState arkansas = new DavidState("Arkansas");
        DavidState tennessee = new DavidState("Tennessee");
        DavidState louisiana = new DavidState("Louisiana");
        DavidState mississippi = new DavidState("Mississippi");
        DavidState alabama = new DavidState("Alabama");
        DavidState georgia = new DavidState("Georgia");
        
        ArrayList<DavidState> list = new ArrayList<>();
        list.add(alabama);
        list.add(arkansas);
        list.add(georgia);
        list.add(mississippi);
        list.add(louisiana);
        list.add(tennessee);


        int count = 0;
        for (DavidState s : list) {
            s.setColor(assignColors(count++));
            System.out.println(s);
        }
    }

    public static int assignColors(int stateCounter) {
        int result = 0;
        if (stateCounter == 0 || stateCounter == 1)
            result = 0;
        else if (stateCounter == 2 || stateCounter == 3)
            result = 1;
        else if (stateCounter == 4 || stateCounter == 5)
            result = 2;

        return result;
    }
}