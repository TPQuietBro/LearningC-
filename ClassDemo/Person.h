using namespace std;
class Person{
public:
    int age;
    char const *name;
    void showName(){
        cout<<"name is :"<< name << endl;
    }
    void showAge(){
        cout<<"age is :"<< age << endl;
    }
    int getAge(){
        return age;
    }
    void setAge(int tage){
        age = tage;
    }

    char const *getName(){
        return name;
    }
    void setAge(char *tname){
        name = tname;
    }
};
