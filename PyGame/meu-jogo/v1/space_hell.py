import sys
import time

import pygame

def game_init(w, h):
    pygame.init()
    size = w, h
    display = pygame.display.set_mode(size)
    pygame.display.set_caption("Space Hell")
    return display

#Personagem
def draw_player(ship, ship_rect, display):
    ship_copy = ship.copy()
    display.blit(ship_copy, ship_rect)

def draw_boss(boss, boss_rect, display):
    boss_copy = boss.copy()
    display.blit(boss_copy, boss_rect)

#Disparos
def create_shot(x, y):
    shot = {'rect': pygame.Rect(x, y, 10, 10), 'color': (0,255,0,0)}
    shots.append(shot)

def update_shots():
    for shot in shots:
        shot['rect'].y -= shot_speed

def draw_shots():
    for shot in shots:
        pygame.draw.rect(display, shot['color'], shot['rect'])

def create_boss_shot(x, y):
    bshot = {'rect': pygame.Rect(x, y, 10, 10), 'color': (255,0,0,0)}
    shots.append(bshot)

def update_boss_shots():
    for bshot in boss_shots:
        bshot['rect'].y -= boss_shot_speed

def draw_boss_shots():
    for bshot in boss_shots:
        pygame.draw.rect(display, bshot['color'], bshot['rect'])



#Colisão
def collision_ship(ship_rect, boss_rect):
    if ship_rect.colliderect(boss_rect):
        pygame.QUIT()

def collision_boss(boss_rect, ship_rect):
    if boss_rect.colliderect(ship_rect):
        pygame.QUIT()

def collision_bullet():
    global current_health
    for shot in shots:
        if shot['rect'].colliderect(boss_rect):
            current_health -= 10
            shots.remove(shot)

def collision_boss_bullet():
    global current_health2
    for bshot in boss_shots:
        if bshot['rect'].colliderect(ship_rect):
            current_health2 -= 10
            boss_shots.remove(bshot)
#Health Bar
def health_bar():
    health_w = (current_health/ max_health) * health_bar_w
    health_bar_rect = pygame.Rect(health_bar_x, health_bar_y, health_w, health_bar_h)
    pygame.draw.rect(display, health_bar_color, health_bar_rect)

def health_bar2():
    health_w2 = (current_health2/ max_health2) * health_bar_w2
    health_bar_rect2 = pygame.Rect(health_bar_x2, health_bar_y2, health_w2, health_bar_h2)
    pygame.draw.rect(display, health_bar_color2, health_bar_rect2)

#Movimentação
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

display = game_init(800,600)

#Background
background_img = pygame.image.load("Space.jpg")
#Personagens
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
#Barra de Vida
max_health = 100
current_health = 100
health_bar_w = 200
health_bar_h = 10
health_bar_x = 0
health_bar_y = 10
health_bar_color = (0, 255, 0)
max_health2 = 100
current_health2 = 100
health_bar_w2 = 200
health_bar_h2 = 10
health_bar_x2 = 600
health_bar_y2 = 580
health_bar_color2 = (0, 255, 0)
#Disparos
shots = []
shot_speed = 8
boss_shots = []
boss_shot_speed = 8
shot_cooldown = 500
last_shot_time = 0

clock = pygame.time.Clock()
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
    keys = pygame.key.get_pressed()
    if keys[pygame.K_f]:
        current_time = pygame.time.get_ticks()
        if current_time - last_shot_time > shot_cooldown:
            create_shot(ship_rect.x, ship_rect.y)
            last_shot_time = current_time
    if keys[pygame.K_RCTRL]:
        current_time = pygame.time.get_ticks()
        if current_time - last_shot_time > shot_cooldown:
            create_boss_shot(boss_rect.x, boss_rect.y)
            last_shot_time = current_time         

    # player_shoot(keys, ship_rect)
    move_player(keys, ship_rect)
    move_boss(keys, boss_rect)

    

    display.blit(background_img, (0, 0))
    draw_player(ship, ship_rect, display)
    draw_boss(boss, boss_rect, display)
    update_shots()
    draw_shots()
    update_boss_shots()
    draw_boss_shots()    
    health_bar()
    health_bar2()
    collision_ship(ship_rect, boss_rect)
    collision_boss(boss_rect, ship_rect)
    collision_bullet()
    collision_boss_bullet()
    pygame.display.flip()
    clock.tick(60)       
