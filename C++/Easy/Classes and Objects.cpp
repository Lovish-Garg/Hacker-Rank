

// Write your Student class here
class Student
{
    int *scores; 
    int total;  
    public: 
    Student()
    {
        scores = new int[5];
    }
    ~Student()
    {
        delete scores;
    }

    void input();
    int calculateTotalScore();
};

void Student::input()
{
    total = 0;
    
    for (int i = 0; i < 5; ++i)
    {
        cin >> scores[i];
        total += scores[i];
    }
}

int Student::calculateTotalScore()
{
    return total;
}
