import logo from './logo.svg';
import './App.css';
import Home from './Home'
import Login from './Login'
import Register from './Register'
import List from './Userlist'

import {
  Routes,
  Route
} from "react-router-dom";

function App() {
  return (
    <>
      <Routes>
          <Route path="/" element={<Home/>}/>
          <Route path="/login" element={<Login/>}/>
          <Route path="/register" element={<Register/>}/>
          <Route path="/list" element={<List/>} />
        </Routes>
      </>
  );
}

export default App;