<!DOCTYPE html>
<html lang="fr">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Responsive Page</title>
    <link rel="stylesheet" href="css/styles.css">
</head>
<body>
    <header>
        <h1>Responsive Page</h1>
    </header>
    <div class="container">
        <section class="section">
            <div class="title">Chicken</div>
            <p>Dummy text for chicken section.</p>
        </section>
        <section class="section">
            <div class="title">Beef</div>
            <p>Dummy text for beef section.</p>
        </section>
        <section class="section">
            <div class="title">Sushi</div>
            <p>Dummy text for sushi section.</p>
        </section>
    </div>
</body>
</html>
/* Global styles */
* {
    box-sizing: border-box;
    margin: 0;
    padding: 0;
}

body {
    font-family: Arial, sans-serif;
}

.container {
    display: flex;
    flex-wrap: wrap;
    justify-content: space-between;
    margin: 20px;
}

.section {
    width: 30%;
    background-color: lightblue; /* Choisir une couleur de fond */
    padding: 20px;
    margin: 10px;
    border: 1px solid black;
    position: relative;
}

/* Titre de la section */
.title {
    position: absolute;
    top: 0;
    right: 0;
    background-color: darkblue; /* Choisir une couleur différente */
    color: white;
    padding: 10px;
    font-size: 1.25em; /* Titre plus grand */
}

/* Styles pour les sections sur mobile */
@media screen and (max-width: 767px) {
    .section {
        width: 100%;
    }
}

/* Styles pour les sections sur tablette */
@media screen and (min-width: 768px) and (max-width: 991px) {
    .section {
        width: 48%;
    }
    .section:nth-child(3) {
        width: 100%;
    }
}

/* Styles pour les sections sur desktop */
@media screen and (min-width: 992px) {
    .section {
        width: 30%;
    }
}



