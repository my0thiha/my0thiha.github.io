$(function(){
    getData();

    $("button.atcbtn").on("click",function(){
        var id = $(this).data("id");
        var name = $(this).data("name");
        var price = $(this).data("price");

        var product = {
            id: id,
            name : name,
            price : price,
            qty : 1,
        }

        var cartStr = localStorage.getItem('cart')
        if (!cartStr){
            var productArr = new Array();
        }else {
            var productArr = JSON.parse(cartStr)
        }
        var status = false;
        $.each(productArr,function(i,v){
            if(v.id==id){
                v.qty++;
                status=true;
                return false;
            }
        })
            if (status==false){
                productArr.push(product);
            }

        
        localStorage.setItem('cart',JSON.stringify(productArr));
        getData()
    })

    function getData(){
    var cartStr = localStorage.getItem('cart');

    if (!cartStr){
        var data = "<h2><center>Your Cart is Empty!</center></h2>";
        $(".mytable").hide();
        $(".mycart").show();
        $(".mycart").html(data)
    }else{
        var body;
        var total=0;
        var cartArr= JSON.parse(cartStr);
        
        $.each(cartArr,function(i,v){
            total += v.qty * v.price;
            let id = i+1;
            body += `<tr>
                    <td>
                    <button class="delebtn">X</button>
                    ${id}
                    </td>
                    <td>${v.name}</td>
                    <td>
                    <button class="minbtn" data-index="${i}">-</button>
                    ${v.qty}
                    <button class="maxbtn" data-index="${i}">+</button>
                    </td>
                    <td>${v.price}</td>
                    </tr>`
           
        }) 
        body +=`<tr>
            <td colspan="3">Total</td>
            <td>${numberFormat(total)}</td>
        </tr>`
        $(".mycart").hide();
        $("#cartitems").html(body)
        $(".mytable").show();
    }
    }

    $("#cartitems").on("click",".minbtn",function () {
        var index = $(this).data('index');
        var cartStr = localStorage.getItem('cart');
        var cartArr = JSON.parse(cartStr);
        if(cartArr[index].qty>1){
            cartArr[index].qty--;
        }else{
            var status = confirm("Are you sure to Delete?");
           if(status == true){
            // delete that row
            cartArr.splice(index,1);
           }
        }
        // console.log(cartArr[index])
        localStorage.setItem('cart', JSON.stringify(cartArr));
        getData()
    })

    // Increase Qty
    $("#cartitems").on("click",".maxbtn",function () {
        var index = $(this).data('index');
        var cartStr = localStorage.getItem('cart');
        var cartArr = JSON.parse(cartStr);
        cartArr[index].qty++;
        // console.log(cartArr[index])
        localStorage.setItem('cart', JSON.stringify(cartArr));
        getData()
    })

    function numberFormat(x) {
        return x.toString().replace(/\B(?=(\d{3})+(?!\d))/g, ",");
    }
})