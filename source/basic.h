#pragma once

#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<=r;i++)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
enum cardname {
	shadowstep, backstab, fakecoin, preparation, illusionpotion, sharkspirit, foxyfraud, mailboxdancer, cutterbutter, redsmoke, spectralpillager, 
	anyminion, anyspell, invalid
};
enum minionname {
	sharkspirit_m, foxyfraud_m, mailboxdancer_m, cutterbutter_m, redsmoke_m, spectralpillager_m,
	anyminion_m, enemyhero, enemyminion, nul
	//�з�Ӣ��-�����ǹ��������Ŀ��
	//�з����-�����Ǳ��̵�Ŀ��
	//��Ŀ��
	//������Ŀ�������������Լ򻯲���Ŀ��
};
string mn2str(minionname a);
string cn2str(cardname a);
cardname mn2cn(minionname a);
minionname cn2mn(cardname a);
bool legalcn2mn(cardname a);
int bcost(minionname a);

struct card {
	cardname name;
	int cost;
	//int health;
};
card cardcons(cardname a, int b);

struct minion {
	minionname name;
	//int health;
	//�Ѽ��� ����ֻ����ȥ����ǧ������ �������������ȥ�� �����ȥhealth 
};
minion minioncons(minionname a);

struct state {
	card hands[10]; int H;
	minion fields[7]; int F;
	int auras[4];
	int mana;
	int num;
};
state emptystcons();
extern state emptyst;

const int hlim = 10;
const int mlim = 7;
const int manalim = 10;
const int alim[4] = { 1,3,2,2 };

struct ope {
	int cost;
	cardname name;
	minionname target;
	//���������ʱ������Ѫ������˲���Ŀ�����Ҫ����������ѿ��԰����з�Ӣ�ۣ��з���ӣ���Ŀ�꣩ 
};
ope opecons(int a, cardname b, minionname c);

struct opes {
	vector<ope> os;
	~opes() {
		os.clear();
	}
};
opes emptyoscons();
extern opes emptyos;

extern int openmode;
extern int spelldebuff;
extern int miniondebuff;
extern int battlecrydebuff;

extern int iseq[999], isn;

struct quiz {
	state qst;
	int qnd;
};
quiz emptyqcons();

const int dmgbd = 10;
extern vector<quiz> quizs;
extern vector<opes> cls;
extern vector<opes> allcls;