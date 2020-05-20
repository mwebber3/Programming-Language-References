package main 

import (
	"os"
	"fmt"
	"bufio"
	"io/ioutil"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter File Name: ")

	fileName, _ := reader.ReadString('\n')
	
	bytes, err := ioutil.ReadFile(fileName)

	// checks if file can be opened
	if err != nil {
		fmt.Print(err)
	}

	// converts bytes to string then outputs file data
	str := string(bytes)
	fmt.Println(str)
}
