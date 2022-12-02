import cv2
import numpy as np
from PIL import Image
import os

#BD de imagem
path = 'C:\\Guilherme\\Projects\\FaceRec\\v0.5\\dataset'

recognizer = cv2.face.LBPHFaceRecognizer_create()
detector = cv2.CascadeClassifier("C:\\Guilherme\\Projects\\FaceRec\\v0.5\\haarcascade_frontalface_default.xml")

#pegar imgs e label
def getImagesAndLabels(path):
    imagePaths = [os.path.join(path,f) for f in os.listdir(path)]
    faceSamples=[]
    ids = []
    for imagePath in imagePaths:
        PIL_img = Image.open(imagePath).convert('L') #converte pra cinza
        img_numpy = np.array(PIL_img,'uint8')
        id = int(os.path.split(imagePath)[1].split(".")[1])
        faces = detector.detectMultiScale(img_numpy)
        for (x,y,w,h) in faces:
            faceSamples.append(img_numpy[y:y+h,x:x+w])
            ids.append(id)
    return faceSamples,ids

print ("\n [INFO] Training faces. It will take a few seconds. Wait...")
faces,ids = getImagesAndLabels(path)
recognizer.train(faces, np.array(ids))

#salvar modelo em trainer.yml
recognizer.write('C:\Guilherme\Projects\FaceRec\\v0.5\\trainer/trainer.yml')

#print nomero de rostos treinados
print("\n [INFO] {0} faces trained. Exiting program".format(len(np.unique(ids))))