#include "NewSave.h"
#include "PotConv.h"
#include "csv.h"
#include <fstream>
#include <iostream>

// ����
void NewSave::SaveCSVBaseInfo(Save::BaseInfo* data, int length, int record)
{
    std::ofstream fout("../game/save/csv/" + std::to_string(record) + "_����.csv");
    fout << "�˴�";
    fout << ",";
    fout << "�ӳ�����";
    fout << ",";
    fout << "����ͼX";
    fout << ",";
    fout << "����ͼY";
    fout << ",";
    fout << "�ӳ���X";
    fout << ",";
    fout << "�ӳ���Y";
    fout << ",";
    fout << "�泯����";
    fout << ",";
    fout << "��X";
    fout << ",";
    fout << "��Y";
    fout << ",";
    fout << "��X1";
    fout << ",";
    fout << "��Y1";
    fout << ",";
    fout << "�ڲ�����";
    fout << ",";
    fout << "����1";
    fout << ",";
    fout << "����2";
    fout << ",";
    fout << "����3";
    fout << ",";
    fout << "����4";
    fout << ",";
    fout << "����5";
    fout << ",";
    fout << "����6";
    fout << std::endl;
    for (int i = 0; i < length; i++)
    {
        fout << data[i].InShip;
        fout << ",";
        fout << data[i].InSubMap;
        fout << ",";
        fout << data[i].MainMapX;
        fout << ",";
        fout << data[i].MainMapY;
        fout << ",";
        fout << data[i].SubMapX;
        fout << ",";
        fout << data[i].SubMapY;
        fout << ",";
        fout << data[i].FaceTowards;
        fout << ",";
        fout << data[i].ShipX;
        fout << ",";
        fout << data[i].ShipY;
        fout << ",";
        fout << data[i].ShipX1;
        fout << ",";
        fout << data[i].ShipY1;
        fout << ",";
        fout << data[i].Encode;
        fout << ",";
        for (int j = 0; j < 6; j++)
        {
            fout << data[i].Team[j];
            if (j != 6 - 1)
            {
                fout << ",";
            }
        }
        fout << std::endl;
    }
}
// ����
void NewSave::SaveCSVItemList(ItemList* data, int length, int record)
{
    std::ofstream fout("../game/save/csv/" + std::to_string(record) + "_����.csv");
    fout << "��Ʒ���";
    fout << ",";
    fout << "��Ʒ����";
    fout << std::endl;
    for (int i = 0; i < length; i++)
    {
        fout << data[i].item_id;
        fout << ",";
        fout << data[i].count;
        fout << std::endl;
    }
}
// ����
void NewSave::SaveCSVRoleSave(const std::vector<Role>& data, int record)
{
    std::ofstream fout("../game/save/csv/" + std::to_string(record) + "_����.csv");
    fout << "���";
    fout << ",";
    fout << "ͷ��";
    fout << ",";
    fout << "�����ɳ�";
    fout << ",";
    fout << "����";
    fout << ",";
    fout << "����";
    fout << ",";
    fout << "���";
    fout << ",";
    fout << "�Ա�";
    fout << ",";
    fout << "�ȼ�";
    fout << ",";
    fout << "����";
    fout << ",";
    fout << "����";
    fout << ",";
    fout << "�������ֵ";
    fout << ",";
    fout << "����";
    fout << ",";
    fout << "�ж�";
    fout << ",";
    fout << "����";
    fout << ",";
    fout << "��Ʒ��������";
    fout << ",";
    fout << "����";
    fout << ",";
    fout << "����";
    fout << ",";
    fout << "����֡��1";
    fout << ",";
    fout << "����֡��2";
    fout << ",";
    fout << "����֡��3";
    fout << ",";
    fout << "����֡��4";
    fout << ",";
    fout << "����֡��5";
    fout << ",";
    fout << "����֡��6";
    fout << ",";
    fout << "����֡��7";
    fout << ",";
    fout << "����֡��8";
    fout << ",";
    fout << "����֡��9";
    fout << ",";
    fout << "����֡��10";
    fout << ",";
    fout << "����֡��11";
    fout << ",";
    fout << "����֡��12";
    fout << ",";
    fout << "����֡��13";
    fout << ",";
    fout << "����֡��14";
    fout << ",";
    fout << "����֡��15";
    fout << ",";
    fout << "��������";
    fout << ",";
    fout << "����";
    fout << ",";
    fout << "�������ֵ";
    fout << ",";
    fout << "������";
    fout << ",";
    fout << "�Ṧ";
    fout << ",";
    fout << "������";
    fout << ",";
    fout << "ҽ��";
    fout << ",";
    fout << "�ö�";
    fout << ",";
    fout << "�ⶾ";
    fout << ",";
    fout << "����";
    fout << ",";
    fout << "ȭ��";
    fout << ",";
    fout << "����";
    fout << ",";
    fout << "ˣ��";
    fout << ",";
    fout << "����";
    fout << ",";
    fout << "����";
    fout << ",";
    fout << "��ѧ��ʶ";
    fout << ",";
    fout << "Ʒ��";
    fout << ",";
    fout << "��������";
    fout << ",";
    fout << "���һ���";
    fout << ",";
    fout << "����";
    fout << ",";
    fout << "����";
    fout << ",";
    fout << "������Ʒ";
    fout << ",";
    fout << "��������";
    fout << ",";
    fout << "�����书1";
    fout << ",";
    fout << "�����书2";
    fout << ",";
    fout << "�����书3";
    fout << ",";
    fout << "�����书4";
    fout << ",";
    fout << "�����书5";
    fout << ",";
    fout << "�����书6";
    fout << ",";
    fout << "�����书7";
    fout << ",";
    fout << "�����书8";
    fout << ",";
    fout << "�����书9";
    fout << ",";
    fout << "�����书10";
    fout << ",";
    fout << "�书�ȼ�1";
    fout << ",";
    fout << "�书�ȼ�2";
    fout << ",";
    fout << "�书�ȼ�3";
    fout << ",";
    fout << "�书�ȼ�4";
    fout << ",";
    fout << "�书�ȼ�5";
    fout << ",";
    fout << "�书�ȼ�6";
    fout << ",";
    fout << "�书�ȼ�7";
    fout << ",";
    fout << "�书�ȼ�8";
    fout << ",";
    fout << "�书�ȼ�9";
    fout << ",";
    fout << "�书�ȼ�10";
    fout << ",";
    fout << "Я����Ʒ1";
    fout << ",";
    fout << "Я����Ʒ2";
    fout << ",";
    fout << "Я����Ʒ3";
    fout << ",";
    fout << "Я����Ʒ4";
    fout << ",";
    fout << "Я����Ʒ����1";
    fout << ",";
    fout << "Я����Ʒ����2";
    fout << ",";
    fout << "Я����Ʒ����3";
    fout << ",";
    fout << "Я����Ʒ����4";
    fout << std::endl;
    int length = data.size();
    for (int i = 0; i < length; i++)
    {
        fout << data[i].ID;
        fout << ",";
        fout << data[i].HeadID;
        fout << ",";
        fout << data[i].IncLife;
        fout << ",";
        fout << data[i].UnUse;
        fout << ",";
        fout << '"' << data[i].Name << '"';
        fout << ",";
        fout << '"' << data[i].Nick << '"';
        fout << ",";
        fout << data[i].Sexual;
        fout << ",";
        fout << data[i].Level;
        fout << ",";
        fout << data[i].Exp;
        fout << ",";
        fout << data[i].HP;
        fout << ",";
        fout << data[i].MaxHP;
        fout << ",";
        fout << data[i].Hurt;
        fout << ",";
        fout << data[i].Poison;
        fout << ",";
        fout << data[i].PhysicalPower;
        fout << ",";
        fout << data[i].ExpForMakeItem;
        fout << ",";
        fout << data[i].Equip0;
        fout << ",";
        fout << data[i].Equip1;
        fout << ",";
        for (int j = 0; j < 15; j++)
        {
            fout << data[i].Frame[j];
            if (j != 15 - 1)
            {
                fout << ",";
            }
        }
        fout << ",";
        fout << data[i].MPType;
        fout << ",";
        fout << data[i].MP;
        fout << ",";
        fout << data[i].MaxMP;
        fout << ",";
        fout << data[i].Attack;
        fout << ",";
        fout << data[i].Speed;
        fout << ",";
        fout << data[i].Defence;
        fout << ",";
        fout << data[i].Medicine;
        fout << ",";
        fout << data[i].UsePoison;
        fout << ",";
        fout << data[i].Detoxification;
        fout << ",";
        fout << data[i].AntiPoison;
        fout << ",";
        fout << data[i].Fist;
        fout << ",";
        fout << data[i].Sword;
        fout << ",";
        fout << data[i].Knife;
        fout << ",";
        fout << data[i].Unusual;
        fout << ",";
        fout << data[i].HiddenWeapon;
        fout << ",";
        fout << data[i].Knowledge;
        fout << ",";
        fout << data[i].Morality;
        fout << ",";
        fout << data[i].AttackWithPoison;
        fout << ",";
        fout << data[i].AttackTwice;
        fout << ",";
        fout << data[i].Fame;
        fout << ",";
        fout << data[i].IQ;
        fout << ",";
        fout << data[i].PracticeItem;
        fout << ",";
        fout << data[i].ExpForItem;
        fout << ",";
        for (int j = 0; j < 10; j++)
        {
            fout << data[i].MagicID[j];
            if (j != 10 - 1)
            {
                fout << ",";
            }
        }
        fout << ",";
        for (int j = 0; j < 10; j++)
        {
            fout << data[i].MagicLevel[j];
            if (j != 10 - 1)
            {
                fout << ",";
            }
        }
        fout << ",";
        for (int j = 0; j < 4; j++)
        {
            fout << data[i].TakingItem[j];
            if (j != 4 - 1)
            {
                fout << ",";
            }
        }
        fout << ",";
        for (int j = 0; j < 4; j++)
        {
            fout << data[i].TakingItemCount[j];
            if (j != 4 - 1)
            {
                fout << ",";
            }
        }
        fout << std::endl;
    }
}
// ��Ʒ
void NewSave::SaveCSVItemSave(const std::vector<Item>& data, int record)
{
    std::ofstream fout("../game/save/csv/" + std::to_string(record) + "_��Ʒ.csv");
    fout << "���";
    fout << ",";
    fout << "��Ʒ��";
    fout << ",";
    fout << "��Ʒ������1";
    fout << ",";
    fout << "��Ʒ������2";
    fout << ",";
    fout << "��Ʒ������3";
    fout << ",";
    fout << "��Ʒ������4";
    fout << ",";
    fout << "��Ʒ������5";
    fout << ",";
    fout << "��Ʒ������6";
    fout << ",";
    fout << "��Ʒ������7";
    fout << ",";
    fout << "��Ʒ������8";
    fout << ",";
    fout << "��Ʒ������9";
    fout << ",";
    fout << "��Ʒ������10";
    fout << ",";
    fout << "��Ʒ˵��";
    fout << ",";
    fout << "�����书";
    fout << ",";
    fout << "�����������";
    fout << ",";
    fout << "ʹ����";
    fout << ",";
    fout << "װ������";
    fout << ",";
    fout << "��ʾ��Ʒ˵��";
    fout << ",";
    fout << "��Ʒ����";
    fout << ",";
    fout << "δ֪5";
    fout << ",";
    fout << "δ֪6";
    fout << ",";
    fout << "δ֪7";
    fout << ",";
    fout << "������";
    fout << ",";
    fout << "���������ֵ";
    fout << ",";
    fout << "���ж��ⶾ";
    fout << ",";
    fout << "������";
    fout << ",";
    fout << "�ı���������";
    fout << ",";
    fout << "������";
    fout << ",";
    fout << "���������ֵ";
    fout << ",";
    fout << "�ӹ�����";
    fout << ",";
    fout << "���Ṧ";
    fout << ",";
    fout << "�ӷ�����";
    fout << ",";
    fout << "��ҽ��";
    fout << ",";
    fout << "��ʹ��";
    fout << ",";
    fout << "�ӽⶾ";
    fout << ",";
    fout << "�ӿ���";
    fout << ",";
    fout << "��ȭ��";
    fout << ",";
    fout << "������";
    fout << ",";
    fout << "��ˣ��";
    fout << ",";
    fout << "���������";
    fout << ",";
    fout << "�Ӱ�������";
    fout << ",";
    fout << "����ѧ��ʶ";
    fout << ",";
    fout << "��Ʒ��";
    fout << ",";
    fout << "�����һ���";
    fout << ",";
    fout << "�ӹ�������";
    fout << ",";
    fout << "����������";
    fout << ",";
    fout << "����������";
    fout << ",";
    fout << "������";
    fout << ",";
    fout << "�蹥����";
    fout << ",";
    fout << "���Ṧ";
    fout << ",";
    fout << "���ö�";
    fout << ",";
    fout << "��ҽ��";
    fout << ",";
    fout << "��ⶾ";
    fout << ",";
    fout << "��ȭ��";
    fout << ",";
    fout << "������";
    fout << ",";
    fout << "��ˣ��";
    fout << ",";
    fout << "���������";
    fout << ",";
    fout << "�谵��";
    fout << ",";
    fout << "������";
    fout << ",";
    fout << "�辭��";
    fout << ",";
    fout << "������Ʒ�辭��";
    fout << ",";
    fout << "�����";
    fout << ",";
    fout << "������Ʒ1";
    fout << ",";
    fout << "������Ʒ2";
    fout << ",";
    fout << "������Ʒ3";
    fout << ",";
    fout << "������Ʒ4";
    fout << ",";
    fout << "������Ʒ5";
    fout << ",";
    fout << "������Ʒ����1";
    fout << ",";
    fout << "������Ʒ����2";
    fout << ",";
    fout << "������Ʒ����3";
    fout << ",";
    fout << "������Ʒ����4";
    fout << ",";
    fout << "������Ʒ����5";
    fout << std::endl;
    int length = data.size();
    for (int i = 0; i < length; i++)
    {
        fout << data[i].ID;
        fout << ",";
        fout << '"' << data[i].Name << '"';
        fout << ",";
        for (int j = 0; j < 10; j++)
        {
            fout << data[i].Name1[j];
            if (j != 10 - 1)
            {
                fout << ",";
            }
        }
        fout << ",";
        fout << '"' << data[i].Introduction << '"';
        fout << ",";
        fout << data[i].MagicID;
        fout << ",";
        fout << data[i].HiddenWeaponEffectID;
        fout << ",";
        fout << data[i].User;
        fout << ",";
        fout << data[i].EquipType;
        fout << ",";
        fout << data[i].ShowIntroduction;
        fout << ",";
        fout << data[i].ItemType;
        fout << ",";
        fout << data[i].UnKnown5;
        fout << ",";
        fout << data[i].UnKnown6;
        fout << ",";
        fout << data[i].UnKnown7;
        fout << ",";
        fout << data[i].AddHP;
        fout << ",";
        fout << data[i].AddMaxHP;
        fout << ",";
        fout << data[i].AddPoison;
        fout << ",";
        fout << data[i].AddPhysicalPower;
        fout << ",";
        fout << data[i].ChangeMPType;
        fout << ",";
        fout << data[i].AddMP;
        fout << ",";
        fout << data[i].AddMaxMP;
        fout << ",";
        fout << data[i].AddAttack;
        fout << ",";
        fout << data[i].AddSpeed;
        fout << ",";
        fout << data[i].AddDefence;
        fout << ",";
        fout << data[i].AddMedicine;
        fout << ",";
        fout << data[i].AddUsePoison;
        fout << ",";
        fout << data[i].AddDetoxification;
        fout << ",";
        fout << data[i].AddAntiPoison;
        fout << ",";
        fout << data[i].AddFist;
        fout << ",";
        fout << data[i].AddSword;
        fout << ",";
        fout << data[i].AddKnife;
        fout << ",";
        fout << data[i].AddUnusual;
        fout << ",";
        fout << data[i].AddHiddenWeapon;
        fout << ",";
        fout << data[i].AddKnowledge;
        fout << ",";
        fout << data[i].AddMorality;
        fout << ",";
        fout << data[i].AddAttackTwice;
        fout << ",";
        fout << data[i].AddAttackWithPoison;
        fout << ",";
        fout << data[i].OnlySuitableRole;
        fout << ",";
        fout << data[i].NeedMPType;
        fout << ",";
        fout << data[i].NeedMP;
        fout << ",";
        fout << data[i].NeedAttack;
        fout << ",";
        fout << data[i].NeedSpeed;
        fout << ",";
        fout << data[i].NeedUsePoison;
        fout << ",";
        fout << data[i].NeedMedicine;
        fout << ",";
        fout << data[i].NeedDetoxification;
        fout << ",";
        fout << data[i].NeedFist;
        fout << ",";
        fout << data[i].NeedSword;
        fout << ",";
        fout << data[i].NeedKnife;
        fout << ",";
        fout << data[i].NeedUnusual;
        fout << ",";
        fout << data[i].NeedHiddenWeapon;
        fout << ",";
        fout << data[i].NeedIQ;
        fout << ",";
        fout << data[i].NeedExp;
        fout << ",";
        fout << data[i].NeedExpForMakeItem;
        fout << ",";
        fout << data[i].NeedMaterial;
        fout << ",";
        for (int j = 0; j < 5; j++)
        {
            fout << data[i].MakeItem[j];
            if (j != 5 - 1)
            {
                fout << ",";
            }
        }
        fout << ",";
        for (int j = 0; j < 5; j++)
        {
            fout << data[i].MakeItemCount[j];
            if (j != 5 - 1)
            {
                fout << ",";
            }
        }
        fout << std::endl;
    }
}
// ����
void NewSave::SaveCSVSubMapInfoSave(const std::vector<SubMapInfo>& data, int record)
{
    std::ofstream fout("../game/save/csv/" + std::to_string(record) + "_����.csv");
    fout << "���";
    fout << ",";
    fout << "����";
    fout << ",";
    fout << "��������";
    fout << ",";
    fout << "��������";
    fout << ",";
    fout << "��ת����";
    fout << ",";
    fout << "��������";
    fout << ",";
    fout << "�⾰���X1";
    fout << ",";
    fout << "�⾰���Y1";
    fout << ",";
    fout << "�⾰���X2";
    fout << ",";
    fout << "�⾰���Y2";
    fout << ",";
    fout << "���X";
    fout << ",";
    fout << "���Y";
    fout << ",";
    fout << "����X1";
    fout << ",";
    fout << "����X2";
    fout << ",";
    fout << "����X3";
    fout << ",";
    fout << "����Y1";
    fout << ",";
    fout << "����Y2";
    fout << ",";
    fout << "����Y3";
    fout << ",";
    fout << "��תX";
    fout << ",";
    fout << "��תY";
    fout << ",";
    fout << "��ת����X";
    fout << ",";
    fout << "��ת����Y";
    fout << std::endl;
    int length = data.size();
    for (int i = 0; i < length; i++)
    {
        fout << data[i].ID;
        fout << ",";
        fout << '"' << data[i].Name << '"';
        fout << ",";
        fout << data[i].ExitMusic;
        fout << ",";
        fout << data[i].EntranceMusic;
        fout << ",";
        fout << data[i].JumpSubMap;
        fout << ",";
        fout << data[i].EntranceCondition;
        fout << ",";
        fout << data[i].MainEntranceX1;
        fout << ",";
        fout << data[i].MainEntranceY1;
        fout << ",";
        fout << data[i].MainEntranceX2;
        fout << ",";
        fout << data[i].MainEntranceY2;
        fout << ",";
        fout << data[i].EntranceX;
        fout << ",";
        fout << data[i].EntranceY;
        fout << ",";
        for (int j = 0; j < 3; j++)
        {
            fout << data[i].ExitX[j];
            if (j != 3 - 1)
            {
                fout << ",";
            }
        }
        fout << ",";
        for (int j = 0; j < 3; j++)
        {
            fout << data[i].ExitY[j];
            if (j != 3 - 1)
            {
                fout << ",";
            }
        }
        fout << ",";
        fout << data[i].JumpX;
        fout << ",";
        fout << data[i].JumpY;
        fout << ",";
        fout << data[i].JumpReturnX;
        fout << ",";
        fout << data[i].JumpReturnY;
        fout << std::endl;
    }
}
// �书
void NewSave::SaveCSVMagicSave(const std::vector<Magic>& data, int record)
{
    std::ofstream fout("../game/save/csv/" + std::to_string(record) + "_�书.csv");
    fout << "���";
    fout << ",";
    fout << "����";
    fout << ",";
    fout << "δ֪1";
    fout << ",";
    fout << "δ֪2";
    fout << ",";
    fout << "δ֪3";
    fout << ",";
    fout << "δ֪4";
    fout << ",";
    fout << "δ֪5";
    fout << ",";
    fout << "������Ч";
    fout << ",";
    fout << "�书����";
    fout << ",";
    fout << "�书����";
    fout << ",";
    fout << "�˺�����";
    fout << ",";
    fout << "������Χ����";
    fout << ",";
    fout << "��������";
    fout << ",";
    fout << "�����ж�";
    fout << ",";
    fout << "����1";
    fout << ",";
    fout << "����2";
    fout << ",";
    fout << "����3";
    fout << ",";
    fout << "����4";
    fout << ",";
    fout << "����5";
    fout << ",";
    fout << "����6";
    fout << ",";
    fout << "����7";
    fout << ",";
    fout << "����8";
    fout << ",";
    fout << "����9";
    fout << ",";
    fout << "����10";
    fout << ",";
    fout << "�ƶ���Χ1";
    fout << ",";
    fout << "�ƶ���Χ2";
    fout << ",";
    fout << "�ƶ���Χ3";
    fout << ",";
    fout << "�ƶ���Χ4";
    fout << ",";
    fout << "�ƶ���Χ5";
    fout << ",";
    fout << "�ƶ���Χ6";
    fout << ",";
    fout << "�ƶ���Χ7";
    fout << ",";
    fout << "�ƶ���Χ8";
    fout << ",";
    fout << "�ƶ���Χ9";
    fout << ",";
    fout << "�ƶ���Χ10";
    fout << ",";
    fout << "ɱ�˷�Χ1";
    fout << ",";
    fout << "ɱ�˷�Χ2";
    fout << ",";
    fout << "ɱ�˷�Χ3";
    fout << ",";
    fout << "ɱ�˷�Χ4";
    fout << ",";
    fout << "ɱ�˷�Χ5";
    fout << ",";
    fout << "ɱ�˷�Χ6";
    fout << ",";
    fout << "ɱ�˷�Χ7";
    fout << ",";
    fout << "ɱ�˷�Χ8";
    fout << ",";
    fout << "ɱ�˷�Χ9";
    fout << ",";
    fout << "ɱ�˷�Χ10";
    fout << ",";
    fout << "������1";
    fout << ",";
    fout << "������2";
    fout << ",";
    fout << "������3";
    fout << ",";
    fout << "������4";
    fout << ",";
    fout << "������5";
    fout << ",";
    fout << "������6";
    fout << ",";
    fout << "������7";
    fout << ",";
    fout << "������8";
    fout << ",";
    fout << "������9";
    fout << ",";
    fout << "������10";
    fout << ",";
    fout << "ɱ������1";
    fout << ",";
    fout << "ɱ������2";
    fout << ",";
    fout << "ɱ������3";
    fout << ",";
    fout << "ɱ������4";
    fout << ",";
    fout << "ɱ������5";
    fout << ",";
    fout << "ɱ������6";
    fout << ",";
    fout << "ɱ������7";
    fout << ",";
    fout << "ɱ������8";
    fout << ",";
    fout << "ɱ������9";
    fout << ",";
    fout << "ɱ������10";
    fout << std::endl;
    int length = data.size();
    for (int i = 0; i < length; i++)
    {
        fout << data[i].ID;
        fout << ",";
        fout << '"' << data[i].Name << '"';
        fout << ",";
        for (int j = 0; j < 5; j++)
        {
            fout << data[i].Unknown[j];
            if (j != 5 - 1)
            {
                fout << ",";
            }
        }
        fout << ",";
        fout << data[i].SoundID;
        fout << ",";
        fout << data[i].MagicType;
        fout << ",";
        fout << data[i].EffectID;
        fout << ",";
        fout << data[i].HurtType;
        fout << ",";
        fout << data[i].AttackAreaType;
        fout << ",";
        fout << data[i].NeedMP;
        fout << ",";
        fout << data[i].WithPoison;
        fout << ",";
        for (int j = 0; j < 10; j++)
        {
            fout << data[i].Attack[j];
            if (j != 10 - 1)
            {
                fout << ",";
            }
        }
        fout << ",";
        for (int j = 0; j < 10; j++)
        {
            fout << data[i].SelectDistance[j];
            if (j != 10 - 1)
            {
                fout << ",";
            }
        }
        fout << ",";
        for (int j = 0; j < 10; j++)
        {
            fout << data[i].AttackDistance[j];
            if (j != 10 - 1)
            {
                fout << ",";
            }
        }
        fout << ",";
        for (int j = 0; j < 10; j++)
        {
            fout << data[i].AddMP[j];
            if (j != 10 - 1)
            {
                fout << ",";
            }
        }
        fout << ",";
        for (int j = 0; j < 10; j++)
        {
            fout << data[i].HurtMP[j];
            if (j != 10 - 1)
            {
                fout << ",";
            }
        }
        fout << std::endl;
    }
}
// �̵�
void NewSave::SaveCSVShopSave(const std::vector<Shop>& data, int record)
{
    std::ofstream fout("../game/save/csv/" + std::to_string(record) + "_�̵�.csv");
    fout << "��Ʒ���1";
    fout << ",";
    fout << "��Ʒ���2";
    fout << ",";
    fout << "��Ʒ���3";
    fout << ",";
    fout << "��Ʒ���4";
    fout << ",";
    fout << "��Ʒ���5";
    fout << ",";
    fout << "��Ʒ����1";
    fout << ",";
    fout << "��Ʒ����2";
    fout << ",";
    fout << "��Ʒ����3";
    fout << ",";
    fout << "��Ʒ����4";
    fout << ",";
    fout << "��Ʒ����5";
    fout << ",";
    fout << "��Ʒ�۸�1";
    fout << ",";
    fout << "��Ʒ�۸�2";
    fout << ",";
    fout << "��Ʒ�۸�3";
    fout << ",";
    fout << "��Ʒ�۸�4";
    fout << ",";
    fout << "��Ʒ�۸�5";
    fout << std::endl;
    int length = data.size();
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            fout << data[i].ItemID[j];
            if (j != 5 - 1)
            {
                fout << ",";
            }
        }
        fout << ",";
        for (int j = 0; j < 5; j++)
        {
            fout << data[i].Total[j];
            if (j != 5 - 1)
            {
                fout << ",";
            }
        }
        fout << ",";
        for (int j = 0; j < 5; j++)
        {
            fout << data[i].Price[j];
            if (j != 5 - 1)
            {
                fout << ",";
            }
        }
        fout << std::endl;
    }
}
// ����
void NewSave::LoadCSVBaseInfo(Save::BaseInfo* data, int length, int record)
{
    io::CSVReader<18, io::trim_chars<>, io::double_quote_escape<',', '\"'>> in("../game/save/csv/" + std::to_string(record) + "_����.csv");
    in.read_header(io::ignore_missing_column | io::ignore_extra_column,
        "�˴�",
        "�ӳ�����",
        "����ͼX",
        "����ͼY",
        "�ӳ���X",
        "�ӳ���Y",
        "�泯����",
        "��X",
        "��Y",
        "��X1",
        "��Y1",
        "�ڲ�����",
        "����1",
        "����2",
        "����3",
        "����4",
        "����5",
        "����6");
    auto getDefault = []()
    {
        Save::BaseInfo nextLineData;
        nextLineData.InShip = 0;
        nextLineData.InSubMap = 0;
        nextLineData.MainMapX = 0;
        nextLineData.MainMapY = 0;
        nextLineData.SubMapX = 0;
        nextLineData.SubMapY = 0;
        nextLineData.FaceTowards = 0;
        nextLineData.ShipX = 0;
        nextLineData.ShipY = 0;
        nextLineData.ShipX1 = 0;
        nextLineData.ShipY1 = 0;
        nextLineData.Encode = 0;
        for (int j = 0; j < 6; j++)
        {
            nextLineData.Team[j] = -1;
        }
        return nextLineData;
    };
    int lines = 0;
    auto nextLineData = getDefault();
    while (in.read_row(
        nextLineData.InShip,
        nextLineData.InSubMap,
        nextLineData.MainMapX,
        nextLineData.MainMapY,
        nextLineData.SubMapX,
        nextLineData.SubMapY,
        nextLineData.FaceTowards,
        nextLineData.ShipX,
        nextLineData.ShipY,
        nextLineData.ShipX1,
        nextLineData.ShipY1,
        nextLineData.Encode,
        nextLineData.Team[0],
        nextLineData.Team[1],
        nextLineData.Team[2],
        nextLineData.Team[3],
        nextLineData.Team[4],
        nextLineData.Team[5]))
    {
        data[lines] = nextLineData;
        if (lines + 1 == length)
        {
            break;
        }
        lines++;
        nextLineData = getDefault();
    }
}
// ����
void NewSave::LoadCSVItemList(ItemList* data, int length, int record)
{
    io::CSVReader<2, io::trim_chars<>, io::double_quote_escape<',', '\"'>> in("../game/save/csv/" + std::to_string(record) + "_����.csv");
    in.read_header(io::ignore_missing_column | io::ignore_extra_column,
        "��Ʒ���",
        "��Ʒ����");
    auto getDefault = []()
    {
        ItemList nextLineData;
        nextLineData.item_id = -1;
        nextLineData.count = 0;
        return nextLineData;
    };
    int lines = 0;
    auto nextLineData = getDefault();
    while (in.read_row(
        nextLineData.item_id,
        nextLineData.count))
    {
        data[lines] = nextLineData;
        if (lines + 1 == length)
        {
            break;
        }
        lines++;
        nextLineData = getDefault();
    }
}
// ����
void NewSave::LoadCSVRoleSave(std::vector<Role>& data, int record)
{
    data.clear();
    io::CSVReader<83, io::trim_chars<>, io::double_quote_escape<',', '\"'>> in("../game/save/csv/" + std::to_string(record) + "_����.csv");
    in.read_header(io::ignore_missing_column | io::ignore_extra_column,
        "���",
        "ͷ��",
        "�����ɳ�",
        "����",
        "����",
        "���",
        "�Ա�",
        "�ȼ�",
        "����",
        "����",
        "�������ֵ",
        "����",
        "�ж�",
        "����",
        "��Ʒ��������",
        "����",
        "����",
        "����֡��1",
        "����֡��2",
        "����֡��3",
        "����֡��4",
        "����֡��5",
        "����֡��6",
        "����֡��7",
        "����֡��8",
        "����֡��9",
        "����֡��10",
        "����֡��11",
        "����֡��12",
        "����֡��13",
        "����֡��14",
        "����֡��15",
        "��������",
        "����",
        "�������ֵ",
        "������",
        "�Ṧ",
        "������",
        "ҽ��",
        "�ö�",
        "�ⶾ",
        "����",
        "ȭ��",
        "����",
        "ˣ��",
        "����",
        "����",
        "��ѧ��ʶ",
        "Ʒ��",
        "��������",
        "���һ���",
        "����",
        "����",
        "������Ʒ",
        "��������",
        "�����书1",
        "�����书2",
        "�����书3",
        "�����书4",
        "�����书5",
        "�����书6",
        "�����书7",
        "�����书8",
        "�����书9",
        "�����书10",
        "�书�ȼ�1",
        "�书�ȼ�2",
        "�书�ȼ�3",
        "�书�ȼ�4",
        "�书�ȼ�5",
        "�书�ȼ�6",
        "�书�ȼ�7",
        "�书�ȼ�8",
        "�书�ȼ�9",
        "�书�ȼ�10",
        "Я����Ʒ1",
        "Я����Ʒ2",
        "Я����Ʒ3",
        "Я����Ʒ4",
        "Я����Ʒ����1",
        "Я����Ʒ����2",
        "Я����Ʒ����3",
        "Я����Ʒ����4");
    auto getDefault = []()
    {
        Role nextLineData;
        nextLineData.ID = 0;
        nextLineData.HeadID = 0;
        nextLineData.IncLife = 0;
        nextLineData.UnUse = 0;
        memset(nextLineData.Name, '\0', sizeof(nextLineData.Name));
        memset(nextLineData.Nick, '\0', sizeof(nextLineData.Nick));
        nextLineData.Sexual = 0;
        nextLineData.Level = 0;
        nextLineData.Exp = 0;
        nextLineData.HP = 0;
        nextLineData.MaxHP = 0;
        nextLineData.Hurt = 0;
        nextLineData.Poison = 0;
        nextLineData.PhysicalPower = 0;
        nextLineData.ExpForMakeItem = 0;
        nextLineData.Equip0 = -1;
        nextLineData.Equip1 = -1;
        for (int j = 0; j < 15; j++)
        {
            nextLineData.Frame[j] = 0;
        }
        nextLineData.MPType = 0;
        nextLineData.MP = 0;
        nextLineData.MaxMP = 0;
        nextLineData.Attack = 0;
        nextLineData.Speed = 0;
        nextLineData.Defence = 0;
        nextLineData.Medicine = 0;
        nextLineData.UsePoison = 0;
        nextLineData.Detoxification = 0;
        nextLineData.AntiPoison = 0;
        nextLineData.Fist = 0;
        nextLineData.Sword = 0;
        nextLineData.Knife = 0;
        nextLineData.Unusual = 0;
        nextLineData.HiddenWeapon = 0;
        nextLineData.Knowledge = 0;
        nextLineData.Morality = 0;
        nextLineData.AttackWithPoison = 0;
        nextLineData.AttackTwice = 0;
        nextLineData.Fame = 0;
        nextLineData.IQ = 0;
        nextLineData.PracticeItem = -1;
        nextLineData.ExpForItem = 0;
        for (int j = 0; j < 10; j++)
        {
            nextLineData.MagicID[j] = 0;
        }
        for (int j = 0; j < 10; j++)
        {
            nextLineData.MagicLevel[j] = 0;
        }
        for (int j = 0; j < 4; j++)
        {
            nextLineData.TakingItem[j] = -1;
        }
        for (int j = 0; j < 4; j++)
        {
            nextLineData.TakingItemCount[j] = 0;
        }
        return nextLineData;
    };
    char* Name__;
    char* Nick__;
    int lines = 0;
    auto nextLineData = getDefault();
    while (in.read_row(
        nextLineData.ID,
        nextLineData.HeadID,
        nextLineData.IncLife,
        nextLineData.UnUse,
        Name__,
        Nick__,
        nextLineData.Sexual,
        nextLineData.Level,
        nextLineData.Exp,
        nextLineData.HP,
        nextLineData.MaxHP,
        nextLineData.Hurt,
        nextLineData.Poison,
        nextLineData.PhysicalPower,
        nextLineData.ExpForMakeItem,
        nextLineData.Equip0,
        nextLineData.Equip1,
        nextLineData.Frame[0],
        nextLineData.Frame[1],
        nextLineData.Frame[2],
        nextLineData.Frame[3],
        nextLineData.Frame[4],
        nextLineData.Frame[5],
        nextLineData.Frame[6],
        nextLineData.Frame[7],
        nextLineData.Frame[8],
        nextLineData.Frame[9],
        nextLineData.Frame[10],
        nextLineData.Frame[11],
        nextLineData.Frame[12],
        nextLineData.Frame[13],
        nextLineData.Frame[14],
        nextLineData.MPType,
        nextLineData.MP,
        nextLineData.MaxMP,
        nextLineData.Attack,
        nextLineData.Speed,
        nextLineData.Defence,
        nextLineData.Medicine,
        nextLineData.UsePoison,
        nextLineData.Detoxification,
        nextLineData.AntiPoison,
        nextLineData.Fist,
        nextLineData.Sword,
        nextLineData.Knife,
        nextLineData.Unusual,
        nextLineData.HiddenWeapon,
        nextLineData.Knowledge,
        nextLineData.Morality,
        nextLineData.AttackWithPoison,
        nextLineData.AttackTwice,
        nextLineData.Fame,
        nextLineData.IQ,
        nextLineData.PracticeItem,
        nextLineData.ExpForItem,
        nextLineData.MagicID[0],
        nextLineData.MagicID[1],
        nextLineData.MagicID[2],
        nextLineData.MagicID[3],
        nextLineData.MagicID[4],
        nextLineData.MagicID[5],
        nextLineData.MagicID[6],
        nextLineData.MagicID[7],
        nextLineData.MagicID[8],
        nextLineData.MagicID[9],
        nextLineData.MagicLevel[0],
        nextLineData.MagicLevel[1],
        nextLineData.MagicLevel[2],
        nextLineData.MagicLevel[3],
        nextLineData.MagicLevel[4],
        nextLineData.MagicLevel[5],
        nextLineData.MagicLevel[6],
        nextLineData.MagicLevel[7],
        nextLineData.MagicLevel[8],
        nextLineData.MagicLevel[9],
        nextLineData.TakingItem[0],
        nextLineData.TakingItem[1],
        nextLineData.TakingItem[2],
        nextLineData.TakingItem[3],
        nextLineData.TakingItemCount[0],
        nextLineData.TakingItemCount[1],
        nextLineData.TakingItemCount[2],
        nextLineData.TakingItemCount[3]))
    {
        strncpy(nextLineData.Name, Name__, sizeof(nextLineData.Name) - 1);
        strncpy(nextLineData.Nick, Nick__, sizeof(nextLineData.Nick) - 1);
        data.push_back(nextLineData);
        lines++;
        nextLineData = getDefault();
    }
}
// ��Ʒ
void NewSave::LoadCSVItemSave(std::vector<Item>& data, int record)
{
    data.clear();
    io::CSVReader<72, io::trim_chars<>, io::double_quote_escape<',', '\"'>> in("../game/save/csv/" + std::to_string(record) + "_��Ʒ.csv");
    in.read_header(io::ignore_missing_column | io::ignore_extra_column,
        "���",
        "��Ʒ��",
        "��Ʒ������1",
        "��Ʒ������2",
        "��Ʒ������3",
        "��Ʒ������4",
        "��Ʒ������5",
        "��Ʒ������6",
        "��Ʒ������7",
        "��Ʒ������8",
        "��Ʒ������9",
        "��Ʒ������10",
        "��Ʒ˵��",
        "�����书",
        "�����������",
        "ʹ����",
        "װ������",
        "��ʾ��Ʒ˵��",
        "��Ʒ����",
        "δ֪5",
        "δ֪6",
        "δ֪7",
        "������",
        "���������ֵ",
        "���ж��ⶾ",
        "������",
        "�ı���������",
        "������",
        "���������ֵ",
        "�ӹ�����",
        "���Ṧ",
        "�ӷ�����",
        "��ҽ��",
        "��ʹ��",
        "�ӽⶾ",
        "�ӿ���",
        "��ȭ��",
        "������",
        "��ˣ��",
        "���������",
        "�Ӱ�������",
        "����ѧ��ʶ",
        "��Ʒ��",
        "�����һ���",
        "�ӹ�������",
        "����������",
        "����������",
        "������",
        "�蹥����",
        "���Ṧ",
        "���ö�",
        "��ҽ��",
        "��ⶾ",
        "��ȭ��",
        "������",
        "��ˣ��",
        "���������",
        "�谵��",
        "������",
        "�辭��",
        "������Ʒ�辭��",
        "�����",
        "������Ʒ1",
        "������Ʒ2",
        "������Ʒ3",
        "������Ʒ4",
        "������Ʒ5",
        "������Ʒ����1",
        "������Ʒ����2",
        "������Ʒ����3",
        "������Ʒ����4",
        "������Ʒ����5");
    auto getDefault = []()
    {
        Item nextLineData;
        nextLineData.ID = 0;
        memset(nextLineData.Name, '\0', sizeof(nextLineData.Name));
        for (int j = 0; j < 10; j++)
        {
            nextLineData.Name1[j] = 0;
        }
        memset(nextLineData.Introduction, '\0', sizeof(nextLineData.Introduction));
        nextLineData.MagicID = -1;
        nextLineData.HiddenWeaponEffectID = -1;
        nextLineData.User = -1;
        nextLineData.EquipType = -1;
        nextLineData.ShowIntroduction = 0;
        nextLineData.ItemType = 0;
        nextLineData.UnKnown5 = 0;
        nextLineData.UnKnown6 = 0;
        nextLineData.UnKnown7 = 0;
        nextLineData.AddHP = 0;
        nextLineData.AddMaxHP = 0;
        nextLineData.AddPoison = 0;
        nextLineData.AddPhysicalPower = 0;
        nextLineData.ChangeMPType = -1;
        nextLineData.AddMP = 0;
        nextLineData.AddMaxMP = 0;
        nextLineData.AddAttack = 0;
        nextLineData.AddSpeed = 0;
        nextLineData.AddDefence = 0;
        nextLineData.AddMedicine = 0;
        nextLineData.AddUsePoison = 0;
        nextLineData.AddDetoxification = 0;
        nextLineData.AddAntiPoison = 0;
        nextLineData.AddFist = 0;
        nextLineData.AddSword = 0;
        nextLineData.AddKnife = 0;
        nextLineData.AddUnusual = 0;
        nextLineData.AddHiddenWeapon = 0;
        nextLineData.AddKnowledge = 0;
        nextLineData.AddMorality = 0;
        nextLineData.AddAttackTwice = 0;
        nextLineData.AddAttackWithPoison = 0;
        nextLineData.OnlySuitableRole = -1;
        nextLineData.NeedMPType = 0;
        nextLineData.NeedMP = 0;
        nextLineData.NeedAttack = 0;
        nextLineData.NeedSpeed = 0;
        nextLineData.NeedUsePoison = 0;
        nextLineData.NeedMedicine = 0;
        nextLineData.NeedDetoxification = 0;
        nextLineData.NeedFist = 0;
        nextLineData.NeedSword = 0;
        nextLineData.NeedKnife = 0;
        nextLineData.NeedUnusual = 0;
        nextLineData.NeedHiddenWeapon = 0;
        nextLineData.NeedIQ = 0;
        nextLineData.NeedExp = 0;
        nextLineData.NeedExpForMakeItem = 0;
        nextLineData.NeedMaterial = -1;
        for (int j = 0; j < 5; j++)
        {
            nextLineData.MakeItem[j] = -1;
        }
        for (int j = 0; j < 5; j++)
        {
            nextLineData.MakeItemCount[j] = 0;
        }
        return nextLineData;
    };
    char* Name__;
    char* Introduction__;
    int lines = 0;
    auto nextLineData = getDefault();
    while (in.read_row(
        nextLineData.ID,
        Name__,
        nextLineData.Name1[0],
        nextLineData.Name1[1],
        nextLineData.Name1[2],
        nextLineData.Name1[3],
        nextLineData.Name1[4],
        nextLineData.Name1[5],
        nextLineData.Name1[6],
        nextLineData.Name1[7],
        nextLineData.Name1[8],
        nextLineData.Name1[9],
        Introduction__,
        nextLineData.MagicID,
        nextLineData.HiddenWeaponEffectID,
        nextLineData.User,
        nextLineData.EquipType,
        nextLineData.ShowIntroduction,
        nextLineData.ItemType,
        nextLineData.UnKnown5,
        nextLineData.UnKnown6,
        nextLineData.UnKnown7,
        nextLineData.AddHP,
        nextLineData.AddMaxHP,
        nextLineData.AddPoison,
        nextLineData.AddPhysicalPower,
        nextLineData.ChangeMPType,
        nextLineData.AddMP,
        nextLineData.AddMaxMP,
        nextLineData.AddAttack,
        nextLineData.AddSpeed,
        nextLineData.AddDefence,
        nextLineData.AddMedicine,
        nextLineData.AddUsePoison,
        nextLineData.AddDetoxification,
        nextLineData.AddAntiPoison,
        nextLineData.AddFist,
        nextLineData.AddSword,
        nextLineData.AddKnife,
        nextLineData.AddUnusual,
        nextLineData.AddHiddenWeapon,
        nextLineData.AddKnowledge,
        nextLineData.AddMorality,
        nextLineData.AddAttackTwice,
        nextLineData.AddAttackWithPoison,
        nextLineData.OnlySuitableRole,
        nextLineData.NeedMPType,
        nextLineData.NeedMP,
        nextLineData.NeedAttack,
        nextLineData.NeedSpeed,
        nextLineData.NeedUsePoison,
        nextLineData.NeedMedicine,
        nextLineData.NeedDetoxification,
        nextLineData.NeedFist,
        nextLineData.NeedSword,
        nextLineData.NeedKnife,
        nextLineData.NeedUnusual,
        nextLineData.NeedHiddenWeapon,
        nextLineData.NeedIQ,
        nextLineData.NeedExp,
        nextLineData.NeedExpForMakeItem,
        nextLineData.NeedMaterial,
        nextLineData.MakeItem[0],
        nextLineData.MakeItem[1],
        nextLineData.MakeItem[2],
        nextLineData.MakeItem[3],
        nextLineData.MakeItem[4],
        nextLineData.MakeItemCount[0],
        nextLineData.MakeItemCount[1],
        nextLineData.MakeItemCount[2],
        nextLineData.MakeItemCount[3],
        nextLineData.MakeItemCount[4]))
    {
        strncpy(nextLineData.Introduction, Introduction__, sizeof(nextLineData.Introduction) - 1);
        strncpy(nextLineData.Name, Name__, sizeof(nextLineData.Name) - 1);
        data.push_back(nextLineData);
        lines++;
        nextLineData = getDefault();
    }
}
// ����
void NewSave::LoadCSVSubMapInfoSave(std::vector<SubMapInfo>& data, int record)
{
    data.clear();
    io::CSVReader<22, io::trim_chars<>, io::double_quote_escape<',', '\"'>> in("../game/save/csv/" + std::to_string(record) + "_����.csv");
    in.read_header(io::ignore_missing_column | io::ignore_extra_column,
        "���",
        "����",
        "��������",
        "��������",
        "��ת����",
        "��������",
        "�⾰���X1",
        "�⾰���Y1",
        "�⾰���X2",
        "�⾰���Y2",
        "���X",
        "���Y",
        "����X1",
        "����X2",
        "����X3",
        "����Y1",
        "����Y2",
        "����Y3",
        "��תX",
        "��תY",
        "��ת����X",
        "��ת����Y");
    auto getDefault = []()
    {
        SubMapInfo nextLineData;
        nextLineData.ID = 0;
        memset(nextLineData.Name, '\0', sizeof(nextLineData.Name));
        nextLineData.ExitMusic = 0;
        nextLineData.EntranceMusic = -1;
        nextLineData.JumpSubMap = -1;
        nextLineData.EntranceCondition = 0;
        nextLineData.MainEntranceX1 = 0;
        nextLineData.MainEntranceY1 = 0;
        nextLineData.MainEntranceX2 = 0;
        nextLineData.MainEntranceY2 = 0;
        nextLineData.EntranceX = 0;
        nextLineData.EntranceY = 0;
        for (int j = 0; j < 3; j++)
        {
            nextLineData.ExitX[j] = -1;
        }
        for (int j = 0; j < 3; j++)
        {
            nextLineData.ExitY[j] = -1;
        }
        nextLineData.JumpX = 0;
        nextLineData.JumpY = 0;
        nextLineData.JumpReturnX = 0;
        nextLineData.JumpReturnY = 0;
        return nextLineData;
    };
    char* Name__;
    int lines = 0;
    auto nextLineData = getDefault();
    while (in.read_row(
        nextLineData.ID,
        Name__,
        nextLineData.ExitMusic,
        nextLineData.EntranceMusic,
        nextLineData.JumpSubMap,
        nextLineData.EntranceCondition,
        nextLineData.MainEntranceX1,
        nextLineData.MainEntranceY1,
        nextLineData.MainEntranceX2,
        nextLineData.MainEntranceY2,
        nextLineData.EntranceX,
        nextLineData.EntranceY,
        nextLineData.ExitX[0],
        nextLineData.ExitX[1],
        nextLineData.ExitX[2],
        nextLineData.ExitY[0],
        nextLineData.ExitY[1],
        nextLineData.ExitY[2],
        nextLineData.JumpX,
        nextLineData.JumpY,
        nextLineData.JumpReturnX,
        nextLineData.JumpReturnY))
    {
        strncpy(nextLineData.Name, Name__, sizeof(nextLineData.Name) - 1);
        data.push_back(nextLineData);
        lines++;
        nextLineData = getDefault();
    }
}
// �书
void NewSave::LoadCSVMagicSave(std::vector<Magic>& data, int record)
{
    data.clear();
    io::CSVReader<64, io::trim_chars<>, io::double_quote_escape<',', '\"'>> in("../game/save/csv/" + std::to_string(record) + "_�书.csv");
    in.read_header(io::ignore_missing_column | io::ignore_extra_column,
        "���",
        "����",
        "δ֪1",
        "δ֪2",
        "δ֪3",
        "δ֪4",
        "δ֪5",
        "������Ч",
        "�书����",
        "�书����",
        "�˺�����",
        "������Χ����",
        "��������",
        "�����ж�",
        "����1",
        "����2",
        "����3",
        "����4",
        "����5",
        "����6",
        "����7",
        "����8",
        "����9",
        "����10",
        "�ƶ���Χ1",
        "�ƶ���Χ2",
        "�ƶ���Χ3",
        "�ƶ���Χ4",
        "�ƶ���Χ5",
        "�ƶ���Χ6",
        "�ƶ���Χ7",
        "�ƶ���Χ8",
        "�ƶ���Χ9",
        "�ƶ���Χ10",
        "ɱ�˷�Χ1",
        "ɱ�˷�Χ2",
        "ɱ�˷�Χ3",
        "ɱ�˷�Χ4",
        "ɱ�˷�Χ5",
        "ɱ�˷�Χ6",
        "ɱ�˷�Χ7",
        "ɱ�˷�Χ8",
        "ɱ�˷�Χ9",
        "ɱ�˷�Χ10",
        "������1",
        "������2",
        "������3",
        "������4",
        "������5",
        "������6",
        "������7",
        "������8",
        "������9",
        "������10",
        "ɱ������1",
        "ɱ������2",
        "ɱ������3",
        "ɱ������4",
        "ɱ������5",
        "ɱ������6",
        "ɱ������7",
        "ɱ������8",
        "ɱ������9",
        "ɱ������10");
    auto getDefault = []()
    {
        Magic nextLineData;
        nextLineData.ID = 0;
        memset(nextLineData.Name, '\0', sizeof(nextLineData.Name));
        for (int j = 0; j < 5; j++)
        {
            nextLineData.Unknown[j] = 0;
        }
        nextLineData.SoundID = 0;
        nextLineData.MagicType = 0;
        nextLineData.EffectID = 0;
        nextLineData.HurtType = 0;
        nextLineData.AttackAreaType = 0;
        nextLineData.NeedMP = 0;
        nextLineData.WithPoison = 0;
        for (int j = 0; j < 10; j++)
        {
            nextLineData.Attack[j] = 0;
        }
        for (int j = 0; j < 10; j++)
        {
            nextLineData.SelectDistance[j] = 0;
        }
        for (int j = 0; j < 10; j++)
        {
            nextLineData.AttackDistance[j] = 0;
        }
        for (int j = 0; j < 10; j++)
        {
            nextLineData.AddMP[j] = 0;
        }
        for (int j = 0; j < 10; j++)
        {
            nextLineData.HurtMP[j] = 0;
        }
        return nextLineData;
    };
    char* Name__;
    int lines = 0;
    auto nextLineData = getDefault();
    while (in.read_row(
        nextLineData.ID,
        Name__,
        nextLineData.Unknown[0],
        nextLineData.Unknown[1],
        nextLineData.Unknown[2],
        nextLineData.Unknown[3],
        nextLineData.Unknown[4],
        nextLineData.SoundID,
        nextLineData.MagicType,
        nextLineData.EffectID,
        nextLineData.HurtType,
        nextLineData.AttackAreaType,
        nextLineData.NeedMP,
        nextLineData.WithPoison,
        nextLineData.Attack[0],
        nextLineData.Attack[1],
        nextLineData.Attack[2],
        nextLineData.Attack[3],
        nextLineData.Attack[4],
        nextLineData.Attack[5],
        nextLineData.Attack[6],
        nextLineData.Attack[7],
        nextLineData.Attack[8],
        nextLineData.Attack[9],
        nextLineData.SelectDistance[0],
        nextLineData.SelectDistance[1],
        nextLineData.SelectDistance[2],
        nextLineData.SelectDistance[3],
        nextLineData.SelectDistance[4],
        nextLineData.SelectDistance[5],
        nextLineData.SelectDistance[6],
        nextLineData.SelectDistance[7],
        nextLineData.SelectDistance[8],
        nextLineData.SelectDistance[9],
        nextLineData.AttackDistance[0],
        nextLineData.AttackDistance[1],
        nextLineData.AttackDistance[2],
        nextLineData.AttackDistance[3],
        nextLineData.AttackDistance[4],
        nextLineData.AttackDistance[5],
        nextLineData.AttackDistance[6],
        nextLineData.AttackDistance[7],
        nextLineData.AttackDistance[8],
        nextLineData.AttackDistance[9],
        nextLineData.AddMP[0],
        nextLineData.AddMP[1],
        nextLineData.AddMP[2],
        nextLineData.AddMP[3],
        nextLineData.AddMP[4],
        nextLineData.AddMP[5],
        nextLineData.AddMP[6],
        nextLineData.AddMP[7],
        nextLineData.AddMP[8],
        nextLineData.AddMP[9],
        nextLineData.HurtMP[0],
        nextLineData.HurtMP[1],
        nextLineData.HurtMP[2],
        nextLineData.HurtMP[3],
        nextLineData.HurtMP[4],
        nextLineData.HurtMP[5],
        nextLineData.HurtMP[6],
        nextLineData.HurtMP[7],
        nextLineData.HurtMP[8],
        nextLineData.HurtMP[9]))
    {
        strncpy(nextLineData.Name, Name__, sizeof(nextLineData.Name) - 1);
        data.push_back(nextLineData);
        lines++;
        nextLineData = getDefault();
    }
}
// �̵�
void NewSave::LoadCSVShopSave(std::vector<Shop>& data, int record)
{
    data.clear();
    io::CSVReader<15, io::trim_chars<>, io::double_quote_escape<',', '\"'>> in("../game/save/csv/" + std::to_string(record) + "_�̵�.csv");
    in.read_header(io::ignore_missing_column | io::ignore_extra_column,
        "��Ʒ���1",
        "��Ʒ���2",
        "��Ʒ���3",
        "��Ʒ���4",
        "��Ʒ���5",
        "��Ʒ����1",
        "��Ʒ����2",
        "��Ʒ����3",
        "��Ʒ����4",
        "��Ʒ����5",
        "��Ʒ�۸�1",
        "��Ʒ�۸�2",
        "��Ʒ�۸�3",
        "��Ʒ�۸�4",
        "��Ʒ�۸�5");
    auto getDefault = []()
    {
        Shop nextLineData;
        for (int j = 0; j < 5; j++)
        {
            nextLineData.ItemID[j] = -1;
        }
        for (int j = 0; j < 5; j++)
        {
            nextLineData.Total[j] = 0;
        }
        for (int j = 0; j < 5; j++)
        {
            nextLineData.Price[j] = 0;
        }
        return nextLineData;
    };
    int lines = 0;
    auto nextLineData = getDefault();
    while (in.read_row(
        nextLineData.ItemID[0],
        nextLineData.ItemID[1],
        nextLineData.ItemID[2],
        nextLineData.ItemID[3],
        nextLineData.ItemID[4],
        nextLineData.Total[0],
        nextLineData.Total[1],
        nextLineData.Total[2],
        nextLineData.Total[3],
        nextLineData.Total[4],
        nextLineData.Price[0],
        nextLineData.Price[1],
        nextLineData.Price[2],
        nextLineData.Price[3],
        nextLineData.Price[4]))
    {
        data.push_back(nextLineData);
        lines++;
        nextLineData = getDefault();
    }
}
void NewSave::InsertRoleAt(std::vector<Role>& data, int idx)
{
    auto newCopy = data[idx];
    data.insert(data.begin() + idx, newCopy);
    for (int i = 0; i < data.size(); i++)
    {
        data[i].ID = i;
    }
    Save::getInstance()->updateAllPtrVector();
    for (int i = 0; i < 1; i++)
    {
        auto p = Save::getInstance();
        if (p->Team[0] >= idx)
        {
            p->Team[0] += 1;
        }
        if (p->Team[1] >= idx)
        {
            p->Team[1] += 1;
        }
        if (p->Team[2] >= idx)
        {
            p->Team[2] += 1;
        }
        if (p->Team[3] >= idx)
        {
            p->Team[3] += 1;
        }
        if (p->Team[4] >= idx)
        {
            p->Team[4] += 1;
        }
        if (p->Team[5] >= idx)
        {
            p->Team[5] += 1;
        }
    }
    for (auto& p : Save::getInstance()->getItems())
    {
        if (p->User >= idx)
        {
            p->User += 1;
        }
        if (p->OnlySuitableRole >= idx)
        {
            p->OnlySuitableRole += 1;
        }
    }
}
void NewSave::InsertItemAt(std::vector<Item>& data, int idx)
{
    auto newCopy = data[idx];
    data.insert(data.begin() + idx, newCopy);
    for (int i = 0; i < data.size(); i++)
    {
        data[i].ID = i;
    }
    Save::getInstance()->updateAllPtrVector();
    for (int i = 0; i < ITEM_IN_BAG_COUNT; i++)
    {
        auto* p = &(Save::getInstance()->Items[i]);
        if (p->item_id >= idx)
        {
            p->item_id += 1;
        }
    }
    for (auto& p : Save::getInstance()->getRoles())
    {
        if (p->Equip0 >= idx)
        {
            p->Equip0 += 1;
        }
        if (p->Equip1 >= idx)
        {
            p->Equip1 += 1;
        }
        if (p->PracticeItem >= idx)
        {
            p->PracticeItem += 1;
        }
        if (p->TakingItem[0] >= idx)
        {
            p->TakingItem[0] += 1;
        }
        if (p->TakingItem[1] >= idx)
        {
            p->TakingItem[1] += 1;
        }
        if (p->TakingItem[2] >= idx)
        {
            p->TakingItem[2] += 1;
        }
        if (p->TakingItem[3] >= idx)
        {
            p->TakingItem[3] += 1;
        }
    }
    for (auto& p : Save::getInstance()->getItems())
    {
        if (p->NeedMaterial >= idx)
        {
            p->NeedMaterial += 1;
        }
        if (p->MakeItem[0] >= idx)
        {
            p->MakeItem[0] += 1;
        }
        if (p->MakeItem[1] >= idx)
        {
            p->MakeItem[1] += 1;
        }
        if (p->MakeItem[2] >= idx)
        {
            p->MakeItem[2] += 1;
        }
        if (p->MakeItem[3] >= idx)
        {
            p->MakeItem[3] += 1;
        }
        if (p->MakeItem[4] >= idx)
        {
            p->MakeItem[4] += 1;
        }
    }
    for (auto& p : Save::getInstance()->getShops())
    {
        if (p->ItemID[0] >= idx)
        {
            p->ItemID[0] += 1;
        }
        if (p->ItemID[1] >= idx)
        {
            p->ItemID[1] += 1;
        }
        if (p->ItemID[2] >= idx)
        {
            p->ItemID[2] += 1;
        }
        if (p->ItemID[3] >= idx)
        {
            p->ItemID[3] += 1;
        }
        if (p->ItemID[4] >= idx)
        {
            p->ItemID[4] += 1;
        }
    }
}
void NewSave::InsertSubMapInfoAt(std::vector<SubMapInfo>& data, int idx)
{
    auto newCopy = data[idx];
    data.insert(data.begin() + idx, newCopy);
    for (int i = 0; i < data.size(); i++)
    {
        data[i].ID = i;
    }
    Save::getInstance()->updateAllPtrVector();
}
void NewSave::InsertMagicAt(std::vector<Magic>& data, int idx)
{
    auto newCopy = data[idx];
    data.insert(data.begin() + idx, newCopy);
    for (int i = 0; i < data.size(); i++)
    {
        data[i].ID = i;
    }
    Save::getInstance()->updateAllPtrVector();
    for (auto& p : Save::getInstance()->getRoles())
    {
        if (p->MagicID[0] >= idx)
        {
            p->MagicID[0] += 1;
        }
        if (p->MagicID[1] >= idx)
        {
            p->MagicID[1] += 1;
        }
        if (p->MagicID[2] >= idx)
        {
            p->MagicID[2] += 1;
        }
        if (p->MagicID[3] >= idx)
        {
            p->MagicID[3] += 1;
        }
        if (p->MagicID[4] >= idx)
        {
            p->MagicID[4] += 1;
        }
        if (p->MagicID[5] >= idx)
        {
            p->MagicID[5] += 1;
        }
        if (p->MagicID[6] >= idx)
        {
            p->MagicID[6] += 1;
        }
        if (p->MagicID[7] >= idx)
        {
            p->MagicID[7] += 1;
        }
        if (p->MagicID[8] >= idx)
        {
            p->MagicID[8] += 1;
        }
        if (p->MagicID[9] >= idx)
        {
            p->MagicID[9] += 1;
        }
    }
    for (auto& p : Save::getInstance()->getItems())
    {
        if (p->MagicID >= idx)
        {
            p->MagicID += 1;
        }
    }
}
void NewSave::InsertShopAt(std::vector<Shop>& data, int idx)
{
    auto newCopy = data[idx];
    data.insert(data.begin() + idx, newCopy);
    for (int i = 0; i < data.size(); i++)
    {
        // data[i].ID = i;
    }
    Save::getInstance()->updateAllPtrVector();
}

