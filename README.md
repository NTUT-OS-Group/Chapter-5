# Documentation

使用 `make` 工具來編譯並生成執行檔：

- `make fcfs` 生成 `fcfs` 執行檔
- `make sjf` 生成 `sjf` 執行檔
- `make rr` 生成 `rr` 執行檔
- `make priority` 生成 `priority` 執行檔
- `make priority_rr` 生成 `priority_rr` 執行檔

---

# Example
## Input File (`input.txt`):
```plaintext
P1, 2, 2
P2, 5, 6
P3, 0, 4
P4, 0, 7
P5, 7, 4
P6, 10, 40
```

執行 `make fcfs` 來編譯並運行 `fcfs` 排程演算法：

```bash
make fcfs
./fcfs input.txt
```

### Output:
```plaintext
Adding task: P1, Priority: 2, Burst: 2
Adding task: P2, Priority: 5, Burst: 6
Adding task: P3, Priority: 0, Burst: 4
Adding task: P4, Priority: 0, Burst: 7
Adding task: P5, Priority: 7, Burst: 4
Adding task: P6, Priority: 10, Burst: 40
Running task = [P1] [2] [2] for 2 units.
Running task = [P2] [5] [6] for 6 units.
Running task = [P3] [0] [4] for 4 units.
Running task = [P4] [0] [7] for 7 units.
Running task = [P5] [7] [4] for 4 units.
Running task = [P6] [10] [40] for 40 units.
```
![image](https://github.com/user-attachments/assets/868fb299-8b89-44a9-a89d-078a2d92cc61)
![image](https://github.com/user-attachments/assets/b382e001-10bd-4ef4-b653-54595f7e03e0)
![image](https://github.com/user-attachments/assets/c0f8ef6c-f717-454f-806c-544dcac1be10)
![image](https://github.com/user-attachments/assets/72d1fb78-2a63-4496-b8c3-1029389b823e)
![image](https://github.com/user-attachments/assets/8a3c8b49-2076-416e-9059-96af51adc90f)



