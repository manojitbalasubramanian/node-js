//import { createServer } from 'http';
import http from 'http';
const PORT = process.env.PORT;

const server = http.createServer((req,res) => {
    if(req.url==='/'){
        res.writeHead(200,{'Content-Type':'text/html'})
        res.end('<h1>Home page</h1>');
    }
    else if(req.url==='/a'){
        res.writeHead(200,{'Content-Type':'text/html'})
        res.end('<h1>About</h1>');
    }
    else{
        res.writeHead(404,{'Content-Type':'text/html'})
        res.end('<h1>Page not found</h1>');
    }

    //res.setHeader('Content-Type','text/html')
   // res.write('<h1>Hello World!!</h1>');
    //res.statusCode=404;

    
    //res.end(JSON.stringify({error:"505"}));

    //res.end('<h1>Hello World!!</h1>');
});//.listen(PORT);

server.listen(PORT,()=>{
    console.log(`Server is running on port : ${PORT}`)
});