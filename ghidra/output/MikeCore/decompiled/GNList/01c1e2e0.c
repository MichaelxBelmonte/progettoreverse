// Function: FUN_01c1e2e0
// Address: 01c1e2e0
// Size: 3132 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01c1eb16) */
/* WARNING: Removing unreachable block (ram,0x01c1eb22) */
/* WARNING: Removing unreachable block (ram,0x01c1e9f0) */
/* WARNING: Removing unreachable block (ram,0x01c1ea00) */
/* WARNING: Removing unreachable block (ram,0x01c1e76d) */
/* WARNING: Removing unreachable block (ram,0x01c1e761) */
/* WARNING: Removing unreachable block (ram,0x01c1eefe) */
/* WARNING: Removing unreachable block (ram,0x01c1ef0a) */
/* WARNING: Removing unreachable block (ram,0x01c1e977) */
/* WARNING: Removing unreachable block (ram,0x01c1e9a0) */
/* WARNING: Removing unreachable block (ram,0x01c1e979) */
/* WARNING: Removing unreachable block (ram,0x01c1e9a2) */

void FUN_01c1e2e0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *unaff_RDI;
  longlong local_110;
  char local_108;
  longlong local_50;
  char local_48;
  int local_38;
  
  if ((int)unaff_RDI[0x2c] == 1) {
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_0083cb00();
    (**(code **)(*plVar3 + 0x18))();
    plVar2 = (longlong *)unaff_RDI[0x31];
    if (plVar2 == plVar3) {
      FUN_00d50b20();
    }
    else {
      unaff_RDI[0x31] = (longlong)plVar3;
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_01ce8670();
    plVar2 = (longlong *)unaff_RDI[0x31];
    FUN_01e3f820();
    (**(code **)(*plVar2 + 0x4d0))();
    (**(code **)(unaff_RDI[0x29] + 0x10))();
    FUN_00d50b00();
    FUN_01ce86a0();
    if (unaff_RDI + 0x29 != (longlong *)0x0) {
      (**(code **)(unaff_RDI[0x29] + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)unaff_RDI[0x31] + 0x558))();
    FUN_01cec040();
    plVar2 = (longlong *)unaff_RDI[0x31];
    lVar1 = unaff_RDI[0x33];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0x918))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_01ce8620();
    FUN_01cebef0();
    FUN_01cebf60();
    FUN_01ce84d0();
    FUN_01ceca60();
    FUN_01ceca50(DAT_023941f0);
    FUN_01ceca30();
    lVar1 = DAT_027e9288;
    if (DAT_027e9288 != 0) {
      FUN_00d50b00();
    }
    FUN_01ceb8d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    FUN_01ceb930();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027e9290;
    if (DAT_027e9290 != 0) {
      FUN_00d50b00();
    }
    FUN_01ceba50();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    FUN_01cebab0();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_01ce8720();
    lVar1 = unaff_RDI[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0x450))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else if ((int)unaff_RDI[0x2c] == 0) {
    plVar2 = (longlong *)FUN_00e8fc40();
    FUN_00074c30();
    (**(code **)(*plVar2 + 0x18))();
    FUN_01d95060();
    FUN_01e3f820();
    (**(code **)(*plVar2 + 0x4d0))();
    (**(code **)(*plVar2 + 0x558))();
    if (*(char *)((longlong)unaff_RDI + 0x1cc) == '\0') {
      FUN_01d9aec0();
      FUN_01d97870();
      FUN_01cf3e00();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d9aec0();
      FUN_01d97870();
      FUN_01cfb920();
      if (local_108 == '\0') {
        if (local_110 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_108 = '\0';
      }
      FUN_01cf3e00();
      if (local_110 != 0) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_00193110();
    (**(code **)(*plVar3 + 0x18))();
    lVar1 = unaff_RDI[0x30];
    unaff_RDI[0x30] = (longlong)plVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (*(int *)(unaff_RDI[0x34] + 0xc) != 0) {
      FUN_01ed4f00(0);
    }
    FUN_01dce540();
    FUN_01de0990();
    FUN_01dca0e0();
    FUN_01dcea50();
    FUN_01ed4f00(DAT_02421580);
    FUN_01d97ec0();
    FUN_01d92440();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x30];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01d978b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x34];
    if ((*(int *)(lVar1 + 0xc) == 0) || ((int)unaff_RDI[0x2c] == 0)) {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_02692468;
      puVar5[2] = &DAT_026927f8;
      puVar5[0xc] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined8 *)((longlong)puVar5 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x2c) = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0;
      *(undefined2 *)(puVar5 + 0xb) = 0;
      (*DAT_02692480)();
      FUN_01d97870();
      FUN_01e3f820();
      FUN_01db96b0(param_2);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = unaff_RDI[0x33];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01db9640();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_01dcbe90();
      FUN_00d50b20();
    }
    else {
      local_48 = '\0';
      local_50 = 0;
      local_38 = -1;
      while( true ) {
        lVar4 = (longlong)local_38;
        local_38 = local_38 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_38) break;
        local_50 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8);
        FUN_01dcbe90();
      }
      FUN_01de6a30();
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_0006daf0();
      *(undefined4 *)(puVar5 + 0x27) = 0;
      *puVar5 = &DAT_02697bb0;
      puVar5[2] = &DAT_026984e8;
      puVar5[0x28] = 0;
      *(undefined1 *)(puVar5 + 0x29) = 0;
      (*DAT_02697bc8)();
      FUN_01d97f00();
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      FUN_01dcc2d0();
    }
    plVar3 = (longlong *)unaff_RDI[0x30];
    FUN_01d97870();
    FUN_01e3f820();
    (**(code **)(*plVar3 + 0x4e8))(param_2);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(unaff_RDI[0x27] + 0x10))();
    FUN_00d50b00();
    FUN_01ed2d20();
    if (unaff_RDI + 0x27 != (longlong *)0x0) {
      (**(code **)(unaff_RDI[0x27] + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)(unaff_RDI[0x28] + 0x10))();
    FUN_00d50b00();
    FUN_01ed2de0();
    if (unaff_RDI + 0x28 != (longlong *)0x0) {
      (**(code **)(unaff_RDI[0x28] + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)(unaff_RDI[0x2a] + 0x10))();
    FUN_00d50b00();
    FUN_01de09b0();
    if (unaff_RDI + 0x2a != (longlong *)0x0) {
      (**(code **)(unaff_RDI[0x2a] + 0x10))();
      FUN_00d50b20();
    }
    FUN_01de5a60();
    lVar1 = DAT_027e9288;
    if (DAT_027e9288 != 0) {
      FUN_00d50b00();
    }
    FUN_01ddf130();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    FUN_01ddf190();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027e9290;
    if (DAT_027e9290 != 0) {
      FUN_00d50b00();
    }
    FUN_01ddf290();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    FUN_01ddf2f0();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)unaff_RDI[0x30] + 0x920))();
    (**(code **)(*(longlong *)unaff_RDI[0x30] + 0x540))();
    (**(code **)(*unaff_RDI + 0x450))();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


