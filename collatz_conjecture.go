package collatzconjecture
import ("errors")
func CollatzConjecture(n int) (int, error) {
	if n <= 0 {
		return 0, errors.New ("input <= 0")
	}
	count := 0	
	for n != 1 {
		if n % 2 == 0 {
			n /= 2
		} else {
			n = n * 3 + 1
		}
		count += 1
	}
	return count, nil
}