NewSave NewSave::new_save_;

#define GET_OFFSET(field) (int((char*)(&(a.field)) - (char*)(&a)))
#define BIND_FIELD_INT(key, field) FieldInfo(key, 0, GET_OFFSET(field), sizeof(a.field))
#define BIND_FIELD_TEXT(key, field) FieldInfo(key, 1, GET_OFFSET(field), sizeof(a.field))

void NewSave::initDBFieldInfo()
{
    if (new_save_.base_.size() == 0)
    {
        Save::BaseInfo a;
        new_save_.base_ =
        {
            BIND_FIELD_INT("�˴�", InShip),
            BIND_FIELD_INT("�ӳ�����", InSubMap),
            BIND_FIELD_INT("����ͼX", MainMapX),
            BIND_FIELD_INT("����ͼY", MainMapY),
            BIND_FIELD_INT("�ӳ���X", SubMapX),
            BIND_FIELD_INT("�ӳ���Y", SubMapY),
            BIND_FIELD_INT("�泯����", FaceTowards),
            BIND_FIELD_INT("��X", ShipX),
            BIND_FIELD_INT("��Y", ShipY),
            BIND_FIELD_INT("��X1", ShipX1),
            BIND_FIELD_INT("��Y1", ShipY1),
            BIND_FIELD_INT("�ڲ�����", Encode),
            BIND_FIELD_INT("����1", Team[0]),
            BIND_FIELD_INT("����2", Team[1]),
            BIND_FIELD_INT("����3", Team[2]),
            BIND_FIELD_INT("����4", Team[3]),
            BIND_FIELD_INT("����5", Team[4]),
            BIND_FIELD_INT("����6", Team[5]),
        };
    }
    if (new_save_.item_list_.size() == 0)
    {
        ItemList a;
        new_save_.item_list_ =
        {
            BIND_FIELD_INT("��Ʒ���", item_id),
            BIND_FIELD_INT("��Ʒ����", count),
        };
    }
    if (new_save_.role_.size() == 0)
    {
        Role a;
        new_save_.role_ =
        {
            BIND_FIELD_INT("���", ID),
            BIND_FIELD_INT("ͷ��", HeadID),
            BIND_FIELD_INT("�����ɳ�", IncLife),
            BIND_FIELD_INT("����", UnUse),
            BIND_FIELD_TEXT("����", Name),
            BIND_FIELD_TEXT("���", Nick),
            BIND_FIELD_INT("�Ա�", Sexual),
            BIND_FIELD_INT("�ȼ�", Level),
            BIND_FIELD_INT("����", Exp),
            BIND_FIELD_INT("����", HP),
            BIND_FIELD_INT("�������ֵ", MaxHP),
            BIND_FIELD_INT("����", Hurt),
            BIND_FIELD_INT("�ж�", Poison),
            BIND_FIELD_INT("����", PhysicalPower),
            BIND_FIELD_INT("��Ʒ��������", ExpForMakeItem),
            BIND_FIELD_INT("����", Equip0),
            BIND_FIELD_INT("����", Equip1),
            BIND_FIELD_INT("����֡��1", Frame[0]),
            BIND_FIELD_INT("����֡��2", Frame[1]),
            BIND_FIELD_INT("����֡��3", Frame[2]),
            BIND_FIELD_INT("����֡��4", Frame[3]),
            BIND_FIELD_INT("����֡��5", Frame[4]),
            BIND_FIELD_INT("����֡��6", Frame[5]),
            BIND_FIELD_INT("����֡��7", Frame[6]),
            BIND_FIELD_INT("����֡��8", Frame[7]),
            BIND_FIELD_INT("����֡��9", Frame[8]),
            BIND_FIELD_INT("����֡��10", Frame[9]),
            BIND_FIELD_INT("����֡��11", Frame[10]),
            BIND_FIELD_INT("����֡��12", Frame[11]),
            BIND_FIELD_INT("����֡��13", Frame[12]),
            BIND_FIELD_INT("����֡��14", Frame[13]),
            BIND_FIELD_INT("����֡��15", Frame[14]),
            BIND_FIELD_INT("��������", MPType),
            BIND_FIELD_INT("����", MP),
            BIND_FIELD_INT("�������ֵ", MaxMP),
            BIND_FIELD_INT("������", Attack),
            BIND_FIELD_INT("�Ṧ", Speed),
            BIND_FIELD_INT("������", Defence),
            BIND_FIELD_INT("ҽ��", Medicine),
            BIND_FIELD_INT("�ö�", UsePoison),
            BIND_FIELD_INT("�ⶾ", Detoxification),
            BIND_FIELD_INT("����", AntiPoison),
            BIND_FIELD_INT("ȭ��", Fist),
            BIND_FIELD_INT("����", Sword),
            BIND_FIELD_INT("ˣ��", Knife),
            BIND_FIELD_INT("����", Unusual),
            BIND_FIELD_INT("����", HiddenWeapon),
            BIND_FIELD_INT("��ѧ��ʶ", Knowledge),
            BIND_FIELD_INT("Ʒ��", Morality),
            BIND_FIELD_INT("��������", AttackWithPoison),
            BIND_FIELD_INT("���һ���", AttackTwice),
            BIND_FIELD_INT("����", Fame),
            BIND_FIELD_INT("����", IQ),
            BIND_FIELD_INT("������Ʒ", PracticeItem),
            BIND_FIELD_INT("��������", ExpForItem),
            BIND_FIELD_INT("�����书1", MagicID[0]),
            BIND_FIELD_INT("�����书2", MagicID[1]),
            BIND_FIELD_INT("�����书3", MagicID[2]),
            BIND_FIELD_INT("�����书4", MagicID[3]),
            BIND_FIELD_INT("�����书5", MagicID[4]),
            BIND_FIELD_INT("�����书6", MagicID[5]),
            BIND_FIELD_INT("�����书7", MagicID[6]),
            BIND_FIELD_INT("�����书8", MagicID[7]),
            BIND_FIELD_INT("�����书9", MagicID[8]),
            BIND_FIELD_INT("�����书10", MagicID[9]),
            BIND_FIELD_INT("�书�ȼ�1", MagicLevel[0]),
            BIND_FIELD_INT("�书�ȼ�2", MagicLevel[1]),
            BIND_FIELD_INT("�书�ȼ�3", MagicLevel[2]),
            BIND_FIELD_INT("�书�ȼ�4", MagicLevel[3]),
            BIND_FIELD_INT("�书�ȼ�5", MagicLevel[4]),
            BIND_FIELD_INT("�书�ȼ�6", MagicLevel[5]),
            BIND_FIELD_INT("�书�ȼ�7", MagicLevel[6]),
            BIND_FIELD_INT("�书�ȼ�8", MagicLevel[7]),
            BIND_FIELD_INT("�书�ȼ�9", MagicLevel[8]),
            BIND_FIELD_INT("�书�ȼ�10", MagicLevel[9]),
            BIND_FIELD_INT("Я����Ʒ1", TakingItem[0]),
            BIND_FIELD_INT("Я����Ʒ2", TakingItem[1]),
            BIND_FIELD_INT("Я����Ʒ3", TakingItem[2]),
            BIND_FIELD_INT("Я����Ʒ4", TakingItem[3]),
            BIND_FIELD_INT("Я����Ʒ����1", TakingItemCount[0]),
            BIND_FIELD_INT("Я����Ʒ����2", TakingItemCount[1]),
            BIND_FIELD_INT("Я����Ʒ����3", TakingItemCount[2]),
            BIND_FIELD_INT("Я����Ʒ����4", TakingItemCount[3]),
        };
    }
    if (new_save_.item_.size() == 0)
    {
        Item a;
        new_save_.item_ =
        {
            BIND_FIELD_INT("���", ID),
            BIND_FIELD_TEXT("��Ʒ��", Name),
            BIND_FIELD_INT("��Ʒ������1", Name1[0]),
            BIND_FIELD_INT("��Ʒ������2", Name1[1]),
            BIND_FIELD_INT("��Ʒ������3", Name1[2]),
            BIND_FIELD_INT("��Ʒ������4", Name1[3]),
            BIND_FIELD_INT("��Ʒ������5", Name1[4]),
            BIND_FIELD_INT("��Ʒ������6", Name1[5]),
            BIND_FIELD_INT("��Ʒ������7", Name1[6]),
            BIND_FIELD_INT("��Ʒ������8", Name1[7]),
            BIND_FIELD_INT("��Ʒ������9", Name1[8]),
            BIND_FIELD_INT("��Ʒ������10", Name1[9]),
            BIND_FIELD_TEXT("��Ʒ˵��", Introduction),
            BIND_FIELD_INT("�����书", MagicID),
            BIND_FIELD_INT("�����������", HiddenWeaponEffectID),
            BIND_FIELD_INT("ʹ����", User),
            BIND_FIELD_INT("װ������", EquipType),
            BIND_FIELD_INT("��ʾ��Ʒ˵��", ShowIntroduction),
            BIND_FIELD_INT("��Ʒ����", ItemType),
            BIND_FIELD_INT("δ֪5", UnKnown5),
            BIND_FIELD_INT("δ֪6", UnKnown6),
            BIND_FIELD_INT("δ֪7", UnKnown7),
            BIND_FIELD_INT("������", AddHP),
            BIND_FIELD_INT("���������ֵ", AddMaxHP),
            BIND_FIELD_INT("���ж��ⶾ", AddPoison),
            BIND_FIELD_INT("������", AddPhysicalPower),
            BIND_FIELD_INT("�ı���������", ChangeMPType),
            BIND_FIELD_INT("������", AddMP),
            BIND_FIELD_INT("���������ֵ", AddMaxMP),
            BIND_FIELD_INT("�ӹ�����", AddAttack),
            BIND_FIELD_INT("���Ṧ", AddSpeed),
            BIND_FIELD_INT("�ӷ�����", AddDefence),
            BIND_FIELD_INT("��ҽ��", AddMedicine),
            BIND_FIELD_INT("��ʹ��", AddUsePoison),
            BIND_FIELD_INT("�ӽⶾ", AddDetoxification),
            BIND_FIELD_INT("�ӿ���", AddAntiPoison),
            BIND_FIELD_INT("��ȭ��", AddFist),
            BIND_FIELD_INT("������", AddSword),
            BIND_FIELD_INT("��ˣ��", AddKnife),
            BIND_FIELD_INT("���������", AddUnusual),
            BIND_FIELD_INT("�Ӱ�������", AddHiddenWeapon),
            BIND_FIELD_INT("����ѧ��ʶ", AddKnowledge),
            BIND_FIELD_INT("��Ʒ��", AddMorality),
            BIND_FIELD_INT("�����һ���", AddAttackTwice),
            BIND_FIELD_INT("�ӹ�������", AddAttackWithPoison),
            BIND_FIELD_INT("����������", OnlySuitableRole),
            BIND_FIELD_INT("����������", NeedMPType),
            BIND_FIELD_INT("������", NeedMP),
            BIND_FIELD_INT("�蹥����", NeedAttack),
            BIND_FIELD_INT("���Ṧ", NeedSpeed),
            BIND_FIELD_INT("���ö�", NeedUsePoison),
            BIND_FIELD_INT("��ҽ��", NeedMedicine),
            BIND_FIELD_INT("��ⶾ", NeedDetoxification),
            BIND_FIELD_INT("��ȭ��", NeedFist),
            BIND_FIELD_INT("������", NeedSword),
            BIND_FIELD_INT("��ˣ��", NeedKnife),
            BIND_FIELD_INT("���������", NeedUnusual),
            BIND_FIELD_INT("�谵��", NeedHiddenWeapon),
            BIND_FIELD_INT("������", NeedIQ),
            BIND_FIELD_INT("�辭��", NeedExp),
            BIND_FIELD_INT("������Ʒ�辭��", NeedExpForMakeItem),
            BIND_FIELD_INT("�����", NeedMaterial),
            BIND_FIELD_INT("������Ʒ1", MakeItem[0]),
            BIND_FIELD_INT("������Ʒ2", MakeItem[1]),
            BIND_FIELD_INT("������Ʒ3", MakeItem[2]),
            BIND_FIELD_INT("������Ʒ4", MakeItem[3]),
            BIND_FIELD_INT("������Ʒ5", MakeItem[4]),
            BIND_FIELD_INT("������Ʒ����1", MakeItemCount[0]),
            BIND_FIELD_INT("������Ʒ����2", MakeItemCount[1]),
            BIND_FIELD_INT("������Ʒ����3", MakeItemCount[2]),
            BIND_FIELD_INT("������Ʒ����4", MakeItemCount[3]),
            BIND_FIELD_INT("������Ʒ����5", MakeItemCount[4]),
        };
    }
    if (new_save_.submap_.size() == 0)
    {
        SubMapInfo a;
        new_save_.submap_ =
        {
            BIND_FIELD_INT("���", ID),
            BIND_FIELD_TEXT("����", Name),
            BIND_FIELD_INT("��������", ExitMusic),
            BIND_FIELD_INT("��������", EntranceMusic),
            BIND_FIELD_INT("��ת����", JumpSubMap),
            BIND_FIELD_INT("��������", EntranceCondition),
            BIND_FIELD_INT("�⾰���X1", MainEntranceX1),
            BIND_FIELD_INT("�⾰���Y1", MainEntranceY1),
            BIND_FIELD_INT("�⾰���X2", MainEntranceX2),
            BIND_FIELD_INT("�⾰���Y2", MainEntranceY2),
            BIND_FIELD_INT("���X", EntranceX),
            BIND_FIELD_INT("���Y", EntranceY),
            BIND_FIELD_INT("����X1", ExitX[0]),
            BIND_FIELD_INT("����X2", ExitX[1]),
            BIND_FIELD_INT("����X3", ExitX[2]),
            BIND_FIELD_INT("����Y1", ExitY[0]),
            BIND_FIELD_INT("����Y2", ExitY[1]),
            BIND_FIELD_INT("����Y3", ExitY[2]),
            BIND_FIELD_INT("��תX", JumpX),
            BIND_FIELD_INT("��תY", JumpY),
            BIND_FIELD_INT("��ת����X", JumpReturnX),
            BIND_FIELD_INT("��ת����Y", JumpReturnY),
        };
    }
    if (new_save_.magic_.size() == 0)
    {
        Magic a;
        new_save_.magic_ =
        {
            BIND_FIELD_INT("���", ID),
            BIND_FIELD_TEXT("����", Name),
            BIND_FIELD_INT("δ֪1", Unknown[0]),
            BIND_FIELD_INT("δ֪2", Unknown[1]),
            BIND_FIELD_INT("δ֪3", Unknown[2]),
            BIND_FIELD_INT("δ֪4", Unknown[3]),
            BIND_FIELD_INT("δ֪5", Unknown[4]),
            BIND_FIELD_INT("������Ч", SoundID),
            BIND_FIELD_INT("�书����", MagicType),
            BIND_FIELD_INT("�书����", EffectID),
            BIND_FIELD_INT("�˺�����", HurtType),
            BIND_FIELD_INT("������Χ����", AttackAreaType),
            BIND_FIELD_INT("��������", NeedMP),
            BIND_FIELD_INT("�����ж�", WithPoison),
            BIND_FIELD_INT("����1", Attack[0]),
            BIND_FIELD_INT("����2", Attack[1]),
            BIND_FIELD_INT("����3", Attack[2]),
            BIND_FIELD_INT("����4", Attack[3]),
            BIND_FIELD_INT("����5", Attack[4]),
            BIND_FIELD_INT("����6", Attack[5]),
            BIND_FIELD_INT("����7", Attack[6]),
            BIND_FIELD_INT("����8", Attack[7]),
            BIND_FIELD_INT("����9", Attack[8]),
            BIND_FIELD_INT("����10", Attack[9]),
            BIND_FIELD_INT("�ƶ���Χ1", SelectDistance[0]),
            BIND_FIELD_INT("�ƶ���Χ2", SelectDistance[1]),
            BIND_FIELD_INT("�ƶ���Χ3", SelectDistance[2]),
            BIND_FIELD_INT("�ƶ���Χ4", SelectDistance[3]),
            BIND_FIELD_INT("�ƶ���Χ5", SelectDistance[4]),
            BIND_FIELD_INT("�ƶ���Χ6", SelectDistance[5]),
            BIND_FIELD_INT("�ƶ���Χ7", SelectDistance[6]),
            BIND_FIELD_INT("�ƶ���Χ8", SelectDistance[7]),
            BIND_FIELD_INT("�ƶ���Χ9", SelectDistance[8]),
            BIND_FIELD_INT("�ƶ���Χ10", SelectDistance[9]),
            BIND_FIELD_INT("ɱ�˷�Χ1", AttackDistance[0]),
            BIND_FIELD_INT("ɱ�˷�Χ2", AttackDistance[1]),
            BIND_FIELD_INT("ɱ�˷�Χ3", AttackDistance[2]),
            BIND_FIELD_INT("ɱ�˷�Χ4", AttackDistance[3]),
            BIND_FIELD_INT("ɱ�˷�Χ5", AttackDistance[4]),
            BIND_FIELD_INT("ɱ�˷�Χ6", AttackDistance[5]),
            BIND_FIELD_INT("ɱ�˷�Χ7", AttackDistance[6]),
            BIND_FIELD_INT("ɱ�˷�Χ8", AttackDistance[7]),
            BIND_FIELD_INT("ɱ�˷�Χ9", AttackDistance[8]),
            BIND_FIELD_INT("ɱ�˷�Χ10", AttackDistance[9]),
            BIND_FIELD_INT("������1", AddMP[0]),
            BIND_FIELD_INT("������2", AddMP[1]),
            BIND_FIELD_INT("������3", AddMP[2]),
            BIND_FIELD_INT("������4", AddMP[3]),
            BIND_FIELD_INT("������5", AddMP[4]),
            BIND_FIELD_INT("������6", AddMP[5]),
            BIND_FIELD_INT("������7", AddMP[6]),
            BIND_FIELD_INT("������8", AddMP[7]),
            BIND_FIELD_INT("������9", AddMP[8]),
            BIND_FIELD_INT("������10", AddMP[9]),
            BIND_FIELD_INT("ɱ������1", HurtMP[0]),
            BIND_FIELD_INT("ɱ������2", HurtMP[1]),
            BIND_FIELD_INT("ɱ������3", HurtMP[2]),
            BIND_FIELD_INT("ɱ������4", HurtMP[3]),
            BIND_FIELD_INT("ɱ������5", HurtMP[4]),
            BIND_FIELD_INT("ɱ������6", HurtMP[5]),
            BIND_FIELD_INT("ɱ������7", HurtMP[6]),
            BIND_FIELD_INT("ɱ������8", HurtMP[7]),
            BIND_FIELD_INT("ɱ������9", HurtMP[8]),
            BIND_FIELD_INT("ɱ������10", HurtMP[9]),
        };
    }
    if (new_save_.shop_.size() == 0)
    {
        Shop a;
        new_save_.shop_ =
        {
            BIND_FIELD_INT("��Ʒ���1", ItemID[0]),
            BIND_FIELD_INT("��Ʒ���2", ItemID[1]),
            BIND_FIELD_INT("��Ʒ���3", ItemID[2]),
            BIND_FIELD_INT("��Ʒ���4", ItemID[3]),
            BIND_FIELD_INT("��Ʒ���5", ItemID[4]),
            BIND_FIELD_INT("��Ʒ����1", Total[0]),
            BIND_FIELD_INT("��Ʒ����2", Total[1]),
            BIND_FIELD_INT("��Ʒ����3", Total[2]),
            BIND_FIELD_INT("��Ʒ����4", Total[3]),
            BIND_FIELD_INT("��Ʒ����5", Total[4]),
            BIND_FIELD_INT("��Ʒ�۸�1", Price[0]),
            BIND_FIELD_INT("��Ʒ�۸�2", Price[1]),
            BIND_FIELD_INT("��Ʒ�۸�3", Price[2]),
            BIND_FIELD_INT("��Ʒ�۸�4", Price[3]),
            BIND_FIELD_INT("��Ʒ�۸�5", Price[4]),
        };
    }
}

