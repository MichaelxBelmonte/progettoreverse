// Function: FUN_01d3a930
// Address: 01d3a930
// Size: 575 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01d3a9cd) */
/* WARNING: Removing unreachable block (ram,0x01d3a9d6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d3a930(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  char unaff_SIL;
  longlong *unaff_RDI;
  bool bVar5;
  double dVar6;
  undefined8 local_38;
  undefined1 local_30;
  
  iVar1 = DAT_02802f70 + -1;
  bVar5 = 0 < DAT_02802f70;
  DAT_02802f70 = 0;
  if (bVar5) {
    DAT_02802f70 = iVar1;
  }
  lVar3 = *unaff_RDI;
  if (lVar3 == 0) {
    DAT_02802f74 = 0;
  }
  else if ((*(uint *)(lVar3 + 0xc) < 7) && ((0x62U >> (*(uint *)(lVar3 + 0xc) & 0x1f) & 1) != 0)) {
    DAT_02802f90 = *(undefined8 *)(lVar3 + 0x28);
  }
  FUN_01f27fe0();
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01d3a99e;
    }
    bVar5 = true;
  }
  else {
LAB_01d3a99e:
    bVar5 = local_38 == (longlong *)0x0;
    if ((!bVar5) && (unaff_SIL == '\0')) {
      if (*(int *)((longlong)local_38 + 0xdc) == 0) {
        FUN_01f45600();
        unaff_SIL = local_38 != (longlong *)0x0;
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        unaff_SIL = true;
      }
      bVar5 = false;
    }
  }
  FUN_01d3a740();
  if (!bVar5) {
    (**(code **)(*local_38 + 0x6a0))();
  }
  FUN_01d3a660();
  if (!bVar5) {
    cVar4 = (**(code **)(*local_38 + 0x4f0))();
    if (cVar4 != '\0') {
      FUN_01d3a740();
      (**(code **)(*local_38 + 0x4e8))();
      FUN_01d3a740();
    }
    FUN_01d3a740();
    cVar4 = (**(code **)(*local_38 + 0x4e0))();
    if (cVar4 != '\0') {
      _DAT_02802f80 = (double)FUN_00e7d6f0();
      FUN_01d3a740();
      (**(code **)(*local_38 + 0x4d8))();
      FUN_01d3a740();
      dVar6 = (double)FUN_00e7d6f0();
      DAT_02802f78 = (float)((dVar6 - _DAT_02802f80) / DAT_02422df0);
    }
  }
  if (*unaff_RDI != 0) {
    uVar2 = *(uint *)(*unaff_RDI + 0xc);
    if ((uVar2 < 6) && ((0x3aU >> (uVar2 & 0x1f) & 1) != 0)) goto LAB_01d3aaf6;
    if ((unaff_SIL == '\0') && ((DAT_02802f70 == 0 && (FUN_01d3a740(), !bVar5)))) {
      (**(code **)(*local_38 + 0x698))();
    }
    if (*unaff_RDI != 0) goto LAB_01d3aaf6;
  }
  if (((unaff_SIL == '\0') && (DAT_02802f70 == 0)) && (FUN_01d3a740(), !bVar5)) {
    (**(code **)(*local_38 + 0x698))();
  }
LAB_01d3aaf6:
  FUN_00e8f8c0();
  if (!bVar5) {
    FUN_00d50b20();
  }
  return;
}


