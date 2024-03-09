def convert_weight(weight_kg):
    weight_g = weight_kg * 1000
    weight_ton = weight_kg / 1000
    weight_lb = weight_kg * 2.20462

    return weight_g, weight_ton, weight_lb

def main():
    weight_kg = float(input("Enter the weight of the commodity in kilograms: "))
    
    weight_g, weight_ton, weight_lb = convert_weight(weight_kg)
    
    print(f"The equivalent weight in grams is: {weight_g} g")
    print(f"The equivalent weight in tons is: {weight_ton} tons")
    print(f"The equivalent weight in pounds is: {weight_lb} lbs")

if __name__ == "__main__":
    main()



# def convert_weight(weight_kg):
#     weight_g = weight_kg * 1000
#     weight_ton = weight_kg / 1000
#     weight_lb = weight_kg * 2.20462

#     return weight_g, weight_ton, weight_lb

# def main():
#     weight_kg = float(input("Enter the weight of the commodity in kilograms: "))
    
#     weight_g, weight_ton, weight_lb = convert_weight(weight_kg)
    
#     print(f"The equivalent weight in grams is: {weight_g:.2f} g")
#     print(f"The equivalent weight in tons is: {weight_ton:.2f} tons")
#     print(f"The equivalent weight in pounds is: {weight_lb:.2f} lbs")

# if __name__== "__main__":
#     main()