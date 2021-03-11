#ifndef SAMPLE_HPP
#define SAMPLE_HPP

class Sample
{
private:

	int _f;

public:

	Sample(void);
	~Sample(void);

	int		getF(void) const;
	int		compare(Sample * other) const;
	// void	setF(int v);
};

#endif
