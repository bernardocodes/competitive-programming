// https://codeforces.com/contest/2088/problem/A
fun main() {

  var t = readLine()!!.toInt()
  for (i in 1..t) { // qtd casos teste

    var cont = 0
    var n = readLine()!!.toInt() // le n

    for (a in 1..n) { // conta quantas vezes satisfaz a + b == n
      for (b in 1..n) {
        if (a + b == n) {
          cont++
        }
      }
    }

    println("$cont") // resp
  }
}
