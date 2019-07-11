/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 20:20:26 by mbutt             #+#    #+#             */
/*   Updated: 2019/07/10 21:01:55 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "header.h"
/*
void store_1(t_struct data)
{
	data.a = 'a';
	data.b = 'b';
	data.c = 'c';
	data.d = 'd';
	data.num1 = 1;

	printf("store:|%d|\n\n", data.num1);
}
*/

void store_1(t_struct *data)
{
	data->a    = 'a';
	data->b    = 'b';
	data->c    = 'c';
	data->d    = 'd';
	data->num1 = 983;

	printf("store_1:|%d|\n", data->num1);
}
void store_2(t_struct *data2)
{
	data2->e   = 'e';
	data2->f   = 'f';
	data2->g   = 'g';
	data2->a   = 'A';
	data2->b   = 'B';
}
/*
int main(void)
{
	t_struct data_test1;
	t_struct data_test2;

	store_1(&data_test1);
	store_2(&data_test2);

	printf("a:|%c|\n", data_test1.a);
	printf("b:|%c|\n", data_test1.b);
	printf("c:|%c|\n", data_test1.c);
	printf("d:|%c|\n", data_test1.d);
	printf("n:|%d|\n", data_test1.num1);
	printf("e:|%c|\n", data_test2.e);
	printf("f:|%c|\n", data_test2.f);
	printf("g:|%c|\n", data_test2.g);
	printf("a:|%c|\n", data_test2.a);
	printf("b:|%c|\n", data_test2.b);
}
*/

int main(void)
{
	t_struct data_test1;

	store_1(&data_test1);
	store_2(&data_test1);

	printf("a:|%c|\n", data_test1.a);
	printf("b:|%c|\n", data_test1.b);
	printf("c:|%c|\n", data_test1.c);
	printf("d:|%c|\n", data_test1.d);
	printf("n:|%d|\n", data_test1.num1);
	printf("e:|%c|\n", data_test1.e);
	printf("f:|%c|\n", data_test1.f);
	printf("g:|%c|\n", data_test1.g);
	printf("a:|%c|\n", data_test1.a);
	printf("b:|%c|\n", data_test1.b);
}
