// Function: FUN_00b621b0
// Address: 00b621b0
// Size: 637 bytes
// Class: GNMidiFile


/* WARNING: Removing unreachable block (ram,0x00b62359) */
/* WARNING: Removing unreachable block (ram,0x00b62362) */

ulonglong FUN_00b621b0(void)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RBX;
  ulonglong uVar5;
  byte unaff_SIL;
  longlong unaff_RDI;
  undefined4 uVar6;
  longlong local_78;
  char local_70;
  
  iVar3 = FUN_00b61c60();
  puVar4 = DAT_027630b8;
  if (*(int *)(unaff_RDI + 0x20) < iVar3) {
    if (DAT_027630b8 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    unaff_RBX = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  *(byte *)(unaff_RDI + 0x58) = *(byte *)(unaff_RDI + 0x58) & 0xf;
  lVar1 = DAT_027630c0;
  bVar2 = unaff_SIL & 0xf0;
  if (0xef < unaff_SIL) {
    bVar2 = unaff_SIL;
  }
  if (bVar2 == 0xf0) {
    FUN_00b61d20();
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_025683c0;
    (*DAT_025683d8)();
    uVar6 = FUN_00c92170();
    uVar6 = FUN_00c92190(uVar6,1);
    if (0 < iVar3) {
      FUN_00c92190(uVar6,iVar3);
    }
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &DAT_02539e18;
    (*DAT_02539e30)();
    FUN_00b51c90();
    FUN_00b5d1a0(SUB84((double)*(int *)(unaff_RDI + 0x50) * *(double *)(unaff_RDI + 0x38),0));
    if ((*(char *)((longlong)iVar3 + -1 + *(longlong *)(unaff_RDI + 0x18)) != -9) &&
       (unaff_RBX = *(undefined8 **)(unaff_RDI + 0x60), unaff_RBX != puVar4)) {
      FUN_00d50b00();
      *(undefined8 **)(unaff_RDI + 0x60) = puVar4;
      if (unaff_RBX != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    FUN_00d50b20();
  }
  else {
    if (bVar2 == 0xf7) {
      if (*(longlong *)(unaff_RDI + 0x60) == 0) {
        *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) + 1;
      }
      else if (0 < iVar3) {
        uVar6 = FUN_00b51ee0();
        FUN_00c92190(uVar6,iVar3);
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((*(char *)(*(longlong *)(unaff_RDI + 0x18) + (ulonglong)(iVar3 - 1)) == -9) &&
           (*(longlong *)(unaff_RDI + 0x60) != 0)) {
          *(undefined8 *)(unaff_RDI + 0x60) = 0;
          FUN_00d50b20();
        }
      }
    }
    else {
      if (DAT_027630c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    uVar5 = 0;
  }
  FUN_00b61bc0();
  return uVar5 & 0xffffffff;
}


