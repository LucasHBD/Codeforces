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
    display.blit(ship_copy, ship_rect)

def draw_boss(boss, boss_rect, display):
    boss_copy = boss.copy()
    display.blit(boss_copy, boss_rect)


def create_shot(x, y):
    shot = {'rect': pygame.Rect(x, y, 10, 10), 'color': (0,255,0,0)}
    shots.append(shot)

def update_shots():
    for shot in shots:
        shot['rect'].y -= shot_speed

def draw_shots():
    for shot in shots:
        pygame.draw.rect(display, shot['color'], shot['rect'])

def move_player(keys, ship_rect):
    if keys[pygame.K_d]:
        ship_rect.x += 5
        if ship_rect.right > 800:
            ship_rect.right = 800
    if keys[pygame.K_a]:
        ship_rect.x -= 5
        if ship_rect.left < 0:
            ship_rect.left = 0
    if keys[pygame.K_w]:
        ship_rect.y -= 5
        if ship_rect.top < 0:
            ship_rect.top = 0
    if keys[pygame.K_s]:
        ship_rect.y +=5
        if ship_rect.bottom > 600:
            ship_rect.bottom = 600

def move_boss(keys, boss_rect):
    if keys[pygame.K_RIGHT]:
        boss_rect.x += 5
        if boss_rect.right > 800:
            boss_rect.right = 800
    if keys[pygame.K_LEFT]:
        boss_rect.x -= 5
        if boss_rect.left < 0:
            boss_rect.left = 0
    if keys[pygame.K_UP]:
        boss_rect.y -= 5
        if boss_rect.top < 0:
            boss_rect.top = 0
    if keys[pygame.K_DOWN]:
        boss_rect.y +=5
        if boss_rect.bottom > 600:
            boss_rect.bottom = 600

def player_shoot(keys, ship_rect):
    if keys[pygame.K_f]:
        create_shot(ship_rect.x, ship_rect.y)
    

display = game_init(800,600)

background_img = pygame.image.load("Space.jpg")
ship = pygame.image.load("Nave.bmp")
ship.set_colorkey((255,0,255))
ship_rect = ship.get_rect()
boss = pygame.transform.flip(pygame.image.load("Boss.bmp"), False, True)
boss.set_colorkey((255,0,255))
boss_rect = boss.get_rect()
ship_rect.y = 600-boss_rect.bottom
ship_rect.x = 400
boss_rect.y = 0
boss_rect.x = 400
#health bar
max_health = 100
health = 20
ratio = health/max_health
# pygame.draw.rect(display, "red", (250, 250, 300, 40))
# pygame.draw.rect(display, "green", (250, 250, 300 * ratio, 40))
shots = []
shot_speed = 5


while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
    keys = pygame.key.get_pressed()

    player_shoot(keys, ship_rect)
    move_player(keys, ship_rect)
    move_boss(keys, boss_rect)
    

    display.blit(background_img, (0, 0))
    draw_player(ship, ship_rect, display)
    draw_boss(boss, boss_rect, display)
    update_shots()
    draw_shots()
    # pygame.draw.rect(display, "red", (250, 250, 300, 40))
    # pygame.draw.rect(display, "green", (250, 250, 300 * ratio, 40))
    pygame.display.flip()
    time.sleep(0.015)       
