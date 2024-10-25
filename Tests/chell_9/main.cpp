    /*if(human_years > dog_years){
        int count_1 = 0, count_2 = 0;
        if(dog_years >= 1){
           return count_1 + 15;
        } 
        if(dog_years >= 2) {
            return count_2 + 9;
        }
        for(int dog_years_count = 0; dog_years_count < human_years; dog_years_count++){
            dog_years += 5;
        }
        return dog_years+count_1+count_2;
    }*/


/*
   for(int i = 0; i < human_years; i++){
    while(dog_years >= 1){
        return dog_years + 15;
    }
    while(dog_years >= 2){
          return dog_years + 9;
    }
    dog_years+=5;
    return dog_years;
   }*/
  /* переписать, что бы была одна функция и использовать:
Напишите две функции: для возраста котика и возраста собаки
Можно в функции сделать параметр дополнительный, по которому определять, возраст кого считает
Например enum animal_ages {CATS, DOGS};
int calc_age(int human_age, animal_ages animal = CATS);
*/