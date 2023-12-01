import logo from './logo.svg';
import './App.css';
import 'bootstrap/dist/css/bootstrap.css'; 
import 'bootstrap/dist/js/bootstrap.bundle.js';

function App() {
  return (
<>
<div className='container'>
  <div className='card'>
    <div className='card-heading bg-info'>
      Student Management
</div>
<div className='card-body'>
  <table className='table table-bordered'>
    <theader>
      <tr>
        <th>No</th>
        <th>Full Name</th>
        <th>Age</th>
        <th>Address</th>
        <th>Email</th>
      </tr>
    </theader>
    <tbody>

    </tbody>
  </table>

</div>
  </div>

</div>
</>
  );
}

export default App;
