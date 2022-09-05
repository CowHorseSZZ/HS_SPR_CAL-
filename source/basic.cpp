#include "basic.h"

string mn2str(minionname a) {
	switch (a) {
		case sharkspirit_m: {
			return "����";
			break;
		}
		case foxyfraud_m: {
			return "��ǧ";
			break;
		}
		case mailboxdancer_m: {
			return "����";
			break;
		}
		case cutterbutter_m: {
			return "����";
			break;
		}
		case redsmoke_m: {
			return "����";
			break;
		}
		case spectralpillager_m: {
			return "����";
			break;
		}
		case anyminion_m: {
			return "����";
			break;
		}
		case enemyhero: {
			return "����";
			break;
		}
		case enemyminion: {
			assert(0);
			return "";
			break;
		}
		case nul: {
			return "";
			break;
		}
		default: {
			assert(0);
			return "";
			break;
		}
	}
}
string cn2str(cardname a) {
	switch (a) {
		case sharkspirit: {
			return "����";
			break;
		}
		case foxyfraud: {
			return "��ǧ";
			break;
		}
		case mailboxdancer: {
			return "����";
			break;
		}
		case cutterbutter: {
			return "����";
			break;
		}
		case redsmoke: {
			return "����";
			break;
		}
		case spectralpillager: {
			return "����";
			break;
		}
		case anyminion: {
			return "���";
			break;
		}
		case shadowstep: {
			return "����";
			break;
		}
		case backstab: {
			return "����";
			break;
		}
		case fakecoin: {
			return "�ٱ�";
			break;
		}
		case preparation: {
			return "�Ż�";
			break;
		}
		case illusionpotion: {
			return "��ҩ";
			break;
		}
		case anyspell: {
			return "����";
			break;
		}
		case invalid: {
			return "����";
			break;
		}
		default: {
			assert(0);
			return "";
			break;
		}
	}
}
cardname mn2cn(minionname a) {
	switch (a) {
		case sharkspirit_m: {
			return sharkspirit;
			break;
		}
		case foxyfraud_m: {
			return foxyfraud;
			break;
		}
		case mailboxdancer_m: {
			return mailboxdancer;
			break;
		}
		case cutterbutter_m: {
			return cutterbutter;
			break;
		}
		case redsmoke_m: {
			return redsmoke;
			break;
		}
		case spectralpillager_m: {
			return spectralpillager;
			break;
		}
		case anyminion_m: {
			return anyminion;
			break;
		}
		default: {
			assert(0);
			return anyminion;
			break;
		}
	}
}
minionname cn2mn(cardname a) {
	switch (a) {
		case sharkspirit: {
			return sharkspirit_m;
			break;
		}
		case foxyfraud: {
			return foxyfraud_m;
			break;
		}
		case mailboxdancer: {
			return mailboxdancer_m;
			break;
		}
		case cutterbutter: {
			return cutterbutter_m;
			break;
		}
		case redsmoke: {
			return redsmoke_m;
			break;
		}
		case spectralpillager: {
			return spectralpillager_m;
			break;
		}
		case anyminion: {
			return anyminion_m;
			break;
		}
		default: {
			assert(0);
			return anyminion_m;
			break;
		}
	}
}
bool legalcn2mn(cardname a) {
	switch (a) {
		case sharkspirit:
		case foxyfraud:
		case mailboxdancer:
		case cutterbutter:
		case redsmoke:
		case spectralpillager:
		case anyminion: {
			return true;
			break;
		}
		default: {
			return false;
			break;
		}
	}
}
int bcost(minionname a) {
	switch (a) {
		case sharkspirit_m: {
			return 4;
			break;
		}
		case foxyfraud_m: {
			return 2;
			break;
		}
		case mailboxdancer_m: {
			return 2;
			break;
		}
		case cutterbutter_m: {
			return 4;
			break;
		}
		case redsmoke_m: {
			return 2;
			break;
		}
		case spectralpillager_m: {
			return 6;
			break;
		}
		case anyminion_m: {
			return 20;
			break;
		}
		case enemyhero: {
			assert(0);
			return 0;
			break;
		}
		case enemyminion: {
			assert(0);
			return 0;
			break;
		}
		default: {
			assert(0);
			return 0;
			break;
		}
	}
}

card cardcons(cardname a, int b) {
	card c;
	c.name = a;
	c.cost = b;
	return c;
}
minion minioncons(minionname a) {
	minion b;
	b.name = a;
	return b;
}
state emptystcons() {
	state a;
	a.H = 0;
	a.F = 0;
	rep(i, 0, 3) a.auras[i] = 0;
	a.mana = 0;
	a.num = 0;
	return a;
}
state emptyst = emptystcons();
ope opecons(int a, cardname b, minionname c) {
	ope d;
	d.cost = a;
	d.name = b;
	d.target = c;
	return d;
}

opes emptyoscons() {
	opes a;
	a.os.clear();
	return a;
}
opes emptyos = emptyoscons();

int openmode;
int spelldebuff;
int miniondebuff;
int battlecrydebuff;

int iseq[999], isn;

quiz emptyqcons() {
	quiz q;
	q.qst = emptystcons();
	q.qnd = 0;
	return q;
}
vector<quiz> quizs;

vector<opes> cls;
vector<opes> allcls;