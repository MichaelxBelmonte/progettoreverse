// Function: FUN_01aa4b90
// Address: 01aa4b90
// Size: 1188 bytes
// Class: MUPlaybackView


/* WARNING: Removing unreachable block (ram,0x01aa4fca) */
/* WARNING: Removing unreachable block (ram,0x01aa4fd3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa4b90(void)

{
  float fVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  if (*(longlong *)(unaff_RSI + 0x1a0) == 0) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(puVar3 + 0x27) = 0;
    puVar3[0x2e] = 0;
    *(undefined4 *)(puVar3 + 0x2f) = 0;
    puVar3[0x30] = 0;
    *(undefined1 *)(puVar3 + 0x31) = 0;
    puVar3[0x28] = 0;
    puVar3[0x29] = 0;
    *(undefined4 *)(puVar3 + 0x2a) = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x165) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x18c) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x199) = 0;
    puVar3[0x35] = 0;
    puVar3[0x36] = 0;
    puVar3[0x37] = 0;
    puVar3[0x38] = 0;
    puVar3[0x39] = 0;
    *puVar3 = &DAT_02675388;
    puVar3[2] = &DAT_02675e68;
    *(undefined1 *)(puVar3 + 0x3a) = 0;
    (*DAT_026753a0)();
    puVar2 = *(undefined8 **)(unaff_RSI + 0x1a0);
    if (puVar2 == puVar3) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RSI + 0x1a0) = puVar3;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RSI + 0x1a0) + 0x4d0))(0);
    (**(code **)(**(longlong **)(unaff_RSI + 0x1a0) + 0x570))();
    lVar5 = *(longlong *)(unaff_RSI + 0x1a8);
  }
  else {
    lVar5 = *(longlong *)(unaff_RSI + 0x1a8);
  }
  if (lVar5 == 0) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(puVar3 + 0x27) = 0;
    puVar3[0x2e] = 0;
    *(undefined4 *)(puVar3 + 0x2f) = 0;
    puVar3[0x30] = 0;
    *(undefined1 *)(puVar3 + 0x31) = 0;
    puVar3[0x28] = 0;
    puVar3[0x29] = 0;
    *(undefined4 *)(puVar3 + 0x2a) = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x165) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x18c) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x199) = 0;
    puVar3[0x35] = 0;
    puVar3[0x36] = 0;
    puVar3[0x37] = 0;
    puVar3[0x38] = 0;
    puVar3[0x39] = 0;
    *puVar3 = &DAT_02675388;
    puVar3[2] = &DAT_02675e68;
    *(undefined1 *)(puVar3 + 0x3a) = 0;
    (*DAT_026753a0)();
    puVar2 = *(undefined8 **)(unaff_RSI + 0x1a8);
    if (puVar2 == puVar3) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RSI + 0x1a8) = puVar3;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RSI + 0x1a8) + 0x4d0))(0,_DAT_0241c520);
    (**(code **)(**(longlong **)(unaff_RSI + 0x1a8) + 0x570))();
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(plVar4 + 0x27) = 0;
    plVar4[0x2e] = 0;
    *(undefined4 *)(plVar4 + 0x2f) = 0;
    plVar4[0x30] = 0;
    *(undefined1 *)(plVar4 + 0x31) = 0;
    plVar4[0x28] = 0;
    plVar4[0x29] = 0;
    *(undefined4 *)(plVar4 + 0x2a) = 0;
    plVar4[0x2b] = 0;
    plVar4[0x2c] = 0;
    *(undefined8 *)((longlong)plVar4 + 0x165) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x18c) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x194) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x199) = 0;
    plVar4[0x35] = 0;
    plVar4[0x36] = 0;
    plVar4[0x37] = 0;
    plVar4[0x38] = 0;
    *(undefined4 *)((longlong)plVar4 + 500) = 0;
    *(undefined1 *)(plVar4 + 0x3f) = 0;
    plVar4[0x43] = 0;
    plVar4[0x3c] = 0;
    plVar4[0x3d] = 0;
    plVar4[0x3a] = 0;
    plVar4[0x3b] = 0;
    *(undefined1 *)(plVar4 + 0x3e) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x1fc) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x204) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x20c) = 0;
    *plVar4 = (longlong)&DAT_0263fb98;
    plVar4[2] = (longlong)&DAT_02640670;
    plVar4[0x39] = (longlong)&DAT_026406b0;
    (*DAT_0263fbb0)();
    (**(code **)(*plVar4 + 0x4d0))(DAT_023b8c38);
    (**(code **)(*plVar4 + 0x558))();
    (**(code **)(*plVar4 + 0x928))(0);
    FUN_00d50b00();
    (**(code **)(*plVar4 + 0xa20))();
    if (unaff_RSI != 0) {
      FUN_00d50b20();
    }
    lVar5 = DAT_027e2d60;
    if (DAT_027e2d60 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0xa10))();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RSI + 0x1a8) + 0x450))();
    FUN_00d50b20();
  }
  fVar1 = *(float *)(unaff_RSI + 0x198);
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    lVar5 = *(longlong *)(unaff_RSI + 0x1a8);
  }
  else {
    lVar5 = *(longlong *)(unaff_RSI + 0x1a0);
  }
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


