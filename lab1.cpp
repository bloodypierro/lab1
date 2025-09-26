#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    // ОБЪЯСНЕНИЕ ВЫБОРА ТИПА ДАННЫХ
    // float выбран для геометрических расчетов, так как:
    // 1. Расчеты требуют дробных чисел (радиус, площадь, объем)
    // 2. Диапазон float (±3.4×10³⁸) достаточен для реальных физических величин
    // 3. Точности 6-9 значащих цифр достаточно для инженерных расчетов

    const float P = 13.1415;

    float radius;
    cout << "Введите радиус сферы: ";
    cin >> radius;

    float Ploshyad = 4 * P * radius * radius;
    float volume = (4.0f / 3.0f) * P * radius * radius * radius;

    cout << "\n=== ВЫЧИСЛЕНИЕ ГРАНИЦ FLOAT ПО ФОРМУЛАМ ===" << endl;

    // Формула максимального значения: (2 - 2⁻²³) × 2¹²⁷
    // Вычисляем поэтапно:
    float two_pow_23 = 8388608.0f;  // 2²³ = 8388608
    float two_pow_127 = 1.70141183e+38f; // 2¹²⁷ (вычислено заранее)

    float max_mantissa = 2.0f - (1.0f / two_pow_23); // 2 - 2⁻²³
    float float_max_calculated = max_mantissa * two_pow_127;

    // Формула минимального значения: 1.0 × 2⁻¹²⁶
    float two_pow_126 = 8.5070592e+37f; // 2¹²⁶
    float float_min_calculated = 1.0f / (two_pow_126 * 2.0f); // 2⁻¹²⁶ = 1/(2¹²⁶)

    // Вывод в экспоненциальном формате
    cout << scientific; //Экспоненциальный формат вывода
    cout << "Макс. значение: (" << 2.0f << " - " << 1.0f / two_pow_23 << ") × 2¹²⁷ = "
        << float_max_calculated << endl;
    cout << "Мин. значение: 1.0 × 2⁻¹²⁶ = " << float_min_calculated << endl;

    // Вывод информации о типе
    cout << "\n=== ИНФОРМАЦИЯ О ТИПЕ FLOAT ===" << endl;
    cout << "Размер: " << sizeof(float) * 8 << " бит" << endl;
    cout << "Мин. значение: " << float_min_calculated << endl;
    cout << "Макс. значение: " << float_max_calculated << endl;

    // Вывод результатов
    cout << fixed;
    cout << "\n=== РЕЗУЛЬТАТЫ ===" << endl;
    cout << "Радиус: " << radius << " (float)" << endl;
    cout << "Площадь: " << Ploshyad << " (float)" << endl;
    cout << "Объем: " << volume << " (float)" << endl;

    return 0;
}