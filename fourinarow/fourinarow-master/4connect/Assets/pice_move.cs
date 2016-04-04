using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class pice_move : MonoBehaviour
{

	public GUIText debug;
	public string pice_color;
	public int self;
	public GameObject copied;
	public int[] hairetu = new int[42];
	public int[] board = new int[72];
	public int sel = 1;
	public int opo =-1;
	public bool comwin;
	public bool manwin;
	// public Text numText;
	public int[] vec = new int[12];


	public int currentNum;

	public float aspectWH = 1.6f;
	public float aspectAdd = 0.05f;

	public bool StartScreenAdjust = true;
	public bool UpdateScreenAdjust = false;
	public GameObject dot;
	Vector3 localScale;
	// private int p;
	public bool eval = true;
	public int turn = 1;
	//  private Vector2 v;
	private Vector2 pice;
	// Use this for initialization
	private	AudioSource	sound01;		// AudioSorceを格納する変数の宣言.
	public	AudioClip	sound;				// 効果音を格納する変数の宣言.
	void Start()
	{
		int i, j;
		Vector2 v = transform.position;
		// v.x = -3f;
		//p = 0;
		v.y = 3.5f;
		self = 1;
		transform.position = v;
		Physics2D.gravity = new Vector2(0, 0);
		localScale = transform.localScale;
		if (StartScreenAdjust)
		{
			ScreenAdjust();
		}
		for (i = 0; i <= 71; i++)
		{
			board[i] = 3;
		}
		for (i = 0; i <= 5; i++)
			for (j = 0; j <= 6; j++)
			{
				hairetu[i * 7 + j] = 0;
			}

		/* ゲーム起動時に initNum = 0 を設定してテキストで表示する*/

    sound01 = gameObject.GetComponent< AudioSource > ();	// AudioSorceコンポーネントを追加し、変数に代入.
			
		//audioSource.clip	= sound;		// 鳴らす音(変数)を格納.
			sound01.loop	= false;		// 音のループなし。




	}

	// Update is called once per frame
	void Update()
	{
		//GameObject copied;
		Vector2 v = transform.position;
		//v.x = 0;
		//v.y = 3.5f;
		int i, j, z, y, p;
		self = -1;
		p = 0;
		//bool b;
		//int[] vec = new int[8];
		if (UpdateScreenAdjust)
		{
			ScreenAdjust();
		}

		//	transform.position = v;
		//}
		if (Input.GetMouseButtonDown (0)) {
			//GameObject copied = Object.Instantiate("yellow_pice") as GameObject;
			//GameObject prefab = (GameObject)Resources.Find ("yellow_pice");
			// プレハブからインスタンスを生成
			//Resources.Load<GameObject>("Prefabs/yellow_pice");
			//GameObject copied=Instantiate(Resources.Load("Prefab/red_pice"),new Vector3(-3,3,0),Quaternion.identity) as GameObject;  // こちらを使います
			// copied =Instantiate(Resources.Load("Prefabs/yellow_pice"),new Vector3(-3,3,0),Quaternion.identity) as GameObject; 
			if (self == -1) {
				self = 1;
				copied = Instantiate (Resources.Load ("Prefabs/red_pice"), new Vector3 (-3, 3, 0), Quaternion.identity) as GameObject;  // こちらを使います

			}
			/*  else
              {
                  self = 1;
                  copied = Instantiate(Resources.Load("Prefabs/yellow_pice"), new Vector3(-3, 3, 0), Quaternion.identity) as GameObject;  // こちらを使います

              }*/

			v = copied.transform.position;


			// v.x = 0;
			// v.y=3.5f;
			//y = -1;


			pice = Input.mousePosition;
			Debug.Log ("x=" + pice.x);
			v.x = (int)((pice.x / Screen.width) * 7) - 3;

			for (y = 5; y >= -1; y--) {
				if (y == -1)
					break;
				z = y * 7 + (int)v.x + 3;
				Debug.Log ("z=" + z);
				if (hairetu [z] == 0) {
					hairetu [z] = self;
					break;
				}
			}
			for (i = 0; i <= 5; i++)
				for (j = 0; j <= 6; j++)
					board [(j + 1) + (i + 1) * 9] = hairetu [j + i * 7];
			if (y == -1) {
				GameObject.Destroy (copied);
			}
			copied.transform.position = v;
			Physics2D.gravity = new Vector2 (10, -10.8f);
			Debug.Log ("y=" + y);


		}
		if(self==1){
			p = mini_max(5);

			if (self == 1)
			{
				self = -1;
				copied = Instantiate(Resources.Load("Prefabs/yellow_pice"), new Vector3(p, 3, 0), Quaternion.identity) as GameObject;  // こちらを使います

			}
			/* else
            {
                self = 1;
                copied = Instantiate(Resources.Load("Prefabs/yellow_pice"), new Vector3(p, 3, 0), Quaternion.identity) as GameObject;  // こちらを使います

            }*/

			v = copied.transform.position;


			//v.x = 0;
			//v.y=3.5f;
			//y = -1;


			v.x = (int)(p) - 3;

			for (y = 5; y >= -1; y--)
			{
				if (y == -1)
					break;
				z = y * 7 + (int)v.x + 3;
				Debug.Log("z=" + z);
				if (hairetu[z] == 0)
				{
					// hairetu[z] = self;
					hairetu[z] = self;
					break;
				}
			}
			if (y == -1)
			{
				GameObject.Destroy(copied);
			}
			copied.transform.position = v;
			Physics2D.gravity = new Vector2(0, -10.8f);
			Debug.Log("y=" + y);

		}
      

    }
	
      	// 音を鳴らす.
		
	

	int hyoka(int w)
	{
		int k, i, j, ev, z, y;

		int[] tb = { 0, 2, 14, 17, 14, 2, 0,
			0,4,19,34,19,14,0,
			3,5,10,47,10,5,3,
			4,6,12,59,12,6,4,
			3,5,10,63,10,5,3,
			2,4,9,11,49,4,2};
		ev = 0;
		z = 0;

		bool b;
		y = 0;
		b = true;
		for (i = 0; i <= 71; i++)
			board[i] = 3;
		for (i = 0; i <= 5; i++)
			for (j = 0; j <= 6; j++)
				board[(i + 1) * 9 + (j + 1)] = hairetu[i * 7 + j];
		//  for (i = 0; i <= 6; i++)



		//    for (y = 5; y >= 0; y--)


		z = w;

		/* if (hairetu[w] == 0)
                 {


                     continue;

                 }
             */

		//if (y < 0) continue;
		//if (y == -1) continue;


		vector1(z,2);
		ev = four(2);
		if (comwin || manwin)
			return (ev); 
		else ev += four(2);
		ev = four(2);
		vector1(z, 3);
		if (comwin || manwin)
			return (ev);
		else ev += four(3);
		vector1(z, 1);
		ev = four(3);
		if (comwin || manwin)
			return (ev);
		else ev += four(3);
		vector1(z,0);
		ev = four(0);
		if (comwin || manwin)
			return (ev);
		else ev += four(0);



		return (ev);
	}
	/* bool vect(int y)
         {
             int i, x, x1, y1;
             x1 = 1;
             y1 = 0;
             for (i = 0; i <= 10; i++)
             {
                 vec[i] = 0; Debug.Log(i);
             }
             for (i = 0; i <= 6; i++)
                 vec[i] = hairetu[y * 7 + i];
             x = four(); if (eval) return (true);
             if (comwin) { comdot(x, y, x1, y1); }
             if (manwin) { comdot(x, y, x1, y1); }


             if (comwin || manwin) { return true; }
             return false;
         }
         bool vect2(int x, int y)
         {
             int i, j, k, x1, y1;
             x1 = 1;
             y1 = 1;
             j = 0;
             k = 0;
             for (i = 0; i <= 10; i++)
             {
                 vec[i] = 0; Debug.Log(i);
             }
             for (i = -5; i <= 5; i++)
             {
                 if (((x + x1 * i) >= 0) && ((x + x1 * i) <= 6) && ((y + y1 * i) >= 0) && ((y + y1 * i) <= 5))
                 {
                     vec[i + 5] = hairetu[(x1 + y1 * 7) * i + x + y * 7]; Debug.Log("vec=" + vec[i + 5]); j = x1 * i + x; k = y1 * i + y;
                 }
             }
             four(); if (eval) return (true);
             if (comwin) { comdot(x, y, x1, y1); }
             if (manwin) { comdotf(x, y, x1, y1); }
             if (comwin || manwin) { return true; }
             return false;
             //eturn (four());
         }

         bool vect3(int x, int y)
         {
             int i, k, j, x1, y1;
             x1 = -1;
             y1 = 1;
             j = 0;
             k = 0;
             for (i = 0; i <= 10; i++)
             {
                 vec[i] = 0; Debug.Log(i);
             }
             for (i = -5; i <= 5; i++)
             {
                 if (((x + x1 * i) >= 0) && ((x + x1 * i) <= 6) && ((y + y1 * i) >= 0) && ((y + y1 * i) <= 5))
                 {
                     vec[i + 5] = hairetu[(x1 + y1 * 7) * i + x + y * 7]; Debug.Log("vec=" + vec[i + 5]); j = x1 * i + x; k = y1 * i + y;
                 }
             }
             four(); if (eval) return (true);
             if (comwin) { comdotf(x, y, x1, y1); }
             if (manwin) { comdotf(x, y, x1, y1); }
             if (comwin || manwin) { return true; }
             return false;

         }
         bool vect4(int x, int y)
         {
             int i, j, k, x1, y1;
             x1 = 0;
             y1 = 1;
             k = 0;
             j = 0;

             for (i = 0; i <= 10; i++)
             {
                 vec[i] = 0; Debug.Log(i);
             }
             for (i = -5; i <= 5; i++)
             {
                 if (((x + x1 * i) >= 0) && ((x + x1 * i) <= 6) && ((y + y1 * i) >= 0) && ((y + y1 * i) <= 5))
                 {
                     vec[i + 5] = hairetu[(x1 + y1 * 7) * i + x + y * 7]; Debug.Log("vec=" + vec[i + 5]); j = x1 * i + x; k = y1 * i + y;
                 }
             }

             four(); if (eval) return (true);
             if (comwin) { comdotf(x, y, x1, y1); }
             if (manwin) { comdotf(x, y, x1, y1); }
             if (comwin || manwin) { return true; }
             return false;
         }
         */
	int four(int u)
	{
		comwin = false;
		manwin = false;
		int i;
		int o, s, f;
		o = 0;s = 0;f = 0;
		int ev = 0;
		//vec = new int[12];
		for (i = 1; i <=6; i++)
		{
			if (vec[i] ==vec[i+1] && vec[i]== sel) { f += 1; }
			if (vec[i] == 0) { s += 1; }



		}
		if (s + f >=3) { comwin = false; ev += 150; }
		s = 0;o = 0;
		for (i = 1; i <= 6; i++)
		{

			if (vec[i] == vec[i+1] && vec[i]==opo) {o += 1; }
			if (vec[i] == 0) { s += 1; }



		}

		if (o + s >=3) { comwin = false; ev -= 150; }
		o = 0;f = 0;s = 0;
		for (i = 1; i <=4; i++) {

			if (vec[i] == 0 ) { s += 1; }
			if (vec[i]==vec[i+1]&& vec[i+1]==vec[i+2] && vec[i+2]==sel) { f= 1; }
			if (vec[i] ==vec[i+1]&& vec[i+1]==vec[i+3] && vec[i+2]==0&& vec[i]==sel) { f = 1; }
			if (vec[i] == vec[i + 2] && vec[i + 2] == vec[i + 3] && vec[i + 1] == 0 && vec[i] == sel) { f = 1; }

			if (f==1) { manwin = false; ev = 15000; }
			//if (f == -1 && s >= 1 && u == 0) manwin = true; return (ev = -30000);

		}
		f = 0;s = 0;
		for (i = 1; i <= 4; i++)
		{

			if (vec[i] == 0) { s += 1; }
			if (vec[i] == vec[i + 1] && vec[i + 1] == vec[i + 2] && vec[i+2]==opo) { f = -1; }
			if (vec[i] == vec[i + 1] && vec[i + 1] == vec[i + 3] && vec[i + 2] == 0 && vec[i] == opo) { f = -1; }
			if (vec[i] == vec[i + 2] && vec[i + 2] == vec[i + 3] && vec[i + 1] == 0 && vec[i] ==opo) { f = -1; }

			if (f == -1 ) { manwin = false; ev = -15000; }
			//  if(f==-1&&s>=1 &&u==0) manwin = true; return (ev = -30000);


		}



		for (i = 1; i <=4; i++)
		{
			if ((vec[i] == vec[i + 1] && vec[i + 1] == vec[i + 2] && vec[i + 2] == vec[i + 3]) && (vec[i+3] == sel))
			{
				comwin = true; return (ev=31000);
			}
		}
		s = 0;
		for (i = 1; i <= 4; i++)
		{

			if (vec[i] == 0) s += 1;
			if ((vec[i] == vec[i + 1] && vec[i + 1] == vec[i + 2] && vec[i + 2] == vec[i + 3]) && (vec[i+3] == opo))
			{
				{ manwin = true; return (ev = -31000); }

			}
		}
		return (ev);

	}

	/* 引数に渡された数値をテキストに反映させる */
	void ScreenAdjust()
	{
		float wh = (float)Screen.width / (float)Screen.height;
		//Debug.Log (string.Format("asepectWH:{0} wh:{1}",asepectWH,wh));
		if (wh < aspectWH)
		{
			transform.localScale = new Vector3(localScale.x - (aspectWH - wh) + aspectAdd,
				localScale.y,
				localScale.z);
		}
		else
		{
			transform.localScale = localScale;
		}
	}
	void comdot(int x, int y, int x1, int y1)
	{
		int i, j;

		//Vector2 v = transform.position;
		for (i = 0; i >= -6; i--)
		{


			if ((x + x1 * i >= 0) && (y + y1 * i >= 0) && (x + x1 * i <= 6) && (y + y1 * i <= 5)) {
				if (hairetu[x + y * 7 + (x1 + y1 * 7) * i] != -1 || hairetu[x + y * 7 + (x1 + y1 * 7) * i] != 1)
				{
					break;  //  dot = Instantiate(Resources.Load("Prefabs/dot_pice"), new Vector3(x - 3 + x1 * i, -y + 2.5f + y1 * i, 0), Quaternion.identity) as GameObject;
				}
			}
		}
		i--;
		for (j = i; j <= i + 4; j++)
			if ((x + x1 * j >= 0) && (y + y1 * j >= 0) && (x + x1 * j <= 6) && (y + y1 * j <= 5))
			{
				{

					if (hairetu[x + y * 7 + (x1 + y1 * 7) * j] == -1 || hairetu[x + y * 7 + (x1 + y1 * 7) * j] == 1)
						dot = Instantiate(Resources.Load("Prefabs/dot_pice"), new Vector3(x - 3 + x1 * j, -y + 2.5f - y1 * j, 0), Quaternion.identity) as GameObject;
				}
			}
	}
	void comdotf(int x, int y, int x1, int y1)
	{
		int i, j;
		/*for (i = 0; i <= 6; i++)
        for (j = 0; j <= 5; j++)
        {
            board[(i + 1) + (j + 1) * 9] = hairetu[i + j * 6];
        }
        */
		if (y1 == 1 && x1 == 1)
			// for (i = 0; i >= -5; i--)
		{
			{

				//   if (board[(x1 + 1) * i + ((y1 + 1) * 9) * i + (x + 1) + (y + 1) * 9] != 0)
				{
					//     x = x1 * i + x; y = y1 * i + y;
					comdot(x, y, x1, y1);
					//   break;
				}

			}


		}
		else if (y1 == 1 && x1 == 0)
			//for (i = 0; i >= -5; i--)
		{
			//if (((x + x1 * i) >= 0) && ((x + x1 * i) <= 6) && ((y + y1 * i) >= 0) && ((y + y1 * i) <= 5))
			//{
			//  if (board[(x1 + 1)*i + ((y1 + 1) * 9) * i + (x + 1) + (y + 1) * 9] != 0)
			{
				//    x = x1 * i + x; y = y1 * i + y;
				comdot(x, y, x1, y1);
				//  break;
			}


		}
		else if (y1 == 1 && x1 == -1)
			// for (i = 0; i >= -6; i--)
		{
			// if (((x + x1 * i) >= 0) && ((x + x1 * i) <= 6) && ((y + y1 * i) >= 0) && ((y + y1 * i) <= 5))
			//  {
			//    if (board[(x1 + 1) + ((y1 + 1) * 9) * i + (x + 1) + (y + 1) * 9] != 3)
			//  {
			//x = x1 * i + x; y = y1 * i + y;
			comdot(x, y, x1, y1);
			//    break;
			// }



		}
		else if (y1 == 0 && x1 == 1)
			//for (i = 0; i >= -6; i--)
		{
			//if (((x + x1 * i) >= 0) && ((x + x1 * i) <= 6) && ((y + y1 * i) >= 0) && ((y + y1 * i) <= 5))

			//if (board[(x1 + 1) + ((y1 + 1) * 9) * i + (x + 1) + (y + 1) * 9] == 3)
			{
				// x = x1 * i + x; y = y1 * i + y;
				comdot(x, y, x1, y1);

			}

		}
	}
	int mini_max(int lv)
	{
		int i, j, z, ev, alpha,k;
		int put = -1;
		int[] tb = { 343, 135, 24, 27, 24,135,343,
			119,144,110,110,110,144,119,
			3,35,3,7,3,35,3,
			4,36,12,19,12,36,4,
			3,5,0,0,0,5,3,
			2,4,0,0,0,4,2};
		ev = -100;
		alpha = -100000;
		z = 0;
		for (i = 0; i <= 6; i++)
		{

			for (j = 5; j >= 0; j--)
			{
				//if (j == -1) break;
				z = j * 7 + i;
				if (hairetu[z] == 0)
				{
					hairetu[z] = sel;

					break;
				}
			}
			if (j == -1)
			{
				//hairetu[z] = 0;
				continue;
			}
			comwin = false;
			k = hyoka(z);
			if (comwin)
			{
				hairetu[z] = 0;
				put = i;
				return (put);
			}
			ev =mini(lv - 1, alpha,100000,z);
			ev += tb[z];
			if (ev > alpha)
			{
				alpha = ev;
				put = i;
			}

			hairetu[z] = 0;
		}   
		return (put);
	}
	int max(int lv, int alpha, int beta,int w)

	{
		int ev, i, j, z, k, tmp;
		ev = -100000;
		tmp = 0;
		z = 0;
		int[] tb = { 55, 12, 26, 109, 26, 12, 55 };
		if (lv == 0)
		{
			i = w % 7;

			ev = hyoka(w);
			// ev -= tb[i];
			return (ev);
		}


		for (i = 0; i <= 6; i++)
		{

			for (j = 5; j >= 0; j--)
			{
				//if (j == -1) break;
				z = j * 7 + i;
				if (hairetu[z] == 0)
				{
					hairetu[z] = sel;

					break;

				}
			}

			if (j == -1)
			{

				continue;
			}

			comwin = false;
			tmp = hyoka(z);
			if (comwin)
			{
				hairetu[z] = 0;
				tmp = 35000;
				return (tmp);

			}
			tmp = mini(lv - 1, alpha, beta, z);
			if (ev <= tmp) ev = tmp;
			//  if (ev >= beta) { hairetu[z] = 0; return (ev); }
			hairetu[z] = 0; if (ev > beta) return (ev);
		}

		return (ev);
	}

	int mini(int lv, int alpha, int beta,int w)
	{
		int ev, i,k, j, z, tmp;
		ev = 100000;
		tmp = 0;
		z = 0;
		int[] tb = { -55, -12, -26, -109, -26, -12, -55 };
		if (lv == 0) {
			//turn = -1;
			i = w % 7;
			ev = hyoka(w);
			//ev += tb[i];
			return (ev);
		}

		//int[] tb = { 3, 4, 2, 5, 1, 6, 0 };

		for (i = 0; i <= 6; i++)
		{
			//i = tb[k];
			for (j = 5; j >= 0; j--)
			{
				//if (j == -1) break;
				z = j * 7 + i;
				if (hairetu[z] == 0)
				{
					hairetu[z] = opo;

					break;
				}
			}
			if (j == -1) continue;
			manwin = false;
			tmp = hyoka(z);
			if (manwin)
			{
				hairetu[z] = 0;
				tmp = -35000;
				return (tmp);
			}

			tmp=max(lv - 1, alpha, beta, z);
			if (ev >= tmp) ev = tmp;
			/* if(ev<= alpha) { hairetu[z] = 0;return (ev); }*/
			hairetu[z] = 0;
			if(ev<alpha)return (ev);
		}
		return (ev);
	}
	void vector1(int z, int i)
	{
		int j, zeza,x,y;
		int[] hoko = { 1, 10, 9, 8 };
		x =(int)( z % 7);
		y = (int)(z / 7);
		zeza = (y + 1) * 9 + x + 1;
		for (j = 0; j <= 8; j++)
			vec[j] = 0;
		j = 0;
		while (board[ zeza+ hoko[i] * j] != 3)
			j--;

		for (z = 1; z <= 7; z++) {
			j++;
			vec[z] = board[zeza + hoko[i] * j];
			if (board[zeza + hoko[i] * j] == 3) {


				break;
			}
			vec[0] = 3;vec[8] = 3;
		}

	}

}


