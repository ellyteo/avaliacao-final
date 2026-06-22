#include <iostream>
#include <string>
using namespace std;

const int maxAlunos = 20;

string nomes[maxAlunos];
int matriculas[maxAlunos];
int totalAlunos = 0;

void adicionarAluno();
void removerAluno();
void atualizarAluno();
void buscarAluno();
void listarAlunos();
void exibirAluno();
bool matriculaExistente(int matricula);
int buscarAlunoMatricula(int matricula);

bool matriculaExistente(int matricula) {
	for(int i = 0; i < totalAlunos; i++) {
		if(matriculas[i] == matricula) {
			return true;
		}
	}
	return false;
}

int buscarAlunoMatricula(int matricula){
	for(int i = 0; i < totalAlunos; i++) {
		if(matriculas[i] == matricula){
			return i;
		}
	}
	return -1;
}

void adicionarAluno() {
	if(totalAlunos >= maxAlunos) {
		cout << "Erro: Todas vagas preenchidas, nao e possivel cadastrar mais um aluno!" << endl;
		return;
}
	int matricula;
	cout << "------Adicionar Aluno------" << endl;
	cout << "Matricula: ";
	cin >> matricula;
	
	if(matriculaExistente(matricula)) {
		cout << "Matricula ja cadastrada!" << endl;
		return;
	}
	
	matriculas[totalAlunos] = matricula;
	
	cout << "Nome: ";
	cin >> nomes[totalAlunos];
	
	totalAlunos++;
	cout << "Aluno cadastrado!" << endl;
	
}

void removerAluno() {
	if(totalAlunos == 0) {
		cout << "Nenhum aluno registrado!" << endl;
		return;
	}
	
	int matricula;
	cout << "------Remover Aluno------" << endl;
	cout << "Matricula do Aluno: ";
	cin >> matricula;
	
	int posicao = buscarAlunoMatricula(matricula);
	
	if(posicao == -1) {
		cout << "Aluno não encontrado!" << endl;
		return;
	}
		for(int i = posicao; i < totalAlunos - 1 ; i++) {
			matriculas[i] = matriculas[i + 1];
			nomes[i] = nomes[i + 1];
		}
		
		totalAlunos--;
		cout << "Aluno removido!" << endl;
		return;
	
}

	void atualizarAluno() {
		if(totalAlunos == 0) {
			cout << "Nenhum aluno registrado!" << endl;
			return;
	}
	
	int matricula;
	cout << "------Atualizar Aluno------" << endl;
	cout << "Matricula do Aluno: ";
	cin >> matricula;
	
	int posicao = buscarAlunoMatricula(matricula);
	
	if(posicao == -1) {
		cout << "Aluno não encontrado!" << endl;
		return;
	}
	
	cout << "Novo nome (" << nomes[posicao] << "):";
	cin >> nomes[posicao];
	
	cout << "Aluno atualizado!" << endl;
	
}

void buscarAluno() {
	if(totalAlunos == 0) {
		cout << "Aluno não encontrado!" << endl;
		return;
	}
	
	int codigo;
	cout << "------Buscar Aluno------" << endl;
	cout << "Matricula do Aluno: ";
	cin >> codigo;
	
	int posicao = buscarAlunoMatricula(codigo);
	
	if(posicao == -1) {
		cout << "Aluno não encontrado!" << endl;
		return;
	}
	
	cout << "Aluno Encontrado: " << endl;
	cout << "Matricula: " << matriculas[posicao] << endl;
	cout << "Nome: " << nomes[posicao] << endl;
}

void listarAlunos() {
	if(totalAlunos == 0) {
		cout << "Nenhum aluno registrado!" << endl;
		return;
	}
	
	cout << "------Lista de Alunos------" << endl;
	for(int i = 0; i < totalAlunos; i++){
		cout << "Matricula: " << matriculas[i]
			<< " Nome: " << nomes[i] << endl;
	}
}
	
	void exibirMenu() {
		cout << "--> Academia seu sofrimento nossa alegria <--" << endl;
		cout << "______Menu______" << endl;
		cout << "1. Adicionar Aluno" << endl;
		cout << "2. Remover Aluno" << endl;
		cout << "3. Atualizar Aluno" << endl;
		cout << "4. Buscar Aluno" << endl;
		cout << "5. Listar Alunos" << endl;
		cout << "0. Sair" << endl;
		cout << "Opcao: ";
	}
	
	int main() {
		int opcao = -1;
		
		while(opcao != 0){
			exibirMenu();
			cin >> opcao;
			
			if(opcao == 1) {
				adicionarAluno();
			} else if (opcao == 2) {
				removerAluno();
			} else if (opcao == 3) {
				atualizarAluno();
			} else if (opcao == 4) {
				buscarAluno();
			} else if (opcao == 5) {
				listarAlunos();
			} else if (opcao == 0) {
				cout << "Saindo.." << endl;
			} else {
				cout << "Opcao invalida!" << endl;
			}
		}
		
		return 0;
	}