// Function: FUN_0193e5c0
// Address: 0193e5c0
// Size: 980 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x0193e8d4) */
/* WARNING: Removing unreachable block (ram,0x0193e8dd) */
/* WARNING: Removing unreachable block (ram,0x0193e87e) */
/* WARNING: Removing unreachable block (ram,0x0193e887) */
/* WARNING: Removing unreachable block (ram,0x0193e78b) */
/* WARNING: Removing unreachable block (ram,0x0193e794) */
/* WARNING: Removing unreachable block (ram,0x0193e68d) */
/* WARNING: Removing unreachable block (ram,0x0193e696) */
/* WARNING: Removing unreachable block (ram,0x0193e6f9) */
/* WARNING: Removing unreachable block (ram,0x0193e701) */
/* WARNING: Removing unreachable block (ram,0x0193e706) */
/* WARNING: Removing unreachable block (ram,0x0193e722) */
/* WARNING: Removing unreachable block (ram,0x0193e819) */
/* WARNING: Removing unreachable block (ram,0x0193e822) */
/* WARNING: Removing unreachable block (ram,0x0193e937) */
/* WARNING: Removing unreachable block (ram,0x0193e940) */
/* WARNING: Removing unreachable block (ram,0x0193e91a) */
/* WARNING: Removing unreachable block (ram,0x0193e927) */

undefined4 FUN_0193e5c0(void)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_98;
  longlong local_58;
  char local_50;
  
  FUN_01d3abf0();
  uVar8 = FUN_01e466c0();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*pcVar3)();
  (**(code **)(*unaff_RDI + 0x3f8))();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d243f0();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_98 = 0;
  do {
    (**(code **)(*unaff_RDI + 0x658))();
    lVar1 = *unaff_RSI;
    if (lVar1 == local_58) {
      if (((char)unaff_RSI[1] == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
        goto LAB_0193e76c;
      }
      lVar1 = *unaff_RSI;
    }
    else {
      lVar2 = unaff_RSI[1];
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = local_58;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_0193e76c:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      lVar1 = *unaff_RSI;
    }
    if ((lVar1 == 0) || (iVar4 = FUN_01d3a5a0(), iVar4 == 6)) {
      (**(code **)(*unaff_RDI + 0xdf0))((int)DAT_023dccec,(int)DAT_023dccf4);
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      return local_98;
    }
    iVar4 = FUN_01d3a5a0();
    if (iVar4 == 5) {
      FUN_01d3abf0();
      uVar9 = FUN_01e466c0();
      uVar10 = FUN_00d05580(uVar8);
      (**(code **)(*unaff_RDI + 0xdf0))();
      FUN_00d216c0();
      FUN_00d23480();
      (**(code **)(*unaff_RDI + 0xb38))(uVar10,uVar9);
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_00d23480();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      uVar7 = (**(code **)(*(longlong *)unaff_RDI[0x41] + 0x50))();
      local_98 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      if ((char)uVar7 == '\0') {
        (**(code **)(&DAT_00001710 + *unaff_RDI))();
      }
    }
  } while( true );
}


