// Function: FUN_00341860
// Address: 00341860
// Size: 512 bytes
// Class: MDEditorViewController


void FUN_00341860(void)

{
  char cVar1;
  longlong *unaff_RDI;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *local_28;
  char local_20;
  
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_28 + 0x450))();
  if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *unaff_RDI + 0x20))();
    uVar2 = (**(code **)(*local_28 + 0x68))();
    if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *unaff_RDI + 0x20))();
    uVar3 = (**(code **)(*local_28 + 0xc0))();
    if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *unaff_RDI + 0x20))();
    uVar4 = (**(code **)(*local_28 + 0xd0))();
    if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)(&UNK_000016f0 + *unaff_RDI))();
    uVar2 = FUN_0193c6b0(uVar2);
    uVar3 = FUN_0193c6b0(uVar3);
    uVar4 = FUN_0193c6b0(uVar4);
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *unaff_RDI + 0x20))();
    (**(code **)(*local_28 + 0x60))(uVar2);
    if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *unaff_RDI + 0x20))();
    (**(code **)(*local_28 + 0xe0))(uVar3,uVar4);
    if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x10))();
      FUN_00d50b20();
    }
  }
  FUN_019f0fd0();
  (**(code **)(*unaff_RDI + 0x7b8))();
  (**(code **)(*local_28 + 0x620))();
  if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


