pub trait MyTrait {
    type SomeType;
}

pub struct MyStruct {
    a: u8,
    b: u8,
    c: u8,
}

impl MyTrait for MyStruct {
    type SomeType = u8;
}

#[no_mangle]
pub extern "C" fn return_assoc(struct_: &MyStruct) -> <MyStruct as MyTrait>::SomeType {
    struct_.a + struct_.b + struct_.c
}

#[no_mangle]
pub extern "C" fn arg_assoc(
    assoc_type: <MyStruct as MyTrait>::SomeType,
) -> <MyStruct as MyTrait>::SomeType {
    assoc_type
}

#[no_mangle]
pub extern "C" fn add(a: u8, b: u8) -> u8 {
    a + b
}
