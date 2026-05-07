// Function: FUN_00e80da0
// Address: 00e80da0
// Size: 652 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x00e80fb1) */
/* WARNING: Removing unreachable block (ram,0x00e80fba) */
/* WARNING: Removing unreachable block (ram,0x00e80fc5) */
/* WARNING: Removing unreachable block (ram,0x00e80fce) */

void FUN_00e80da0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  lVar5 = *unaff_RSI;
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar1 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x28) = lVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = *param_2;
  lVar1 = *(longlong *)(unaff_RDI + 0x30);
  if (lVar1 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x30) = lVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_0258a670;
  (*DAT_0258a688)();
  lVar5 = *(longlong *)(unaff_RDI + 0x38);
  *(undefined8 **)(unaff_RDI + 0x38) = puVar4;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_00e38130(1,1,0);
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  lVar5 = *(longlong *)(unaff_RDI + 0x40);
  *(undefined8 **)(unaff_RDI + 0x40) = puVar4;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_00d22760();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*pcVar3)();
  lVar5 = *(longlong *)(unaff_RDI + 0x48);
  *(undefined8 **)(unaff_RDI + 0x48) = puVar4;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_00d22760();
  lVar5 = *(longlong *)(unaff_RDI + 0x30);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_019b43b0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_019b43b0();
  plVar2 = *(longlong **)(unaff_RDI + 0x50);
  if (plVar2 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*plVar2 + 0x10))();
    }
    if (param_1 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0x10))();
      FUN_00d50b00();
    }
    *(longlong **)(unaff_RDI + 0x50) = param_1;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


