// Function: FUN_00341be0
// Address: 00341be0
// Size: 710 bytes
// Class: MDEditorViewController


void FUN_00341be0(void)

{
  longlong lVar1;
  char cVar2;
  longlong *unaff_RDI;
  longlong local_78;
  char local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  longlong *local_30;
  char local_28;
  
  FUN_019f0ff0();
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *unaff_RDI + 0x20))();
    local_68 = (**(code **)(*local_30 + 0x68))();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      (**(code **)(*local_30 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *unaff_RDI + 0x20))();
    local_60 = (**(code **)(*local_30 + 0xc0))();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      (**(code **)(*local_30 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *unaff_RDI + 0x20))();
    local_58 = (**(code **)(*local_30 + 0xd0))();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      (**(code **)(*local_30 + 0x10))();
      FUN_00d50b20();
    }
    local_48 = 0;
    lVar1 = unaff_RDI[0xa8];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar1;
    (**(code **)(&UNK_000016f8 + *unaff_RDI))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_68 = FUN_01953bb0(local_68);
    local_60 = FUN_01953bb0(local_60);
    local_58 = FUN_01953bb0(local_58);
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *unaff_RDI + 0x20))();
    (**(code **)(*local_30 + 0x60))(local_68);
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      (**(code **)(*local_30 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *unaff_RDI + 0x20))();
    (**(code **)(*local_30 + 0xe0))(local_60,local_58);
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      (**(code **)(*local_30 + 0x10))();
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar1 = DAT_026f6d60;
  if (DAT_026f6d60 != 0) {
    FUN_00d50b00();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_78 = 0;
  local_70 = '\0';
  FUN_00d40470(&local_78,&stack0xffffffffffffffc0,1,3);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


