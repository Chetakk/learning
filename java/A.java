import java.util.*;
class vehicle{
    Scanner inp = new Scanner(System.in);
    int mileage, price;
}

class car extends vehicle{
    int ownership_cost,warramty,seater;
    String fuel_type;
    void car_details(){
        ownership_cost = inp.nextInt();

    }
}


class bike extends vehicle{
    int no_sylinder,no_gears;
    String cooling_type;
    void bike_details(){
        no_gears=inp.nextInt();
    }
} 


class Audi extends car{
    void Audi_d(){
    System.out.println("Audi Deatils :");
    super.car_details();
    }
}

class Ford extends car{

}

class Bajaj extends bike{
    void Bajaj_d(){
        System.out.println("bajaj details :");
        super.bike_details();
    }
}

class TVS extends bike{

}

class Sample{
    public static void main(String[] args){
    Audi a = new Audi();
    Bajaj b = new Bajaj();

    a.Audi_d();
    b.Bajaj_d();
    }
}
