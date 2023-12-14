import tensorflow as tf
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense

# 创建模型
model = Sequential([
    Dense(units=64, activation='relu', input_shape=(10,)),
    Dense(units=10, activation='softmax')
])

# 编译模型
model.compile(optimizer='adam', loss='categorical_crossentropy', metrics=['accuracy'])

# 创建一些示例数据
import numpy as np
data = np.random.random((1000, 10))
labels = np.random.randint(10, size=(1000, 1))

# 将标签转换为独热编码
one_hot_labels = tf.keras.utils.to_categorical(labels, num_classes=10)

# 训练模型
model.fit(data, one_hot_labels, epochs=10, batch_size=32)
