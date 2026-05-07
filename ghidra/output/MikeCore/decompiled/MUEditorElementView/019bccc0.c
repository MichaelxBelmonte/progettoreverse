// Function: FUN_019bccc0
// Address: 019bccc0
// Size: 1093 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019bd03e) */
/* WARNING: Removing unreachable block (ram,0x019bd047) */
/* WARNING: Removing unreachable block (ram,0x019bcfef) */
/* WARNING: Removing unreachable block (ram,0x019bcff8) */
/* WARNING: Removing unreachable block (ram,0x019bcf27) */
/* WARNING: Removing unreachable block (ram,0x019bcf30) */
/* WARNING: Removing unreachable block (ram,0x019bce09) */
/* WARNING: Removing unreachable block (ram,0x019bce11) */
/* WARNING: Removing unreachable block (ram,0x019bce16) */
/* WARNING: Removing unreachable block (ram,0x019bce32) */
/* WARNING: Removing unreachable block (ram,0x019bcd8d) */
/* WARNING: Removing unreachable block (ram,0x019bcd96) */
/* WARNING: Removing unreachable block (ram,0x019bce9b) */
/* WARNING: Removing unreachable block (ram,0x019bcea4) */
/* WARNING: Removing unreachable block (ram,0x019bcf8c) */
/* WARNING: Removing unreachable block (ram,0x019bcf95) */
/* WARNING: Removing unreachable block (ram,0x019bd098) */
/* WARNING: Removing unreachable block (ram,0x019bd0a1) */
/* WARNING: Removing unreachable block (ram,0x019bd003) */
/* WARNING: Removing unreachable block (ram,0x019bd00c) */

undefined4 FUN_019bccc0(void)

{
  longlong *plVar1;
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
  undefined4 extraout_XMM0_Da;
  undefined4 local_64;
  longlong *local_58;
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
  (**(code **)(*unaff_RDI + 0xe20))();
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d243f0();
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((longlong *)unaff_RDI[0x59] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x59] + 0x490))();
  }
  local_64 = 0;
  do {
    (**(code **)(*unaff_RDI + 0x658))();
    plVar1 = (longlong *)*unaff_RSI;
    if (plVar1 == local_58) {
      if (((char)unaff_RSI[1] == '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b00();
        goto LAB_019bce7c;
      }
      lVar2 = *unaff_RSI;
    }
    else {
      lVar2 = unaff_RSI[1];
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)local_58;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_019bce7c:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      lVar2 = *unaff_RSI;
    }
    if ((lVar2 == 0) || (iVar4 = FUN_01d3a5a0(), iVar4 == 6)) {
      if ((longlong *)unaff_RDI[0x59] != (longlong *)0x0) {
        (**(code **)(*(longlong *)unaff_RDI[0x59] + 0x4a0))();
      }
      (**(code **)(*unaff_RDI + 0xdf0))((int)DAT_023dccec,(int)DAT_023dccf4);
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      return local_64;
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
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_00d23480();
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0xe20))();
      uVar7 = (**(code **)(*local_58 + 0x50))();
      if ((char)uVar7 == '\0') {
        uVar7 = (**(code **)(*unaff_RDI + 0xdc8))(extraout_XMM0_Da,1);
      }
      plVar1 = (longlong *)unaff_RDI[0x59];
      local_64 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      if (plVar1 != (longlong *)0x0) {
        FUN_01d3b590();
        (**(code **)(*plVar1 + 0x498))(uVar10,uVar9);
      }
    }
  } while( true );
}


