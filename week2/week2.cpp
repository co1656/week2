#include <iostream>
#include <string>

using namespace std;
bool is_game_running = false;

class GameObject
{
public:

    GameObject()
    {
        cout << "게임 오브젝트 생성\n";
    }
    virtual~GameObject()
    {
        cout << "게임 오브젝트 소멸\n";
    }

    virtual void Start()
    {
        cout << "게임 오브젝트 스타트\n";
    }
    virtual void Update()
    {
        cout << "게임 오브젝트 업데이트\n";
    }
    
};

class Player : public GameObject
{
public:

    Player()
    {
        cout << "채민석 생성\n";
    }
    ~Player()
    {
        cout << "채민석 소멸\n";
    }

    int HP = 100;

    void Start()
    {
        cout << "채민석의 HP는" << HP << "입니다.\n";
    }

    void Update()
    {
        cout << "채민석 업데이트\n";
    }
};

class Enemy : public GameObject
{
public:

    Enemy()
    {
        cout << "yadleyadle 생성\n";
    }
    ~Enemy()
    {
        cout << "yadleyadle 소멸\n";
    }
    int HP = 100;


    void Start()
    {
        cout << "yadleyadle의 HP는"<< HP <<"입니다.\n";
    }

    void Update()
    {
        cout << "yadleyadle 업데이트\n";
    }
};

int main()
{
    is_game_running = true;

    GameObject* p = new Player();
    GameObject* e = new Enemy();

    p->Start();
    e->Start();

    while (is_game_running)
    {
        p->Update();
        e->Update();

        cout << "입력해주세요 (1:게임 종료, 2:게임 계속): ";
        int input;
        cin >> input;
        if(input == 1)
            is_game_running = false;

    }

    delete(p);
    delete(e);

    return 0;
}
