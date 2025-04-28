const toggleButton = document.getElementById('toggle-theme');
const body = document.body;
const taskInput = document.getElementById('task-input');
const addTaskButton = document.getElementById('add-task');
const taskList = document.getElementById('task-list');
const buttonIcon = document.getElementById('theme-icon');

// Garante que começa no modo escuro
body.classList.add('dark-mode');

function toggleButtonImage() {
    if (body.classList.contains('light-mode')) {
        buttonIcon.textContent = '🌛'; 
    } else {
        buttonIcon.textContent = '🌞'; 
    }
}

toggleButton.addEventListener('click', () => {
    body.classList.toggle('light-mode');
    body.classList.toggle('dark-mode');
    toggleButtonImage();
});
toggleButtonImage();

// Quando clicar no botão "ADICIONAR"
addTaskButton.addEventListener('click', () => {
    const taskText = taskInput.value.trim(); // pega o que o usuário digitou

    if (taskText !== "") { // se não estiver vazio
        const li = document.createElement('li'); // cria uma nova <li>
        li.textContent = taskText; // coloca o texto dentro da <li>

        taskList.appendChild(li); // adiciona a <li> na <ul>
        taskInput.value = ""; // limpa o input depois de adicionar
    }
});