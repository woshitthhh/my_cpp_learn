/*------------------------------------------------------------------------------
 * @file    LEARNVIRTUAL.CPP
 * @author  ZhouRongTao
 * @date    2023/11/26 11:18:49
------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

class Entity
{
public:
    virtual string GetName()
    {
        return "Entity";
    }
};

class Player : public Entity
{
private:
    string m_Name;

public:
    Player(const string &name) : m_Name(name) {}
    string GetName() override { return m_Name; }
};

void PrintName(Entity *entity)
{
    cout << entity->GetName() << endl;
}

int main()
{
    // Entity e; //�麯�������ɻ���ָ����з��ʣ��������ӵ�����������麯��ʱ��̬���ã������õ��麯��������
    // cout << e.GetName() << endl;
    // PrintName(e);
    
    Player p("zhou"); 
    Entity *e = &p; //����ָ��Player����Ļ���ָ�룬��������չ�ֳ��麯�����ص�
    cout << e->GetName() << endl;
}