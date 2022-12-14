import cv2
import numpy as np
import os

recognizer = cv2.face.LBPHFaceRecognizer_create()
recognizer.read('C:\Guilherme\Projects\FaceRec\\v0.5\\trainer/trainer.yml')
cascadePath = "C:\\Guilherme\\Projects\\FaceRec\\v0.5\\haarcascade_frontalface_default.xml"
faceCascade = cv2.CascadeClassifier(cascadePath);

font = cv2.FONT_HERSHEY_SIMPLEX

#iniciar contador IDs

id = 0

#nomes relacionados aos IDs EX: Gui ID: 1
names = ['None', 'Gui', '2', '3', '4', '5']

#Iniciar e começar captura de video
cam = cv2.VideoCapture(0)
cam.set(3,640)
cam.set(4,480)

#Definir janela minima pra reconhecimento de rostos
minW = 0.1*cam.get(3)
minH = 0.1*cam.get(4)

while True:
    ret,img =cam.read()
    img = cv2.flip(img,1) 
    gray = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)

    faces = faceCascade.detectMultiScale(
        gray,
        scaleFactor = 1.2,
        minNeighbors = 5,
        minSize = (int(minW), int(minH)),
        )
    for(x,y,w,h) in faces:
        cv2.rectangle(img, (x,y), (x+w,y+h),(0,255,0),2)
        id,confidence = recognizer.predict(gray[y:y+h,x:x+w])

        #checkar se confiança menor que 100 then "0" é par perfeito
        if (confidence < 100):
            id = names[id]
            confidence = " {0}%".format(round(100 - confidence))
        else:
            id = "unknown"
            confidence = " {0}%".format(round(100-confidence))
        cv2.putText(img, str(id), (x+5,y-5), font, 1, (255,255,0),2)
        cv2.putText(img, str(confidence), (x+5,y+h-5), font, 1, (255,255,0), 1)

    cv2.imshow('camera',img)

    k = cv2.waitKey(10) & 0xFF 
    if k ==27:
        break

print("\n [INFO] Exiting program and Cleanup")
cam.release()
cv2.destroyAllWindows()