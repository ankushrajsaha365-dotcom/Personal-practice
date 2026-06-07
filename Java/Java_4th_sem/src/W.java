class X{
    int x,y;
    X(int a,int b){
        x=a;
        y=b;
    }

    int sum(int a,int b){
        return (a+b);
    }
}

class Y extends X{
    int z;
    Y(int a,int b,int c){
        super(a,b);
        z=c;
    }
}


class W {
    public static void main(String[] args) {
        int value;
        Y y1 = new Y(10,20,30);
        value = y1.sum(10,20);
        System.out.println("Sum is "+value);
    }
    
}
