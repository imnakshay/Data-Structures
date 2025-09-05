package com.sorting;
public class getterSetter {

    private String name = "akshay";

    public String getName() {
        return name;
    }

    public void setName(String n) {
        this.name = n;
    }

}

class Main {
    public static void main(String[] args){
        getterSetter s = new getterSetter();
        
        System.out.println(s.getName());
}
}