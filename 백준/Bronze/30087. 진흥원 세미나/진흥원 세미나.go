package main

import (
    "bufio"
    "fmt"
    "os"
)

func main() {
    rw := bufio.NewReadWriter(bufio.NewReader(os.Stdin), bufio.NewWriter(os.Stdout))
    defer rw.Flush()

    m := map[string]string{"Algorithm": "204", "DataAnalysis": "207", "ArtificialIntelligence": "302", "CyberSecurity": "B101", "Network": "303", "Startup": "501", "TestStrategy": "105"}

    var n int
    fmt.Fscan(rw, &n)
    for i := 0; i < n; i++ {
        var s string
        fmt.Fscan(rw, &s)
        fmt.Fprintln(rw, m[s])
    }
}