void NewSave::SaveDBBaseInfo(sqlite3* db, Save::BaseInfo* data, int length)
{
    sqlite3_exec(db, "delete from base", nullptr, nullptr, nullptr);
    std::string cmd = "insert into base values(";
    for (auto& info : new_save_.base_)
    {
        cmd += std::to_string(*(int*)((char*)data + info.offset)) + ",";
    }
    cmd.pop_back();
    cmd += ")";
    sqlite3_exec(db, cmd.c_str(), nullptr, nullptr, nullptr);
}

void NewSave::LoadDBBaseInfo(sqlite3* db, Save::BaseInfo* data, int length)
{
    std::vector<Save::BaseInfo> datas;
    readValues(db, "base", new_save_.base_, datas);
    *data = datas[0];
}

void NewSave::SaveDBItemList(sqlite3* db, ItemList* data, int length)
{
    std::vector<ItemList> itemlist(length);
    for (int i = 0; i < length; i++)
    {
        itemlist[i] = data[i];
    }
    writeValues(db, "bag", new_save_.item_list_, itemlist);
}

void NewSave::LoadDBItemList(sqlite3* db, ItemList* data, int length)
{
    std::vector<ItemList> itemlist;
    readValues(db, "bag", new_save_.item_list_, itemlist);
    for (int i = 0; i < length; i++)
    {
        data[i] = itemlist[i];
    }
}

