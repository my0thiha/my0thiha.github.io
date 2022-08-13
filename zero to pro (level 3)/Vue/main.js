// const app = Vue.createApp({
//     data() {
//         return {
//             message: '<h3 style="color:red;">Hello Vue</h3>',
//             name: 'Mg Mg',
//             age: 26,
//             photo: "product6.jpg",
//             seen: true,
//             colors: ['red','green','blue'],
//             students:[
//                 {name:'Mg Mg',age:22, gender:'male'},
//                 {name: 'Su Su',age:23, gender:'female'},
//                 {name: 'Bo Bo',age:20, gender: 'male'},
//             ],
//             count: 1,
//             username: '',
//             test:'',
//         }
//     },
//     methods:{
//         openalert(msg){
//             alert(msg)
//         }
//     }
// });

const app2 = Vue.createApp({
    data(){
        return{
            title:"BMI Calculator",
            ft:'',
            inch:'',
            weight:'',
            solution:0,
        }
    },
    methods:{
        calculate(){
            var height = (this.ft*12)+(this.inch);
            var weight = parseInt(this.weight);
            this.solution = (weight/(height*height))*703;
            var solution = this.solution;
        }
    }
    
})