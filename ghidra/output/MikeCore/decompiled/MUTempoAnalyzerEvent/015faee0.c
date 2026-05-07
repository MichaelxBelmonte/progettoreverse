// Function: FUN_015faee0
// Address: 015faee0
// Size: 608 bytes
// Class: MUTempoAnalyzerEvent


void FUN_015faee0(int param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char *pcVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar6;
  int iVar7;
  longlong local_68;
  char local_60 [8];
  char local_38;
  
  iVar6 = *(int *)(*(longlong *)(unaff_RSI + 0x10) + 0xc) - param_2;
  if (iVar6 < 1) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_011dfb20();
    (**(code **)(*plVar3 + 0x18))();
    FUN_00d21370();
    iVar7 = 0;
    do {
      lVar1 = *(longlong *)
               (*(longlong *)(*(longlong *)(unaff_RSI + 0x10) + 0x10) + (longlong)param_2 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_015f94c0();
      FUN_015f95c0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      iVar7 = iVar7 + 1;
    } while (iVar6 != iVar7);
    FUN_00d23340();
    pcVar5 = &stack0xffffffffffffffc8;
    if (local_60[0] != '\0') {
      pcVar5 = local_60;
    }
    local_38 = local_60[0];
    *pcVar5 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    lVar1 = **(longlong **)(plVar3[2] + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if (param_1 == 0) {
      if (*(longlong *)(local_68 + 0x78) != 0) {
        *(undefined8 *)(local_68 + 0x78) = 0;
        FUN_00d50b20();
      }
      if (*(longlong *)(lVar1 + 0x78) != 0) {
        *(undefined8 *)(lVar1 + 0x78) = 0;
        FUN_00d50b20();
      }
    }
    else {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025c6af0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      puVar4[2] = 0;
      FUN_00d500e0();
      puVar4[2] = lVar1;
      *(int *)((longlong)puVar4 + 0xc) = param_1;
      puVar2 = *(undefined8 **)(local_68 + 0x78);
      if (puVar2 == puVar4) {
        FUN_00d50b20();
      }
      else {
        *(undefined8 **)(local_68 + 0x78) = puVar4;
        if (puVar2 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025c6af0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      puVar4[2] = 0;
      FUN_00d500e0();
      puVar4[2] = local_68;
      *(int *)((longlong)puVar4 + 0xc) = param_1;
      puVar2 = *(undefined8 **)(lVar1 + 0x78);
      if (puVar2 == puVar4) {
        FUN_00d50b20();
      }
      else {
        *(undefined8 **)(lVar1 + 0x78) = puVar4;
        if (puVar2 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    *unaff_RDI = plVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


