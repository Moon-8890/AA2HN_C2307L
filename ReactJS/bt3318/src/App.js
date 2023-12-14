import logo from './logo.svg';
import './App.css';
import Register from './pages/Register'
import Infor from './pages/Infor'
import {Routes, Route} from "react-router-dom"

function App() {
  return (
    <>
      <Routes>
        <Route path='/register' element={<Register/>}/>
        <Route path='/infor' element={<Infor/>}/>
      </Routes>
    </>
  );
}

export default App;
