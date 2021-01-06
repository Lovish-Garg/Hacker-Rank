
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box
{
    private:
        long l;
        long h;
        long b;
    
    public:
        Box(int x = 0, int y = 0, int z = 0)
        {
            l = x;
            b = y;
            h = z;
        }
        
        Box(Box &a)
        {
            l = a.l;
            b = a.b;
            h = a.h;
        }
        
        int getLength();
        int getHeight();
        int getBreadth();
        long long CalculateVolume();
        friend ostream& operator << (ostream& out, Box a);
        friend bool operator < (Box a, Box b);
};

ostream& operator << (ostream& out, Box a)
{
    char c = ' ';
    out << a.l << c << a.b << c << a.h; 
    return out;
}

bool operator < (Box a, Box b)
{
    if (a.l < b.l)
        return true;
        
    if (a.b < b.b && a.l ==  b.l)
        return true;
    
    if (a.h < b.h && a.b == b.b && a.l == b.l)
        return true;
        
    return false;
}   
     
int Box::getLength()
{
    return l;
}

int Box::getBreadth()
{
    return b;
}

int Box::getHeight()
{
    return h;
}

long long Box::CalculateVolume()
{
    long long volume = l * h * b;
    return volume;
}
