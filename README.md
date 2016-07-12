When loading a QImage that was created with the format RGB32 and saved on the disk, the format might not be the one expected. 

Test results:
Linux Qt4.8.6: QImage::Format_ARGB32 (=5) instead of QImage::Format_RGB32 (=4)

