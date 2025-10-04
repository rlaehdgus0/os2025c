person = int(input("인원 :"))
pizza = int(input("피자 수량 (판):"))
pizza_slice = int(input("피자 조각 (판당):"))
all_slice = pizza*pizza_slice
print(f"결과 : 인당 {all_slice//person}조각, 남은 조각 {all_slice%person}조각")
