#ifndef _GRAPH_H_
#define _GRAPH_H_

class Edge {
private:
	int number;
	int SrcVirtex;
	int DesVirtex;
	int weight;

public:
	Edge(int n,int s,int t,int w):number(n),SrcVirtex(s),DesVirtex(t),weight(w) {}

	~Edge() {}

	int GetSrcVirtex(int n);

	int GetDesVirtex(int n);

	int GetWeight(int n);
};

#endif