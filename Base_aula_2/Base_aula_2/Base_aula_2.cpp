#include <windows.h>
#include <gl/gl.h>
#include <gl/glut.h>

void DesenhaCena() {
	// Limpa a janela com a cor especificada como cor de fundo
	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
}

// Inicializa aspectos do rendering
void Inicio() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // cor de fundo da janela
}

int main(int argc, char** argv) {
	// Inicializa a GLUT
	glutInit(&argc, argv);
	// Indica que deve ser usado um unico buffer para armazenamento da imagem e
	//representacao de cores RGB
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	// Determina tamanho da janela
	glutInitWindowSize(800, 600);
	// Cria uma janela com o titulo especificado
	glutCreateWindow("Selcao de Objetos");
	// Especifica para a OpenGL que funcao deve ser chamada para geracao da imagem
	glutDisplayFunc(DesenhaCena);
	// Executa a inicializacao de parametros de exibicao
	Inicio();
	// Dispara a "maquina de estados" de OpenGL
	glutMainLoop();
}