void NewSave::SaveDBRoleSave(sqlite3* db, const std::vector<Role>& data)
{
    writeValues(db, "role", new_save_.role_, data);
}

void NewSave::LoadDBRoleSave(sqlite3* db, std::vector<Role>& data)
{
    readValues(db, "role", new_save_.role_, data);
}

void NewSave::SaveDBItemSave(sqlite3* db, const std::vector<Item>& data)
{
    writeValues(db, "item", new_save_.item_, data);
}

void NewSave::LoadDBItemSave(sqlite3* db, std::vector<Item>& data)
{
    readValues(db, "item", new_save_.item_, data);
}

void NewSave::SaveDBSubMapInfoSave(sqlite3* db, const std::vector<SubMapInfo>& data)
{
    writeValues(db, "submap", new_save_.submap_, data);
}

void NewSave::LoadDBSubMapInfoSave(sqlite3* db, std::vector<SubMapInfo>& data)
{
    readValues(db, "submap", new_save_.submap_, data);
}

void NewSave::SaveDBMagicSave(sqlite3* db, const std::vector<Magic>& data)
{
    writeValues(db, "magic", new_save_.magic_, data);
}

void NewSave::LoadDBMagicSave(sqlite3* db, std::vector<Magic>& data)
{
    readValues(db, "magic", new_save_.magic_, data);
}

void NewSave::SaveDBShopSave(sqlite3* db, const std::vector<Shop>& data)
{
    writeValues(db, "shop", new_save_.shop_, data);
}

void NewSave::LoadDBShopSave(sqlite3* db, std::vector<Shop>& data)
{
    readValues(db, "shop", new_save_.shop_, data);
}
