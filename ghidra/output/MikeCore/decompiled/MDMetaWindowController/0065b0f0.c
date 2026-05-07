// Function: FUN_0065b0f0
// Address: 0065b0f0
// Size: 586 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x0065b291) */
/* WARNING: Removing unreachable block (ram,0x0065b29a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0065b0f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong unaff_RDI;
  longlong lVar3;
  bool bVar4;
  undefined8 in_XMM1_Qb;
  longlong local_a8;
  char local_a0;
  undefined1 local_98 [16];
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_30;
  char local_28;
  
  local_98._8_8_ = in_XMM1_Qb;
  local_98._0_8_ = param_2;
  FUN_01e54250();
  if (local_30 == (longlong *)0x0) {
    bVar4 = false;
  }
  else {
    FUN_01e54250();
    FUN_01e40eb0();
    if (local_80 == 0) {
      bVar4 = false;
    }
    else {
      FUN_01e54250();
      FUN_01e40eb0();
      (**(code **)(*local_60 + 0x4a0))();
      bVar4 = *(int *)(local_a8 + 0xc) == 3;
      if (local_a0 != '\0') {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar4) {
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_30 + 0x450))();
    lVar3 = DAT_02725988;
    lVar1 = DAT_02725980;
    if (cVar2 == '\0') {
      if (DAT_02725988 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else if (DAT_02725980 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_00d50b00();
      lVar3 = lVar1;
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    FUN_00d70a00();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    blendps(local_98,_DAT_023b5ed0,0xd);
    (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x9b8))();
    FUN_01e40eb0();
    (**(code **)(*local_30 + 0x9b8))();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


