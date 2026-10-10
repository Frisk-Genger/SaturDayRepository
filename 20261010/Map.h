#pragma once

#include <vector>
#include <string>
using namespace std;

class Map
{
private:
	//マップチップの番号
	vector<vector<int>> mapData;
	//当たり判定の情報
	vector<vector<int>> hitData;

	//マップチップ画像
	int chipImage [64];

		//マップの大きさ
	static constexpr int CHIP_SIZE = 64;

	//csvファイルの読み込み
	bool LaodCSV(const char* fileName, std::vector < std::vector<int>>& data);
public:
	/// <summary>
	/// Mapコンストラクタ
	/// </summary>
	Map();
	/// <summary>
	/// 初期化
	/// </summary>
	/// <returns></returns>
	bool Init();

	/// <summary>
	/// 通行できるかどうか
	/// </summary>
	/// <param name="cameraX"></param>
	/// <param name="cameraY"></param>
	void Draw(float cameraX, float cameraY);

	/// <summary>
	/// ワールド座標から当たり判定を調べる
	/// </summary>
	/// <param name="tileX"></param>
	/// <param name="tileY"></param>
	/// <returns></returns>
	bool IsSolid(int tileX, int tileY);
};

