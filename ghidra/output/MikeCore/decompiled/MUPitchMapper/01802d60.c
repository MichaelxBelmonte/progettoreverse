// Function: FUN_01802d60
// Address: 01802d60
// Size: 2518 bytes
// Class: MUPitchMapper


/* WARNING: Removing unreachable block (ram,0x0180366d) */
/* WARNING: Removing unreachable block (ram,0x01803676) */
/* WARNING: Removing unreachable block (ram,0x01803577) */
/* WARNING: Removing unreachable block (ram,0x01803580) */
/* WARNING: Removing unreachable block (ram,0x01803481) */
/* WARNING: Removing unreachable block (ram,0x0180348a) */
/* WARNING: Removing unreachable block (ram,0x0180338b) */
/* WARNING: Removing unreachable block (ram,0x01803394) */
/* WARNING: Removing unreachable block (ram,0x01803295) */
/* WARNING: Removing unreachable block (ram,0x0180329e) */
/* WARNING: Removing unreachable block (ram,0x01803127) */
/* WARNING: Removing unreachable block (ram,0x01803130) */
/* WARNING: Removing unreachable block (ram,0x01802ef2) */
/* WARNING: Removing unreachable block (ram,0x01802efb) */
/* WARNING: Removing unreachable block (ram,0x0180321a) */
/* WARNING: Removing unreachable block (ram,0x01803223) */
/* WARNING: Removing unreachable block (ram,0x01803310) */
/* WARNING: Removing unreachable block (ram,0x01803319) */
/* WARNING: Removing unreachable block (ram,0x01803406) */
/* WARNING: Removing unreachable block (ram,0x0180340f) */
/* WARNING: Removing unreachable block (ram,0x018034fc) */
/* WARNING: Removing unreachable block (ram,0x01803505) */
/* WARNING: Removing unreachable block (ram,0x018035f2) */
/* WARNING: Removing unreachable block (ram,0x018035fb) */
/* WARNING: Removing unreachable block (ram,0x018036e8) */
/* WARNING: Removing unreachable block (ram,0x018036f1) */
/* WARNING: Removing unreachable block (ram,0x01802f58) */
/* WARNING: Removing unreachable block (ram,0x01802f61) */

void FUN_01802d60(void)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 *local_98;
  char local_90;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  plVar3 = DAT_028af7b8;
  if (DAT_028af7b8 != (longlong *)0x0) {
    FUN_01800300();
    (**(code **)(*local_48 + 0x3c0))();
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    cVar1 = (**(code **)(*plVar3 + 0x50))();
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') {
      if (DAT_028af7a8 == (undefined8 *)0x0) goto LAB_01802e4f;
      DAT_028af7a8 = (undefined8 *)0x0;
      FUN_00d50b20();
    }
  }
  if ((DAT_028af7a8 != (undefined8 *)0x0) && (DAT_028af7b1 != '\0')) {
    return;
  }
LAB_01802e4f:
  FUN_00e8cb50();
  if (DAT_028af7a8 == (undefined8 *)0x0) {
    FUN_01800300();
    cVar1 = (**(code **)(*local_38 + 0x398))();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      FUN_01800300();
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_00c8e830();
      if (local_30 == '\0') {
        if (local_38 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      if (local_38 != (longlong *)0x0) {
        FUN_00c92170();
      }
      FUN_00ca9940();
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      FUN_01800c00();
      if (DAT_028af7a8 != local_98) {
        puVar2 = DAT_028af7a8;
        if (local_90 == '\0') {
          if (local_98 != (undefined8 *)0x0) {
            FUN_00d50b00();
            puVar2 = DAT_028af7a8;
          }
        }
        else {
          local_90 = '\0';
        }
        DAT_028af7a8 = local_98;
        if (puVar2 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_98 != (undefined8 *)0x0) && (DAT_028af7b0 == '\0')) {
        DAT_028af7b0 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01800300();
      (**(code **)(*local_68 + 0x3c0))();
      plVar3 = DAT_028af7b8;
      if (DAT_028af7b8 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == (longlong *)0x0) {
            plVar3 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar3 = local_38;
          }
        }
        else {
          local_30 = '\0';
          plVar3 = local_38;
        }
        bVar4 = DAT_028af7b8 != (longlong *)0x0;
        DAT_028af7b8 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
          plVar3 = local_38;
        }
      }
      if ((plVar3 != (longlong *)0x0) && (DAT_028af7c0 == '\0')) {
        DAT_028af7c0 = '\x01';
        FUN_00e8cb90();
        plVar3 = local_38;
      }
      if ((local_30 != '\0') && (plVar3 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (DAT_028af7a8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02572358;
      (*DAT_02572370)();
      bVar4 = DAT_028af7a8 == (undefined8 *)0x0;
      DAT_028af7a8 = puVar2;
      if (((bVar4) || (FUN_00d50b20(), DAT_028af7a8 != (undefined8 *)0x0)) && (DAT_028af7b0 == '\0')
         ) {
        DAT_028af7b0 = '\x01';
        FUN_00e8cb90();
      }
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02608800;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      *(undefined1 *)(puVar2 + 2) = 1;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0x41200000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02608800;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
      *(undefined1 *)(puVar2 + 2) = 1;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0x41100000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02608800;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(undefined4 *)((longlong)puVar2 + 0xc) = 2;
      *(undefined1 *)(puVar2 + 2) = 1;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0x41000000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02608800;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(undefined4 *)((longlong)puVar2 + 0xc) = 3;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0x40200000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02608800;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(undefined4 *)((longlong)puVar2 + 0xc) = 4;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0x40333333;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02608800;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0x40a00000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02608800;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(undefined4 *)((longlong)puVar2 + 0xc) = 6;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0xc0400000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02608800;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(undefined4 *)((longlong)puVar2 + 0xc) = 7;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0x3f000000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02608800;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(undefined4 *)((longlong)puVar2 + 0xc) = 9;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0xbf800000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02608800;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(undefined4 *)((longlong)puVar2 + 0xc) = 10;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02608800;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0xd;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0x42c80000;
      FUN_00d21140();
      FUN_00d50b20();
    }
    FUN_00d242c0();
    DAT_028af7b1 = 1;
    FUN_00e8cb70();
  }
  else {
    DAT_028af7b1 = 1;
    FUN_00e8cb70();
  }
  return;
}


