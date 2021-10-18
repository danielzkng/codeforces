fun digSum(x : Long) : Long {
    if (x < 10L) {
        return x
    }
    return x % 10L + digSum(x / 10L)
}

fun main() {
    for (c in (1..readLine()!!.toInt())) {
        var (x, y) = readLine()!!.split(" ").map() { it.toLong() }
        println(digSum(y / x) + y % x)
    }
}