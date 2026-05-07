// Function: FUN_01741b90
// Address: 01741b90
// Size: 539 bytes
// Class: GNString


void FUN_01741b90(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  byte bVar7;
  uint uVar8;
  char unaff_SIL;
  longlong *unaff_RDI;
  
  iVar3 = FUN_017484c0();
  if (iVar3 == -1) {
    lVar1 = unaff_RDI[0xb];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736c50();
    iVar4 = (**(code **)(*unaff_RDI + 0x370))();
    cVar2 = (**(code **)(*unaff_RDI + 0x400))();
    iVar3 = 0;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    uVar5 = (uint)(iVar3 - iVar4 != 0);
    uVar5 = (iVar4 + (((iVar3 - iVar4) - uVar5) / 0xc + uVar5) * 0xc) % 0xc;
    if (cVar2 != '\0') {
      bVar7 = (char)uVar5 + 3;
      uVar5 = (uint)(byte)(bVar7 + (bVar7 / 3 & 0xfc) * -3);
    }
    iVar3 = 0;
    if (uVar5 != 0) {
      uVar8 = 0;
      iVar3 = -0xc;
      do {
        iVar4 = iVar3;
        iVar3 = uVar8 + 7;
        uVar8 = iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 1) - (iVar3 >> 0x1f)) * -0xc;
        iVar3 = iVar4 + 1;
      } while (uVar8 != uVar5);
      iVar3 = iVar4 + 0xd;
      if (4 < iVar4 + 0xcU) {
        iVar3 = iVar4 + 1;
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    iVar4 = (**(code **)(*unaff_RDI + 0x370))();
    iVar3 = 0;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    uVar5 = (uint)(iVar3 - iVar4 != 0);
    uVar5 = (iVar4 + (((iVar3 - iVar4) - uVar5) / 0xc + uVar5) * 0xc) % 0xc;
    iVar3 = 0;
    if (uVar5 != 0) {
      uVar8 = 0;
      iVar3 = -0xc;
      do {
        iVar4 = iVar3;
        iVar3 = uVar8 + 7;
        uVar8 = iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 1) - (iVar3 >> 0x1f)) * -0xc;
        iVar3 = iVar4 + 1;
      } while (uVar8 != uVar5);
      iVar3 = iVar4 + 0xd;
      if (4 < iVar4 + 0xcU) {
        iVar3 = iVar4 + 1;
      }
    }
  }
  if (unaff_SIL == '\0') {
    *(int *)((longlong)unaff_RDI + 0x6c) = iVar3;
    return;
  }
  FUN_00d64850();
  *(int *)((longlong)unaff_RDI + 0x6c) = iVar3;
  FUN_00d64910();
  return;
}


