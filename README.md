# Learn HTML for IoT (NodeMCU)

### Basic structure of an HTML document

```html
<!DOCTYPE html>
<html>
<head>
    <title>My IoT Device</title>
    <!-- Meta tags, links to stylesheets, and other head elements go here -->
</head>
<body>
    <!-- Content of the web page goes here -->
</body>
</html>
```

### Common HTML Tags used in NodeMCU:

- `<html>`: Defines the root element of an HTML page.
- `<head>`: Contains meta-information about the HTML document.
- `<body>`: Contains the content of the HTML document, which can be dynamically generated in NodeMCU applications.
- `<h1>`, `<h2>`, `<h3>`, `<h4>`, `<h5>`, `<h6>`: Define different levels of headings.
- `<p>`: Represents a paragraph of text.
- `<a>`: Creates hyperlinks to navigate to other pages or resources.
- `<form>`: Defines an HTML form for user input.
- `<input>`: Represents an input field within a form.
- `<button>`: Creates a clickable button, often used to submit form data.
- `<select>`: Defines a drop-down list.
- `<option>`: Defines an option in a drop-down list.
- `<div>`: A generic container element used for styling or scripting purposes.
- `<span>`: Inline container often used for styling or scripting purposes.
- `<table>`, `<tr>`, `<td>`: Used for creating tables to organize data.

### Common HTML Attributes Used with NodeMCU:

- `id`: Specifies a unique identifier for an HTML element. Useful for JavaScript interactions.
- `class`: Specifies one or more class names for an HTML element. Used for styling with CSS.
- `name`: Specifies a name for an input element. Important when submitting form data.
- `value`: Specifies the initial value for an input element.
- `type`: Specifies the type of an input element (e.g., text, button, checkbox, etc.).
- `action`: Specifies the URL to which the form data will be submitted.
- `method`: Specifies the HTTP method used when submitting the form (usually GET or POST).
- `onchange`, `onclick`, `onsubmit`: Event attributes for specifying JavaScript code to be executed when events occur (e.g., when a button is clicked or a form is submitted).

### What is CSS?

**CSS**, or **Cascading Style Sheets**, is a language used to control the visual presentation of web documents. It allows web developers to define styles for HTML elements, such as colors, fonts, margins, and spacing, separating the document's structure from its design. By applying CSS rules, developers ensure a consistent and appealing layout across different devices and screen sizes. CSS can be included directly in HTML files, linked from external stylesheets, or applied inline, enabling precise control over the appearance of web pages and enhancing the overall user experience.

### Bootstrap and NodeMCU Server

Bootstrap is a widely-used front-end framework for creating responsive websites and web applications. It provides pre-designed components and responsive design tools. While Bootstrap itself doesn't directly connect to NodeMCU, it can be used in NodeMCU projects for creating user interfaces. However, it requires an internet connection to connect to Bootstrap's Content Delivery Network (CDN) for accessing its files, enabling developers to build visually appealing and mobile-friendly interfaces for IoT applications on NodeMCU.
