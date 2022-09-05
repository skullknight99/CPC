/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReverseAnArray.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 09:36:17 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/05 09:47:38 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace	std;

int	main() {
	int	n;
	cin >> n;
	int	a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	while (n-- > 0)
		cout << a[n] << " ";
	return (0);
}