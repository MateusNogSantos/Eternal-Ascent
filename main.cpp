#include <GL/freeglut.h>
using namespace std;

void display(){

    //Função que limpa os ruidos anteriores restantes do bits,para evitar a tela ficar piscando.
    glClear(GL_COLOR_BUFFER_BIT);

    glFlush();
}
// TESTE BRUNO
int main(int argc,char** argv){

    //Inicializa a lib com os argumentos recebidos pela função
    glutInit(&argc, argv);

    //Cria a janela e define o nome.
    glutCreateWindow("Eternal Ascent");

    //Define o tamanho e a posição da janela inicial.
    glutInitWindowSize(3000,3000);
    glutInitWindowPosition(0,0);

    //Chama a função de exibição e faz o programa rodar em looping.
    glutDisplayFunc(display);
    glutMainLoop();

}