// Function: FUN_00d9a330
// Address: 00d9a330
// Size: 522 bytes
// Class: Unknown


void FUN_00d9a330(void)

{
  short sVar1;
  longlong lVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  longlong local_48;
  char local_40;
  
  if (*unaff_RSI == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_025795a8;
  FUN_00d500e0();
  FUN_00d8a330();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if (((undefined8 *)puVar6[2] != (undefined8 *)0x0) && ((undefined8 *)puVar6[2] != puVar6 + 5)) {
    FUN_00e83070();
  }
  puVar6[2] = 0;
  if (*(int *)(puVar6 + 4) != -1) {
    FUN_00e83070();
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  }
  FUN_00d8dbf0();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  uVar5 = *(uint *)(puVar6 + 4);
  if (uVar5 == 0xffffffff) {
    if (puVar6[2] == 0) goto LAB_00d9a533;
    uVar5 = FUN_00e7dde0();
  }
  if (1 < (int)uVar5) {
    lVar7 = (ulonglong)uVar5 + 1;
    do {
      if (*(int *)(puVar6 + 4) == -1) {
        cVar3 = FUN_00d8ca70();
        sVar4 = (short)cVar3;
      }
      else {
        sVar4 = *(short *)(puVar6[3] + (ulonglong)(uVar5 - 1) * 2);
      }
      sVar1 = sVar4 + -0x20;
      if (0x19 < (ushort)(sVar4 - 0x61U)) {
        sVar1 = sVar4;
      }
      if (sVar4 == sVar1) {
        if (*(int *)(puVar6 + 4) == -1) {
          cVar3 = FUN_00d8ca70();
          sVar4 = (short)cVar3;
        }
        else {
          sVar4 = *(short *)(puVar6[3] + (ulonglong)(uVar5 - 2) * 2);
        }
        sVar1 = sVar4 + -0x20;
        if (0x19 < (ushort)(sVar4 - 0x61U)) {
          sVar1 = sVar4;
        }
        if (sVar4 != sVar1) {
          FUN_00e7b4e0();
          lVar2 = DAT_027259e0;
          if (DAT_027259e0 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8e100();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
        }
      }
      lVar7 = lVar7 + -1;
      uVar5 = uVar5 - 1;
    } while (2 < lVar7);
  }
LAB_00d9a533:
  *(byte *)((longlong)puVar6 + 0x24) = *(byte *)((longlong)puVar6 + 0x24) & 0xfe;
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


