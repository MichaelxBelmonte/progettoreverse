// Function: FUN_019c6750
// Address: 019c6750
// Size: 881 bytes
// Class: MUEditorElementView


ulonglong FUN_019c6750(undefined8 param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *unaff_RDI;
  undefined8 *puVar5;
  longlong local_d0 [2];
  undefined1 local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  ulonglong local_78;
  char local_70;
  ulonglong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  uVar4 = 0;
  cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *unaff_RDI))();
  if (cVar2 != '\0') {
    (**(code **)(*unaff_RDI + 0xe20))();
    if (local_a8 == (undefined8 *)0x0) {
      uVar4 = 1;
    }
    else {
      (**(code **)(*unaff_RDI + 0xe20))();
      uVar4 = (ulonglong)(*(int *)(local_48 + 0xc) == 0);
      if (local_40 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar4 == '\0') {
      (**(code **)(*unaff_RDI + 0xe20))();
      lVar1 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_c0 = 1;
      uVar3 = FUN_019c5150();
      puVar5 = local_a8;
      if (local_a8 == (undefined8 *)0x0) {
        local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        puVar5 = (undefined8 *)0x0;
      }
      else {
        if (local_a0 == '\0') {
          FUN_00d50b00();
        }
        local_34 = 0;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (((param_2 != '\0') && (puVar5 != (undefined8 *)0x0)) &&
         (*(int *)((longlong)puVar5 + 0xc) != 0)) {
        FUN_019c5bf0();
        FUN_00d403d0();
        local_b8 = DAT_026de568;
        if (DAT_026de568 != 0) {
          FUN_00d50b00();
        }
        local_b0 = '\x01';
        FUN_00d50b00();
        lVar1 = DAT_026de560;
        if (DAT_026de560 != 0) {
          FUN_00d50b00();
        }
        local_d0[0] = lVar1;
        FUN_00083ea0(2,local_d0);
        FUN_000b4da0();
        uVar4 = local_78;
        local_50 = 0;
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_50 = '\x01';
        local_58 = uVar4;
        FUN_00d40470(&local_58,&stack0xffffffffffffff98,1,0);
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        local_a8 = (undefined8 *)&DAT_0253d630;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        local_a8 = &DAT_024c5048;
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0xda0))();
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      if ((char)local_34 == '\0' && puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4 & 0xffffffff;
}


