////#pragma once
//#include <SFML/Graphics.hpp>
//
//const int SIZE = 4;                        // Размер игрового поля в плашках
//const int ARRAY_SIZE = SIZE * SIZE;        // Размер массива
//const int FIELD_SIZE = 500;                // Размер игрового поля в пикселях
//const int CELL_SIZE = 120;                // Размер плашки в пикселях
//
//enum class Direction { Left = 0, Right = 1, Up = 2, Down = 3 };
//
//class Game : public sf::Drawable, public sf::Transformable
//{
//protected:
//    int elements[ARRAY_SIZE];
//    int empty_index;
//    bool solved;
//    sf::Font font;
//public:
//    Game();
//    void Init();
//    bool Check();
//    void Move(Direction direction);
//public:
//    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
//};
//Game::Game()
//{
//    // Подгружаем шрифт для отрисовки элементов
//    font.loadFromFile("/Users/daniil/Desktop/Arial.ttf");
//    Init();
//}
//
//void Game::Init()
//{
//    // Заполняем массив плашек
//    for (int i = 0; i < ARRAY_SIZE - 1; i++) elements[i] = i+1;
//    // Ставим пустую плашку в правую нижнюю позицию
//    empty_index = ARRAY_SIZE - 1;
//    elements[empty_index] = 0;    // Пустая плашка имеет значение = 0
//    solved = true;
//}
//
//bool Game::Check()
//{
//    // Проверка собранности головоломки
//    for (unsigned int i = 0; i < ARRAY_SIZE; i++)
//    {
//        if (elements[i] > 0 && elements[i] != i + 1) return false;
//    }
//    return true;
//}
//
//void Game::Move(Direction direction)
//{
//    // Вычисляем строку и колонку пустой плашки
//    int col = empty_index % SIZE;
//    int row = empty_index / SIZE;
//
//    // Проверка на возможность перемещения и вычисление индекса перемещаемой плашки
//    int move_index = -1;
//    if (direction == Direction::Left && col < (SIZE - 1)) move_index = empty_index + 1;
//    if (direction == Direction::Right && col > 0) move_index = empty_index - 1;
//    if (direction == Direction::Up && row < (SIZE - 1)) move_index = empty_index + SIZE;
//    if (direction == Direction::Down && row > 0) move_index = empty_index - SIZE;
//
//    // Перемещение плашки на место пустой
//    if (empty_index >= 0 && move_index >= 0)
//    {
//        int tmp = elements[empty_index];
//        elements[empty_index] = elements[move_index];
//        elements[move_index] = tmp;
//        empty_index = move_index;
//    }
//    solved = Check();
//}
//
//void Game::draw(sf::RenderTarget& target, sf::RenderStates states) const
//{
//    states.transform *= getTransform();
//    sf::Color color = sf::Color(200, 100, 200);
//
//    // Рисуем рамку игрового поля
//    sf::RectangleShape shape(sf::Vector2f(FIELD_SIZE, FIELD_SIZE));
//    shape.setOutlineThickness(2.f);
//    shape.setOutlineColor(color);
//    shape.setFillColor(sf::Color::Transparent);
//    target.draw(shape, states);
//
//    // Подготавливаем рамку для отрисовки всех плашек
//    shape.setSize(sf::Vector2f(CELL_SIZE - 2, CELL_SIZE - 2));
//    shape.setOutlineThickness(2.f);
//    shape.setOutlineColor(color);
//    shape.setFillColor(sf::Color::Transparent);
//
//    // Подготавливаем текстовую заготовку для отрисовки номеров плашек
//    sf::Text text("", font, 52);
//
//    for (unsigned int i = 0; i < ARRAY_SIZE; i++)
//    {
//        shape.setOutlineColor(color);
//        text.setFillColor(color);
//        text.setString(std::to_string(elements[i]));
//        if (solved)
//        {
//            // Решенную головоломку выделяем другим цветом
//            shape.setOutlineColor(sf::Color::Cyan);
//            text.setFillColor(sf::Color::Cyan);
//        }
//        else if (elements[i] == i + 1)
//        {
//            // Номера плашек на своих местах выделяем цветом
//            text.setFillColor(sf::Color::Green);
//        }
//
//        // Рисуем все плашки, кроме пустой
//        if (elements[i] > 0)
//        {
//            // Вычисление позиции плашки для отрисовки
//            sf::Vector2f position(i % SIZE * CELL_SIZE + 10.f, i / SIZE * CELL_SIZE + 10.f);
//            shape.setPosition(position);
//            // Позицию текста подбирал вручную
//            text.setPosition(position.x + 30.f + (elements[i] < 10 ? 15.f : 0.f), position.y + 25.f);
//            target.draw(shape, states);
//            target.draw(text, states);
//        }
//    }
//}
//
//int main()
//{
//    // Создаем окно размером 600 на 600 и частотой обновления 60 кадров в секунду
//    sf::RenderWindow window(sf::VideoMode(600, 600), "15");
//    window.setFramerateLimit(60);
//
//    sf::Font font;
//    font.loadFromFile("/Users/daniil/Desktop/Arial.ttf");
//
//    // Текст с обозначением клавиш
//    sf::Text text("F2 - New Game / Esc - Exit / Arrow Keys - Move Tile", font, 20);
//    text.setFillColor(sf::Color::Cyan);
//    text.setPosition(5.f, 5.f);
//
//    // Создаем объект игры
//    Game game;
//    game.setPosition(50.f, 50.f);
//
//    sf::Event event;
//    int move_counter = 0;    // Счетчик случайных ходов для перемешивания головоломки
//    while (window.isOpen())
//    {
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed) window.close();
//            if (event.type == sf::Event::KeyPressed)
//            {
//                // Получаем нажатую клавишу - выполняем соответствующее действие
//                if (event.key.code == sf::Keyboard::Escape) window.close();
//                if (event.key.code == sf::Keyboard::Left) game.Move(Direction::Left);
//                if (event.key.code == sf::Keyboard::Right) game.Move(Direction::Right);
//                if (event.key.code == sf::Keyboard::Up) game.Move(Direction::Up);
//                if (event.key.code == sf::Keyboard::Down) game.Move(Direction::Down);
//                // Новая игра
//                if (event.key.code == sf::Keyboard::F2)
//                {
//                    game.Init();
//                    move_counter = 100;
//                }
//            }
//        }
//
//        // Если счетчик ходов больше нуля, продолжаем перемешивать головоломку
//        if (move_counter-- > 0) game.Move((Direction)(rand() % 4));
//
//        // Выполняем необходимые действия по отрисовке
//        window.clear();
//        window.draw(game);
//        window.draw(text);
//        window.display();
//    }
//
//    return 0;
//}
//
//
///*Вначале подгружаем шрифт и создаем объект Text для вывода на экран строки текста с назначенем клавиш. Далее создаем наш объект игры и устанавливаем позицию поля в точку с координатами (50,50) — так мы делаем отступ от края окна.
//
//Управление игрой я решил делать через клавиатуру, так что на каждое нажатие клавиш стрелок вызываем у объекта игры метод Move — для перемещения плашки в соответствующем направлении.
//
//Нажатие клавиши F2 — это начало новой игры, так что в обработчике этого события заново инициализируем игру (что приведет к расстановке плашек по своим местам), а также выставляем значение счетчика ходов равным 100. Этот счетчик используется дальше для выполнения ходов в случайных направлениях, пока не обнулится, а плашки не перемешаются. Таким образом мы точно получим решаемое состояние головоломки.
//
//Вот в общем-то и все, компилируем, собираем, запускаем:
//
// 
//
//В этой статье я показал, как можно быстро создать простую игру на C++ с использованием библиотеки SFML. Однако архитектура самой программы далека от идеала. В следующей статье мы попробуем с этим что-нибудь сделать.
//Теги:
//c++
//sfml
//gamedev
//логические игры
//
//Реклама*/
