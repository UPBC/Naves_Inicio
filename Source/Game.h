
class CGame
{
public:
	bool Start();
	static CGame instanceGame;

	CGame();
	void Finalize();

private:
	int estado;
};