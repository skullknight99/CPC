/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Candies.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 09:51:09 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/05 09:57:12 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace	std;

int	main() {
	int	n, a ,b, res = 0;
	cin >> n;
	int	kids[n];
	for (int i = 0; i < n; i++) {
		cin >> kids[i];
	}
	cin >> a >> b;
	while (a <= b) {
		res += kids[a];
		a++;
	}
	cout << res << endl;
}