#include <iostream>
#include <fstream>
#include <string>
#include <queue>
using namespace std;

struct node {
	int weight;
	unsigned char value;
	const node *childL;
	const node *childR;

	node( unsigned char c = 0, int i = -1 ) {
		value = c;
		weight = i;
		childL = 0;
		childR = 0;
	}

	node( const node* c0, const node *c1 ) {
		value = 0;
		weight = c0->weight + c1->weight;
		childL = c0;
		childR = c1;
	}

	bool operator<( const node &a ) const {
		return weight >a.weight;
	}

	void traverse(string code="") const {
		
	if ( childL ) {
		childL->traverse( code + '0' );
		childR->traverse( code + '1' );
	} else {
		cout <<value <<": ";
		cout <<code <<endl;
	}
}

};



void count_chars( int *counts )
{
	for ( int i = 0 ; i <256 ; i++ )
		counts[ i ] = 0;
	char filename[25];
	printf("Type the name of the file to process:");
    scanf("%s",filename);
	ifstream file(filename);
	if ( !file ) {
		cout <<"Couldn't open the input file!\n";
		throw "NO";
	}
	file.setf( ios::skipws );
	for ( ; ; ) {
		unsigned char c;
		file>> c;
		if ( file )
			counts[ c ]++;
		else
			break;
   }
}

int main()
{
	int counts[ 256 ];
	count_chars( counts );
	priority_queue < node > q;

	for ( int i = 0 ; i <256 ; i++ )
		if ( counts[ i ] )
			q.push( node( i, counts[ i ] ) );

	while ( q.size() >1 ) {
		node *childL = new node( q.top() );
		q.pop();
		node *childR = new node( q.top() );
		q.pop();
		q.push( node( childL, childR ) );
	}

	q.top().traverse();
	return 0;
}

