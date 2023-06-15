var bweInterop = {};
bweInterop.getWindowSize = function () {
    var size = {
        width: window.innerWidth,
        height: window.innerHeight
}
return size;
}

bweInterop.registerResizeHandler = function (dotNetObjectRef) {
    function resizeHandler() {
        dotNetObjectRef.invokeMethodAsync('GetWindowSize',
            {
                width: window.innerWidth,
                height: window.innerHeight
            });
    };
    resizeHandler();
    window.addEventListener("resize", resizeHandler);
}



//export { bweInterop };


//export function getWindowSize()
//{
//    var size = {
//        width: window.innerWidth,
//        height: window.innerHeight
//    }
//    return size;
//}
