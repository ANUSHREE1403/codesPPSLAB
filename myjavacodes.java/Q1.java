class Q1 {
   public static void main(String[] args) {
            String name = "anushree archana tripathi";
            String[] names = name.split(" ");
            String initials = names[0].substring(0, 1).toUpperCase() + "." + names[1].substring(0, 1).toUpperCase() + ".";
            String output = initials + " " + names[2].substring(0, 1).toUpperCase() + names[2].substring(1);
            System.out.println(output);
        }
    }