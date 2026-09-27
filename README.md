# Smart Irrigation System and Plant Health Monitoring Using Machine Learning

## 📌 Project Overview

This project presents a smart agriculture system that combines automated irrigation with machine-learning-based plant disease detection.

The system monitors soil moisture and controls water flow according to the moisture level. At the same time, potato leaf images are processed using machine learning techniques to identify plant health conditions.

The project combines hardware-based irrigation automation with machine-learning-based plant health monitoring.

---

## 🎯 Objectives

- Monitor soil moisture in real time.
- Automatically control irrigation based on soil moisture.
- Detect potato leaf diseases using machine learning.
- Classify potato leaves into healthy, early blight, and late blight categories.
- Reduce unnecessary water usage.
- Reduce manual monitoring of plant health.

---

## ⚙️ Technologies Used

### Hardware

- Arduino UNO
- Soil Moisture Sensor
- RGB LEDs
- Relay Module
- 5V DC Water Pump
- Breadboard
- USB Cable

### Software / Machine Learning

- Python
- Machine Learning
- K-Nearest Neighbors (KNN)
- Random Forest
- Support Vector Machine (SVM)
- Convolutional Neural Network (CNN)
- Image Preprocessing
- PCA
- t-SNE

---

## 🔬 Working Principle

The system consists of two major modules:

### 1. Smart Irrigation

The soil moisture sensor continuously monitors the moisture level of the soil.

Depending on the detected moisture condition, the Arduino controls the water pump through a relay.

The RGB LED provides a visual indication of the soil condition:

- 🔴 Red – Dry soil
- 🔵 Blue – Moderate/optimal moisture
- 🟢 Green – Adequate moisture

### 2. Plant Disease Detection

Potato leaf images are collected and preprocessed before being used for machine learning.

The images are resized, normalized, and augmented before classification.

Machine learning models including KNN, Random Forest, and SVM are evaluated for disease classification.

The system considers:

- Healthy leaves
- Potato Early Blight
- Potato Late Blight

---

## 🧠 Machine Learning

The project evaluates multiple machine learning models:

- K-Nearest Neighbors (KNN)
- Random Forest
- Support Vector Machine (SVM)

The reported results show an accuracy of 99% for the SVM model.

PCA and t-SNE visualizations are also used to analyze the feature distribution.

---

## 📊 Results

The machine-learning evaluation reported the following accuracy values:

| Model | Accuracy |
|---|---:|
| KNN | 92% |
| Random Forest | 93% |
| SVM | 99% |

The project also demonstrates automated irrigation under different soil moisture conditions.

---

## 🌱 Applications

- Smart agriculture
- Automated irrigation
- Plant health monitoring
- Crop disease detection
- Precision agriculture
- Water resource management

---

## 🔮 Future Scope

Possible future improvements include:

- Training the model using larger datasets.
- Supporting more plant species and diseases.
- Integrating cloud-based monitoring.
- Developing a mobile application.
- Integrating weather forecasting.
- Improving the disease detection model using advanced deep-learning techniques.

---

## 📄 Project Report

The complete project report is available here:

[Download Project Report](./Smart-Irrigation-Project-Report.pdf)

---

## 👩‍💻 Author

**Nagisetti Geetha Sree**

Vellore Institute of Technology  
School of Electronics Engineering

**Registration Number:** 23BEC0419

---

## 👨‍🏫 Guide

**Dr. S. Sundar**

School of Electronics Engineering  
Vellore Institute of Technology
