// Function: FUN_00e2d190
// Address: 00e2d190
// Size: 583 bytes
// Class: GNString


ulonglong FUN_00e2d190(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  
  if (*(longlong *)(unaff_RDI + 0x30) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x30);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00c7b220();
    if ((cVar3 == 'b') && (*(int *)(*(longlong *)(unaff_RDI + 0x28) + 0xc) == 2)) {
      FUN_00e2df40();
      if (local_b0 == 0) {
        uVar4 = 0;
      }
      else {
        FUN_00e2df40();
        FUN_00c798d0();
        if (local_a0 == 0) {
          uVar4 = 0;
        }
        else {
          FUN_00e2df40();
          FUN_00c798d0();
          lVar2 = DAT_02772658;
          if (DAT_02772658 != 0) {
            FUN_00d50b00();
          }
          cVar3 = (**(code **)(*local_80 + 0x50))();
          if (cVar3 == '\0') {
            uVar4 = 0;
          }
          else {
            FUN_00e2df40();
            if (local_60 == 0) {
              uVar4 = 0;
            }
            else {
              FUN_00e2df40();
              cVar3 = FUN_00c7b220();
              uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),cVar3 == 'b');
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar4 = 0;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return uVar4 & 0xffffffff;
}


