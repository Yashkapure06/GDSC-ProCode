import java.util.*;
public class KanishkMewal {
    public static void main(String[] args) {
        Set<Object> map = new HashSet<>();
        Object[] L1 = {10, 20, 30, 40};
        Object[] L2 = {40, 50, 60, 70};

        for(int i = 0; i < L1.length; i++)
        {
            map.add(L1[i]);
        }
        for(int i = 0; i < L2.length; i++)
        {
            if(map.contains(L2[i]))
            {
                System.out.println(L2[i]);
            }
        }
    }
}