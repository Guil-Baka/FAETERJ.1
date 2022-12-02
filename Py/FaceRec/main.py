import cv2 as cv
import sys 

cascPath = sys.argv[1]
faceCascade = cv.CascadeClassifier(cascPath)

video_capture = cv.VideoCapture(0)

while True:
  #capture frame por frame
  ret, frame = video_capture.read()

  gray = cv.cvtColor(frame, cv.COLOR_BGR2GRAY)

  faces = faceCascade.detectMultiScale(
    gray,
    scaleFactor=1.1,
    minNeighbors=5,
    minSize=(30,30),
    flags=cv.cv.CV_HAAR_SCALE_IMAGE
  )

  #Desenho retangulo rostos
  for (x, y, w, h) in faces:
    cv.rectangle(frame, (x, y), (x+w, y+h), (0, 255, 0),2)
  
  #Mostra resultado frame
  cv.imshow('Video', frame)

  if cv.waitKey(1) & 0xFF == ord('q'):
      break

#No final soltar captura

video_capture.release()
cv.destroyAllWindows()
