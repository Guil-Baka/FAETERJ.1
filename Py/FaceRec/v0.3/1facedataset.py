import cv2 
import os

cam = cv2.VideoCapture(0)
cam.set(3,640)
cam.set(4,480)

face_detector = cv2.CascadeClassifier("C:\\users\\guilm\\AppData\\Local\\Programs\\Python\\Python38-32\\Lib\\site-packages\\cv2\\data\\haarcascade_frontalface_default.xml")

#por pessoa id numerico unico

face_id = input('\n enter user id and press <enter> ==>  ')

print("\n [INFO] Initializing face capture. Look at the camera and wait ...")

#inicia coleta individual de rosto

count = 0

while (True):
    ret, img = cam.read()
    img = cv2.flip(img, 1)
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    faces = face_detector.detectMultiScale(gray, 1.3, 5)

    for (x,y,w,h) in faces:
        cv2.rectangle(img, (x,y), (x+w, y+h), (255,0,0), 2)
        count += 1

        #salvar em dataset
        cv2.imwrite("C:\\Guilherme\\Projects\\FaceRec\\v0.3\\dataset/user." + str(face_id) + '.' + str(count) + ".jpg", gray[y:y+h,x:x+w])

        cv2.imshow('image',img)

    k = cv2.waitKey(100) & 0xFF 
    if k == 27:
        break
    elif count >= 30: #30 amostras faciais e para o video
        break

print("\n [INFO] Exiting Program and Cleanup")
cam.release()
cv2.destroyAllWindows()