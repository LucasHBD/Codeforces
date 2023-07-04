import sys
import time

import pygame

def game_init(w, h):
    pygame.init()
    size = w, h
    display = pygame.display.set_mode(size)
    pygame.display.set_caption("Space Hell")
    return display

def draw_player(ship, ship_rect, display):
    ship_copy = ship.copy()
    ship_rect = ship_copy.get_rect()
    ship_rect.update((400, 0),(200, 300))
    display.blit(ship_copy, ship_rect)

def draw_boss(boss, boss_rect, display):
    boss_copy = boss.copy()
    boss_rect = boss_copy.get_rect()
    boss_rect.update((400, 600), (400, 300))
    display.blit(boss_copy, boss_rect)

def move_player(keys, ship_rect):
    if keys[pygame.K_d]:
        ship_rect.x += 5
    if keys[pygame.K_a]:
        ship_rect.x -= 5
    if keys[pygame.K_w]:
        ship_rect.y -= 5
    if keys[pygame.K_s]:
        ship_rect.y +=5

display = game_init(800,600)

background_img = pygame.image.load("Space.jpg")
ship = pygame.image.load("Nave.bmp")
ship.set_colorkey((255,0,255))
ship_rect = ship.get_rect()
boss = pygame.transform.flip(pygame.image.load("Nave.bmp"), False, True)
boss.set_colorkey((255,0,255))
boss_rect = boss.get_rect()
ship_rect.y = 0
ship_rect.x = 400
boss_rect.y = 600
boss_rect.x = 400


while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
    keys = pygame.key.get_pressed()

    move_player(keys, ship_rect)

    display.blit(background_img, (0, 0))
    draw_player(ship, ship_rect, display)
    draw_boss(boss, boss_rect, display)
    pygame.display.flip()
    time.sleep(0.015)       