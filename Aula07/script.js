document.addEventListener("DOMContentLoaded", function() {

const toggleButton = document.getElementById('toggle-theme');
const body = document.body;
const taskInput = document.getElementById('task-input');
const addTaskButton = document.getElementById('add-task');
const taskList = document.getElementById('task-list');
const buttonIcon = document.getElementById('theme-icon');
const filter = document.querySelectorAll(".filter"); // array dos 3 botões

// LocalStorage - Dados Salvos no navegador
let tasks = JSON.parse(localStorage.getItem("tasks")) || [];
let theme = localStorage.getItem("theme") || "dark";

if (theme === "dark"){
    document.body.classList.add("dark");
}

toggleButton.addEventListener("click", function(){
    document.body.classList.toggle("dark-mode");
    if (document.body.classList.contains("dark")){
        theme = "dark";
    }else {
        theme = "light-mode";
    }
    localStorage.setItem("theme", theme)
})

function saveTasks(){
    localStorage.setItem("tasks", JSON.stringify(tasks));
}

    // função para mostrar as tarefas na tela
    function renderTask(filter){
        if (filter === undefined) filter = "all";
        taskList.innerHTML = "";

        tasks.forEach(function (task, index){
            if (filter === "pending" && task.completed) return;
            if (filter === "completed" && !task.completed) return;

            const li = document.createElement("li");

            if (task.completed === true){
                li.className = "completed";
            }else {
                li.className = "";
            }
            
            li.innerHTML = `
                <span class="task-text">${task.text}</span>
                <button class="edit"><img class="btnTask edit">🖋</button>
                <button class="delete"><img class="btnTask delete" >🪓</button>
            `;

            li.addEventListener("click", function(e){
                if (e.target.classList.contains("delete")){
                    tasks.splice(index, 1)
                } else if (e.target.classList.contains("edit")){
                    const newText = prompt("Editar tarefa:", task.text)
                    if (newText) tasks[index].text = newText;
                } else {
                    if(tasks[index].completed === true){
                        tasks[index].completed = false;
                    } else {
                        tasks[index].completed = true;
                    }
                }
                saveTasks();
                renderTask(filter);
            });

            taskList.appendChild(li);

        });

    };

    addTaskButton.addEventListener("click", function(){
        const text = taskInput.value.trim(); // remove os espaços em branco
        if (text) {
            tasks.push({text: text, complated: false });
            saveTasks();
            renderTask(); //atualiza a lista
            taskInput.value = "";
        }
     });

     filters.forEach(function(button) {
            button.addEventListener("click", function(){
                filter.forEach(function(btn){
                    btn.classList.remove("active");
                });
                button.classList.add("active");
                renderTask(button.dataset.filter);
            });
     });


     renderTask();

});