////
////  sf.cpp
////  FIrst_Project
////
////  Created by Данил on 25/03/2020.
////  Copyright © 2020 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <thread>
////#include <SFML/Graphics.hpp>
//
//struct funcc{
//    int &i;
//    funcc(int &i_): i(i_) {}
//    void operator() (){
//        for(int j = 0; j < 10000; j++){
//            //do_something(i); потенуиальный доступ к висячей ссылке
//        }
//    }
//};
//
//class thread_guard {//RAII
//    std::thread & t;// state = joinable= false
//public:
//    explicit thread_guard(std::thread & t_) : t(t_) {}
//    ~thread_guard(){
//        if(t.joinable()){// main joinable = false
//            t.join();//while (thread)
//        }
//    }
//    thread_guard(thread_guard const &) = delete;//не генерируй их автоматически
//    thread_guard& operator=(thread_guard const &) = delete;//не генерируй их автоматически};
//};
//
//void f() {
//       int some_local_state = 0;
//       //funcc my_func(some_local_state);//не ждем завершения потока
//       std::thread t((funcc(some_local_state)));
//       thread_guard g(t);//новый поток возможно еще работает
//       //do_something_in_current_thread();
//}
///*void f(){
//       int some_local_state = 0;
//       funcc my_func(some_local_state);//не ждем завершения потока
//       std::thread t(my_func);//новый поток возможно еще работает
//    try{
//        do_comething_in_current_thread();
//    }catch(...){
//        ///t.join();
//        throw;
//    }
//    t.join();
//}*/
//
//void oops() {
//    int some_local_state = 0;
//    funcc my_func(some_local_state);//не ждем завершения потока
//    std::thread my_thread(my_func);//новый поток возможно еще работает
//    
//    //при вызове join ???( вся ассоцированная с потоком память
//    my_thread.join();//joinable() - будет возвращать false
//}
//
//void func()
//{
//    // this function is started when thread.launch() is called
//
//    for (int i = 0; i < 10; ++i)
//        std::cout << "I'm thread number one" << std::endl;
//}
//using namespace std;
//
//class background_task {
//public:
//    void operator() () const {
//        //do_something() ;
//       // do_something_else();
//    }
//};
//
//
//std::thread my_thread_3( [] {
//                            //do_something() ;
//                            // do_something_else();
//});
//
////thread t(do_background_work);
////t.detach();
////assert(!t.joinable());
//
///*
//void edit_document(string const & filename) {
//    open_document_and_display_gui(filename);
//    while(!done_editing()){
//        user_command  cmd =  get_user_input();
//        if(cmd.type == open_new_document){
//            string const new_name = get_filename_from_user();
//            thread t(edit_document, new_name);
//            t.detach();
//        }else{
//            proccess_user_input(cmd);
//        }
//    }
//}
//*/
////void f(int i, string const&s);
////thread t(f, 3, "hello");
///*
//void f(int i, string const & s);
//void oops(int some_param){
//    char buffer[1024];
//    sprinf(buffer, "%i", some_param);
//    thread t(f, 3, string(buffer));
//    t.detach();
//}
//*/
///*
//void update_data_for_widget(widget_id w, widget_data & data);
//
//void oops_again(widget_id w){
//    widget_data data;
//    thread t (update_data_for_widget, w, std::ref(data));
//    display_status();
//    t.join();
//    proccess_widget_data(data);
//}
//*/
///*
//class x{
//    public:
//    void do_long_work();
//};
//X my_x;
//thread t (&x::do_long_work, &my_x);
//*/
////void some_function();
////void some_other_function();
////
////std::thread t1(some_function());
////std::thread t2=std::move(t1);
////
////t1=std::thread(some_other_function());
////std::thread t3;
////
////t3 = std::move(t2);
////t1=std::move(t3);
//
////
//
////
//int main(){
//    background_task f;
//    std::thread my_thread(f); //c++'s most vexing parse
//    //std::thread my_thread_2({background_task()});
//    
//    ////     // create a thread with func() as entry point
//////    sf::Thread thread(&func);
//////       // run it
//////       thread.launch();
//////
//////       // the main thread continues to run...
//////
//////    for (int i = 0; i < 10; ++i){
//////           std::cout << "I'm the main thread" << std::endl;
//////    }
//////    thread.wait();
////    s
//    std::thread thread(func);
//    thread.join();
//    for (int i = 0; i < 10; ++i)
//    std::cout << "I'm thread number two" << std::endl;
//}
