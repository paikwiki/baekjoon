//
//  main.swift
//  q1712
//
//  Created by Changhyun Baek on 2020/10/25.
//

var inputData = (readLine()!).split(separator: " ").map{ Int($0)! }

var costA: Int
var costB: Int
var price: Int
var costTotal: Int
var salesTotal: Int
var count: Int

(costA, costB, price) = (inputData[0], inputData[1], inputData[2])
costTotal = costA + costB
count = -1
salesTotal = price * count

if price > costB {

    while costTotal >= salesTotal {
        count += 3000
        costTotal = costA + (costB * count)
        salesTotal = price * count
    }

    repeat {
        count -= 1
        costTotal = costA + (costB * count)
        salesTotal = price * count
    } while costTotal < salesTotal

    print(count + 1)

} else {

    print(count)

}
