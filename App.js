import React, {useState} from 'react';
import './App.css';


function App() {
  return (
    
    <div className="App">
      {/*Header*/}
      <header className="App-header">
        <p className='App-border-logo'>
        <img src="Logo.png" className="App-logo" alt="logo" />
        </p>
        <p className='App-border-text'>
        Estimated Risk Analyzer
        </p>
      </header>
      {/*Body*/}
      <body className="App-body" >
        <form id ="frm1">
        <div class="savings">
          <p className='App-button'>
          <input type="number" class="savings" id="savingsData" placeholder='Savings Balance'>
          </input>
          </p>
        </div>
        <div class="savings">
        <p className='App-button'>
          <input type="number" class="savings" id="intRate" step=".01" placeholder='Interest Rate'>
          </input>
          </p>
        </div>
        <div class="savings">
        <p className='App-button'>
          <input type="number" class="savings" placeholder='Year(s)'>
          </input>
          </p>
        </div>
        <div class="savings">
        <p className='App-button'>
          <input type="number" class="savings" placeholder='Goal Balance'>
          </input>
        </p>
          <p className='submit'>
          <button type="submit" onClick={"total()"}>Submit</button>
          </p>
          <script>
          </script>
      
         
       
        </div>
        </form>
      </body>
      <hr></hr>
      <p>
        *Work in progress, the general idea of this first section of the webpage was to calculate the interest and how it would affect the user's balance in the future.
      </p>
    </div>
  );
}

export default App;
