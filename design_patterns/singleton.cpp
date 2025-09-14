#include<iostream>
#include<string>
using namespace std;

class GameSetting{

    static GameSetting* _instance;
    int _brightness;
    int _height;
    int _width;

    GameSetting(): _width{786},_height{1300},_brightness{75}{}

    public:
    static GameSetting* getInstance(){
        if(_instance==NULL)
        {
            _instance=new GameSetting();
        }

        return _instance;
    }

    void setWidth(int w){
            _width=w;
    }

    void setHeight(int h){
        _height=h;
    }

    void setBrightness(int brightness){
        _brightness=brightness;
    }

    int getWidth(){
        return _width;
    }

    int getHeight(){
        return _height;
    }

    int getBrightness(){
        return _brightness;
    }

    void displaySetting(){
        cout<<"Brightness: "<<_brightness;
        cout<<endl<<"Width: "<<_width<<endl;
        cout<<"Height: "<<_height;
    }

};
GameSetting* GameSetting::_instance=NULL;
int main(){
    GameSetting* setting=GameSetting::getInstance();
    setting->displaySetting();
    return 0;
}