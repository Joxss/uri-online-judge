# -*- coding: utf-8 -*-

import math

class banNotes:
    amount = float(input())
    notes = [100,50,20,10,5,2]
    coins = [1.00,0.50,0.25,0.10,0.05,0.01]
    
    print("NOTAS:")
    for notas in notes:
        qtd = int(amount/notas)
        print("{} nota(s) de R$ {:.2f}".format(qtd, notas))
        amount -= qtd*notas
        
    print("MOEDAS:")
    for coin in coins:
        qtd = int(round(amount,2) / coin)
        print("{} moeda(s) de R$ {:.2f}".format(qtd, coin))
        amount -= round(qtd * coin,2)