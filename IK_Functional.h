#ifndef _FUNCTIONAL_H_
#define _FUNCTIONAL_H_

namespace IK_STL{
	//********** [less] ****************
	template<class T>
	struct less{
		typedef T first_argument_type;
		typedef T second_argument_type;
		typedef bool result_type;

		result_type operator()(const first_argument_type& x, const second_argument_type& y){
			return x < y;
		}
	};
	//********** [equal_to] ****************
	template<class T>
	struct equal_to{
		typedef T first_argument_type;
		typedef T second_argument_type;
		typedef bool result_type;

		result_type operator()(const first_argument_type& x, const second_argument_type& y){
			return x == y;
		}
	};
	template<class T>
	struct identity
	{
		const T& operator()(const T& x)const
		{
			return x;
		}
	};

	template<class Pair>
	struct selectFirst
	{
		const typename Pair::first_type& operator()(const Pair& x)const
		{
			return x.first;
		}
	};
}
#endif