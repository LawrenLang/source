#pragma once
#include "block.h"
/*
ͼ����
��3����׼��λ���6����Ϣ�����
from������pic����������Ϣ��
read�����pic���õ�6����Ϣ��
*/
class pict
{
private:
	block block_info[3];
	block info;
public:
	pict()
	{
		info.set_block(ROW, COL);
		block_info[0].set_block(anchor_size * 8, COL - 2 * anchor_size);//�Ϸ���Ϣ��
		block_info[1].set_block(ROW - 2 * anchor_size * 8, COL);//�в���Ϣ��
		block_info[2].set_block(anchor_size * 8, COL - 2 * anchor_size);//�·���Ϣ��
	}
	void encode();
	void decode();
	void show(int x, int y);
	block get_block_info(int index);
	void set_block_info(int index, block src);
};

//charter��תpict��
vector<pict>charter_to_pict(vector<charter> ct);

//pict��תcharter��
vector<charter> pict_to_charter(vector<pict> pt);

//
FILE* mat_to_mov(vector<Mat>, int k);
vector<Mat> mov_to_mat(FILE* mov, int k);
