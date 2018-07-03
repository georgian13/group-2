class Block extends React.Component {
    render() {
        return ( 
        <div>
            <h3 > { this.props.name } </h3>  
            <p> { this.props.text } </p> 
        </div >
        );
    }
}
const example = document.getElementById("add");
ReactDOM.render( 
    <Block name = "What is Lorem Ipsum?"
    text = "Lorem Ipsum is simply" /> , example);


class Task extends React.Component {
    constructor(props) {
        super(props);
        this.state = {
          edit: false,
          text: props.text
        };
    };
    edit = () => {
        this.setState({edit:true})
    }
    remove = () => {
        this.props.deleteBl(this.props.index);
    }
    save = () => {
        this.setState ({edit: false, text:this.refs.newTxt.value});
      //  this.props.updateBl(this.state.text, this.props.index);

      };
    rendNorm = () =>  {
        return (
            <div>
              <div>{this.state.text}</div>
              <button onClick={this.edit} className="btn">Edit</button>
              <button onClick={this.remove} className="btn">Delete</button>
            </div>
          );
        
    }
    rendEdit = () =>  {
        return (
            <div>
              <textarea ref="newTxt" defaultValue ={this.state.text} ></textarea>
              <button onClick={this.save} className="btn">Save</button>
            </div>
          );
    }
    render() {
        if (this.state.edit) {
            return this.rendEdit();
        } else {
            return this.rendNorm();
        }   
    };
};
class Field extends React.Component {
    constructor(props) {
        super(props);
        this.state = {
            tasks: [
                'Text area 1!',
                'Text area 2!',
                'Text area 3!'
            ]
        };
    };
    deleteBlock = (i) => {
        var arr = this.state.tasks;
        arr.slice (i,1);
        this.setState({tasks:arr});
    }
    updateBlock = (text, i) => {
       var arr = this.state.tasks;
       arr[i] = text;
       this.setState({tasks:arr});
    }
    eachTask = (value,i) => {
        return ( <Task text={value} key={i} index={i} updateBl={this.updateBlock} deleteBl ={this.deleteBlock}/> );
    };
    render() {
        return (
            <div className="field">
                {this.state.tasks.map (this.eachTask)}
            </div>
        );
    }
}
const but = document.getElementById("model");
ReactDOM.render (
    <Field/>       
    ,but 
);

class Check extends React.Component {
    constructor(props) {
        super(props);
        this.state = {
          checked: true,
        };
    };
    handleCheck = () =>  {
        this.setState({checked: !this.state.checked})
    };
    render() {
        var message;
        if(this.state.checked) {
            message = "checked";
        } else {
            message = "no checked";
        }
        return (
            <div>
                <input type="checkbox" onChange = { this.handleCheck} defaultChecked= { this.state.checked } />
                <p>CheckBox is {message}</p>
            </div>
        )
    }
};
const st = document.getElementById("che");
ReactDOM.render (
    <Check/>,
    st
);