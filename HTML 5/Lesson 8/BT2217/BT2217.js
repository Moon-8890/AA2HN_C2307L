function Save(){
    var text = document.getElementById('tieude').value
    var noidung = document.getElementById('content').value
    if( tieude == '',noidung ==''){
        alert("điền đủ thông tin")
    }
    else{
        alert("đăng nhập thành công")
    }
}
function Reset(){
    document.getElementById("myform").Reset();
}